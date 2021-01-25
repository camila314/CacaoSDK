// replace this code

#include <Cacao.hpp>
#include <iostream>

ModContainer* m;
void inject() {
	m = new ModContainer("Template code");

	auto gm = GameManager::sharedState();
	std::cout << "Value of 0021: " << gm->getGameVariable("0021") << "\n";
	// ...
}