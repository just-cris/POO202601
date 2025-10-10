#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Inventory.h"
#include "item.h"

//Crear clase Character
class
	Character {
public:
	Character() = default;
	Character(int health) : m_health(health) {}

	void
		rebirth() {
		if (!isCharacterAlive && m_health <= 0) {
			std::cout << "El personaje ha revivido en el Respawn" << std::endl;
			isCharacterAlive = true;
		}
	}

	int
		getHealth() const {
		return m_health;
	}

	void
		setHealth(int health) {
		m_health = health;
	}

private:
	bool isCharacterAlive = false;

protected:
	int m_health;
};


int
main() {
	Inventory inventory;
	inventory.addItem("Pocion de vida", 5);
	inventory.addItem("Pocion de mana", 3);
	inventory.addItem("Diamantes", 65);

	inventory.useItem("Pocion de vida", 2);
	inventory.showInventory();

	std::cin.get();
	return 0;
}