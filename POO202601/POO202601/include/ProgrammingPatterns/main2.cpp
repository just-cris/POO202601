#include "Prerequisites.h"
#include "ProgrammingPatterns/MiSingleton"
#include <iostream>

//inicializar instancia
MiSingleton* MiSingleton::instance = nullptr;

int main{
  //estructura main
  MiSingleton* singleton = MiSingleton::getInstance();
  singleton->setData(42);
  std::cout << "Valor del Singleton: " << singleton->getData() << std::endl;

  Fabrica* fabrica = new fabricaA(); //fabrica genera tesla (fabrica a)
  producto* producto = fabrica->crearProducto(); //producto de tesla (producto a)
  producto->operacion();
  delete producto;
  delete fabrica;
  return 0;
}