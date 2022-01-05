// 
// Copyright camila314 & alk1m123 2022. 
//
#include "Core.hpp"

namespace Cacao::core {

	BaseContainer::BaseContainer(uintptr_t address) {
		m_address = address;
	}

	BaseContainer::~BaseContainer() { }

	void BaseContainer::enable() { }

	void BaseContainer::disable() { }

	uintptr_t BaseContainer::getAddress() {
		return m_address;
	}


	MemoryContainer::MemoryContainer(uintptr_t address, size_t byteCount, const char* bytes) : BaseContainer(address) {
		m_byteCount = byteCount;

		char* buffer = new char[byteCount];
		lilac::Memory::write((void*)buffer, (void*)address, byteCount);

		m_originalBytes = buffer;
		m_moddedBytes = bytes;
	}

	void MemoryContainer::enable() {
		lilac::Memory::write((void*)m_address, (void*)m_moddedBytes, m_byteCount);
	}
	void MemoryContainer::disable() {
		lilac::Memory::write((void*)m_address, (void*)m_originalBytes, m_byteCount);
	}

	MemoryContainer::~MemoryContainer() {
		delete[] m_originalBytes;
	}


	HookContainer::HookContainer(uintptr_t address, func_t function) : BaseContainer(address) {
		m_address = address;
		m_function = function;
	}

	HookContainer::~HookContainer() {
		lilac::Hooks::remove(m_handle);
	}

	void HookContainer::enable() {
		m_handle = lilac::Hooks::add((void*)m_address, (void*)m_function);
	}
	void HookContainer::disable() {
		lilac::Hooks::remove(m_handle);
	}

	void ModContainer::enable() {
		for (BaseContainer* i : m_mods) i->enable();
	}
	void ModContainer::disable() {
		for (BaseContainer* i : m_mods) i->disable();
	}

	ModContainer::ModContainer(std::string name) {
		m_name = name;
		m_object = nullptr;
	}

	ModContainer::~ModContainer() {
		disable();
		for (BaseContainer* i : m_mods) delete i;
		if (m_object) delete m_object;
	}


	void ModContainer::registerWrite(uintptr_t address, size_t byteCount, const char* bytes) {
		MemoryContainer* write = new MemoryContainer(address, byteCount, bytes);
		m_mods.push_back(write);
	}

	void ModContainer::registerWriteEnable(uintptr_t address, size_t byteCount, const char* bytes) {
		registerWrite(address, byteCount, bytes);
		m_mods.back()->enable();
	}

	void ModContainer::registerHook(uintptr_t address, uintptr_t function) {
		HookContainer* hook = new HookContainer(address, (func_t)function);
		m_mods.push_back(hook);
	}

	void ModContainer::registerHookEnable(uintptr_t address, uintptr_t function) {
		registerHook(address, function);
		m_mods.back()->enable();
	}

	
	std::map<std::string, ModContainer*>& ModInterface::allContainers() {
		static std::map<std::string, ModContainer*> s_containers = {}; 
		return s_containers;
	}

	ModContainer& ModInterface::container(const std::string& name) {
		if (!exists(name)) {
			allContainers()[name] = new ModContainer(name);
		}
		return *allContainers()[name];
	}

	bool ModInterface::exists(const std::string& name) {
		return allContainers().find(name) != allContainers().end();
	}

	void* ModInterface::object(const std::string& name) {
		return allContainers()[name]->m_object;
	}


	void ModInterface::destructContainers() {
		for (auto& [k, container] : ModInterface::allContainers()) {
			delete container;
		}
	}

	const int destruct = std::atexit(ModInterface::destructContainers);

}	// Cacao::core

#if defined(CC_TARGET_OS_MAC)
	#include <mach-o/dyld.h>
#elif defined(CC_TARGET_OS_WIN32)
	#include <windows.h>
#elif defined(CC_TARGET_OS_IPHONE)
	#include <mach-o/dyld.h>
#elif defined(CC_TARGET_OS_ANDROID)
	#include <dlfcn.h>
#endif
uintptr_t getBase() {
	#if defined(CC_TARGET_OS_MAC)
		return _dyld_get_image_vmaddr_slide(0)+0x100000000;
	#elif defined(CC_TARGET_OS_WIN32)
		return reinterpret_cast<uintptr_t>(GetModuleHandle(0));
	#elif defined(CC_TARGET_OS_IPHONE)
		return _dyld_get_image_vmaddr_slide(0)+0x100000000;
	#elif defined(CC_TARGET_OS_ANDROID)
		return reinterpret_cast<uintptr_t>(dlopen("libcocos2dcpp.so", RTLD_LAZY));
	#else
		return 0;
	#endif
}
