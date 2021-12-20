// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once
#pragma GCC visibility push(default)

#include <cstddef>
#include <string>
#include <vector>
#include <map>

#include <lilac_hook.hpp>

namespace Cacao::core {

	// #define CoreLog(format, ...) printf("%s:%d:\nlog: " format"\n", __FILE__, __LINE__, ##__VA_ARGS__)
	#define CoreLog(format, ...) ;

	typedef void(*func_t)();

	//
	// Base container type for hooks and patches
	//
	class BaseContainer {
	public:
		uintptr_t m_address;
		
	public:

		// Destructs the container
		virtual ~BaseContainer();

		// Enables the specific base container
		virtual void enable();

		// Disables the specific base container
		virtual void disable();

		// Gets the address of the specific base container
		uintptr_t getAddress();

		friend class ModContainer;
	};

	class MemoryContainer : public BaseContainer {
	private:
		char* m_originalBytes;
		char* m_moddedBytes;
		size_t m_byteCount;
	public:
		// Constructs a memory container for the address with bytes of byteCount long
		MemoryContainer(uintptr_t address, size_t byteCount, char* bytes);

		// Enables the specific memory container
		virtual void enable();

		// Disables the specific memory container
		virtual void disable();

		// Destructs the specific memory container
		virtual ~MemoryContainer();
	};

	class HookContainer : public BaseContainer {
	private:
		func_t m_function;
		lilac::HookHandle m_handle;
	public:
		// Constructs a hook container for the address with function
		HookContainer(uintptr_t address, func_t function);

		// Destructs the specific hook container
		virtual ~HookContainer();

		// Enables the specific hook container
		virtual void enable();

		// Disables the specific hook container
		virtual void disable();
	};


	//
	// Mod container that contains all the base containers
	//
	class ModContainer {
	private:
		std::vector<BaseContainer*> m_mods;
		std::string m_name;

	public:
		// Constructs a container with a given name
		// Deprecated, using the singleton is encouraged
		ModContainer(std::string name);

		// Gets the shared instance
		static ModContainer* instance();

		// Destructs the container
		virtual ~ModContainer();

		// Enables all the hooks and writes registered to the container
		void enable();

		// Disables all the hooks and writes registered to the container
		void disable();

		// Registers a write of bytes to the address that is byteCount long
		void registerWrite(uintptr_t address, size_t byteCount, char* bytes);
		void registerWriteEnable(uintptr_t address, size_t byteCount, char* bytes);

		inline void registerWrite(uintptr_t address, size_t byteCount, const char* bytes) {
			registerWrite(address, byteCount, const_cast<char*>(bytes));
		}
		inline void registerWriteEnable(uintptr_t address, size_t byteCount, const char* bytes) {
			registerWriteEnable(address, byteCount, const_cast<char*>(bytes));
		}

		// Registers a function hook to the address
		void registerHook(uintptr_t address, func_t function); 
		void registerHook(uintptr_t address, uintptr_t function); 

		// Registers a function hook to the address, and enables it
		void registerHookEnable(uintptr_t address, func_t function); 
		void registerHookEnable(uintptr_t address, uintptr_t function); 

		// The getter for the base containers
		std::vector<BaseContainer*> getMods();

		// The getter and the setter for the name of the container
		std::string getName();
		void setName(std::string name);
	};

}
uintptr_t getBase();

using ModContainer = Cacao::core::ModContainer;

#pragma GCC visibility pop
