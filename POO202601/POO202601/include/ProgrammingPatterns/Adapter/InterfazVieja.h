#pragma once
#include "Prerequisites.h"

class interfazVieja {
public:
  interfazVieja() = default;
  ~interfazVieja() = default;

virtual void
metodoViejo() {
  std::cout << "Metodo de la Vieja" << std::endl;
  }
};