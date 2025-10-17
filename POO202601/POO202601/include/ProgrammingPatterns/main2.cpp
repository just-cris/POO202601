#include "Prerequisites.h"
#include "ProgramingPatterns/Adapter/InterfazNueva.h"
#include "ProgramingPatterns/Adapter/InterfazVieja.h"
#include "ProgramingPatterns/Adapter/Adaptador.h"

main() {
  //crear una instancia de la interfaz vieja
  interfazVieja* objetoViejo = new interfazVieja();
  interfazNueva* objetoNuevo = new Adaptador(objetoViejo);

  //usar objeto nuevo que adapta el viejo
  objetoNuevo->metodoNuevo();

  //liberar memoria
  delete objetoViejo;
  delete objetoNuevo;
}