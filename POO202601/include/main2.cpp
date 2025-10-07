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
  return 0;
}