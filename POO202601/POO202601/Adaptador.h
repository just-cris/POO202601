#pragma once
#include "Prerequisites.h"
#include "InterfazNueva.h"
#include "InterfazVieja.h"

class
Adaptador : public interfazNueva {
public:
  Adaptador(interfazVieja* _interfazVieja) : _interfazVieja(_interfazVieja) {}
  ~Adaptador() = default;

  void
  metodoNuevo() override {
    std::cout << "Adaptador llamando al metodo viejo:" << std::endl;
     interfazVieja -> metodoViejo();
    }

private:
  interfazVieja* _interfazVieja;
};