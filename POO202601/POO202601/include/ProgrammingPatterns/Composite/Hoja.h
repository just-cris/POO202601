#pragma once
#include "Prerequisites.h"
#include "Component.h"

class
  Hoja : public Componente {
public:
  Hoja() = default;
  ~Hoja() = default;

  void
  operacion() override {
    //implementacion especifica de la hoja
    std::cout << "Hoja operacion ejecutada." << std::endl;
  }

};