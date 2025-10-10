#pragma once
#include "Prerequisites.h"

class ProductoA;
class ProductoB;

//fabrica abstracta
class
  FabricaAbstracta {
public:
  virtual ProductoA*
    CrearProductoA() const = 0;
  virtual ProductoB*
    CrearProductoB() const = 0;
  virtual
    ~FabricaAbstracta() = default;
};