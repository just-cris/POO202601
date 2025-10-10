#pragma once
#include "Prerequisites.h"

//producto abstracto
class
Product {
public:
  virtual void operacion() const = 0;
  virtual ~Producto() = default;
};

//crear clase fabrica
class
Fabrica {
public:
  virtual Producto* crearProducto() const = 0;
  virtual ~Fabrica() = default;
};

//producto concreto a
class
  ProductoA : public Producto {
public:
  void operacion() cost override {
    std::cout << "Operacion de Producto A" << std::endl;
  }
};

class
  fabricaA : public Fabrica {
public:
  Producto* crearProducto() const override {
    return new ProductoA();
  }
};

class
  Vehiculo {
  virtual void operacion() const = 0;
  virtual ~Vehiculo() = default;
};

class 