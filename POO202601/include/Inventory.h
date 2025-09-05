#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "item.h"

class 
	Inventory {
public:
	Inventory();
	~Inventory();

	void
		addItem(const std::string& name, int quantity) {
		//se busca si existe el elemento para incrementar su cantidad
		for (auto& item : m_items) {
			if (item.getName() == name) {
				item.add(quantity);
				return;
			}
		}
		//si no existe, se agrega un nuevo item
		m_items.emplace_back(name, quantity);
	}

	void
		showInventory()const {
		//verificar que el inventario no esté vacio
		if (m_items.empty()) {
			std::cout << "El inventario esta vacio." << std::endl;
			return;
		}
		//mostrar items del inventario
		std::cout << "Inventario: " << std::endl;
		for (const auto& item : m_items) {
			std::cout << " - " << item.getName() << " : " << item.getQuantity() << std::endl;
		}
	}

	void
		useItem(const std::string& name, int quantity) {
		for (auto& item : m_items) {
			if(item.getName()==name){
				item.remove(quantity);
				//si la cantidad del item es 0, se elimina del inventario
				if (item.getQuantity()==0){
				//	m_items.erase(std::remove(m_items.begin(), m_items.end, item), m_items.end());
				}
				std::cout << "Usaste " << quantity << " de " << name << std::endl;
				return;
			}
		}
		std::cout << "No tienes " << name << " en el inventario" << std::endl;
	}

private:
	std::vector<Item> m_items;
};