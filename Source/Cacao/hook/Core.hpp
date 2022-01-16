// 
// Copyright camila314 & alk1m123 2022. 
//
#pragma once
#pragma GCC visibility push(default)

#include <cstddef>
#include <string>
#include <vector>
#include <map>

#include <lilac_hook.hpp>

namespace Cacao::core {

	typedef void(*func_t)();

	//
	// Base container type for hooks and patches
	//
	class BaseContainer {
	public:
		uintptr_t m_address;
		
	protected:
		BaseContainer(uintptr_t address);
		virtual ~BaseContainer();

		virtual void enable();
		virtual void disable();

		uintptr_t getAddress();

		friend class ModContainer;
	};

	class MemoryContainer : public BaseContainer {
	private:
		const char* m_originalBytes;
		const char* m_moddedBytes;
		size_t m_byteCount;

	protected:
		MemoryContainer(uintptr_t address, size_t byteCount, const char* bytes);
		virtual ~MemoryContainer();

		virtual void enable();
		virtual void disable();

		friend class ModContainer;
	};

	class HookContainer : public BaseContainer {
	private:
		func_t m_function;
		lilac::HookHandle m_handle;

	protected:
		HookContainer(uintptr_t address, func_t function);
		virtual ~HookContainer();

		virtual void enable();
		virtual void disable();

		friend class ModContainer;
	};

	class ModContainer;
	class ModObject {
	protected:
		virtual ~ModObject() {}
		friend class ModContainer;
	};
	class ModInterface;

	//
	// Mod container that contains all the base containers
	//
	class ModContainer {
	private:
		std::vector<BaseContainer*> m_mods;
		std::string m_name;
		ModObject* m_object;

	protected:
		ModContainer(std::string name);
		virtual ~ModContainer();

	public:
		void enable();
		void disable();
		inline std::string& getName() {return m_name;}

	public:
		// Registers a write of bytes to the address that is byteCount long
		void registerWrite(uintptr_t address, size_t byteCount, const char* bytes);
		void registerWriteEnable(uintptr_t address, size_t byteCount, const char* bytes);
		

		// Registers a function hook to the address
		void registerHook(uintptr_t address, uintptr_t function); 
		void registerHookEnable(uintptr_t address, uintptr_t function);

		friend class ModInterface;
	};

	class ModInterface {
	public:
		static std::map<std::string, ModContainer*>& allContainers();

		static ModContainer& container(const std::string& name);

		static bool exists(const std::string& name);

		static void* object(const std::string& name);

		template <typename T>
		static T& object(const std::string& name) {
			return *static_cast<T*>(object(name));
		}

	private:
		static void destructContainers();
		static const int destruct;
	};
}
uintptr_t getBase();

using ModContainer = Cacao::core::ModContainer;
using ModInterface = Cacao::core::ModInterface;

#pragma GCC visibility pop
