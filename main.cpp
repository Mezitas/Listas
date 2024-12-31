//libraries
#include <iostream>
//_H documents 
#include "SimpleList.h"

int main() {
	SList nuevo;
	nuevo.agregarNuevo(1);
	nuevo.agregarNuevo(2);
	nuevo.agregarNuevo(3);
	std::cout << nuevo.imprimir(2) << std::endl;
	nuevo.borrarElemento(3);
	std::cout << nuevo.imprimir(1) << std::endl;
	return 0;
}