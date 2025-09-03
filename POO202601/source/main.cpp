#pragma once

//STD
#include <iostream>
#include <string>
#include <vector>

//Crear clase Character
class
	Character {
public:
	Character() = default;

	Character(int healt) : m_healt(healt) {}

	void
		rebirth() {
		if (!isCharacterAlive && m_health <= 0) {
			std::cout << "El personaje a revivido" << std::endl;
			isCharacterAlive = true;
		}
	}

	int
		getHealt() const {
		return m_healt;
	}

	void
		setHealt(int healt) {
		m_healt = healt;
	}

private:
	bool isCharacterAlive = false;

protected:
	int m_healt;
};


//Crear clase Inventario



int
main() {
	Character pablo(150);
	pablo.getHealt();
	std::cout << pablo.getHealt() << std::endl;
	pablo.setHealt(-50);
	std::cout << pablo.getHealt() << std::endl;

	if (pablo.getHealt() <= 0) {
		std::cout << "Pablo ha muerto" << std::endl;
		pablo.rebirth();
	}
	return 0;
}