#pragma once
#include "Prerequisites.h"

class
Carpeta {
public:
  Carpeta() = default;
  ~Carpeta() = default;

  virtual void mostrar() {
    std::cout << "Mostrando Carpeta" << std::endl;
  }
};