#pragma once
#include "Prerequisites.h"

class interfazNueva {
public: 
  interfazNueva() = default;
  ~interfazNueva() = default;
  
virtual void
metodoNuevo() {
  std::cout << "Metodo nuevo en la interfaz nueva" << std::endl;
}
};