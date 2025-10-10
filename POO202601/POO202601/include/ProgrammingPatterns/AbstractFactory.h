#pragma once
#include "Prerequisites.h"

//Fabrica Abstracta
class FabricaAbstracta {
public:
    virtual ProductoA* CrearProductoA() const = 0;
    virtual ProductoB* CrearProductoB() const = 0;
    virtual ~FabricaAbstracta() = default;
};

//Producto Concreto A1
class ProductoA1 : public ProductoA {
public:
    void operacionA() const override {
        std::cout << "Operacion de Producto A1" << std::endl;
    }
};

//Producto Concreto B1
class ProductoB1 : public ProductoB {
public:
  void operacionB() const override {
    std::cout << "Operacion de Producto B1" << std::endl;
  }
};