#pragma once
#include <iostream>
#include <string>
#include <vector>

class Item
{
public:
	Item(const std::string& name, int quantity) : m_name(name), m_quantity(quantity) {}
	~Item() = default;

	std::string
		getName() const {
		return m_name;
	}

	int 
	getQuantity() const {
	return m_quantity;
	}

	void 
	add(int quantity){
		m_quantity += quantity;
	}

	void
	remove(int quantity) {
		if (quantity <= m_quantity) {
			m_quantity -= quantity;
		}
		else {
			std::cout << "No hay suficiente cantidad de " << m_name << " para remover" << std::endl;
		}
	}

private:

};