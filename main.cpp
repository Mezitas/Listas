//libraries
#include <iostream>
//_H documents 
#include "SimpleList.h"

int main() {
	SList nuevo;
	nuevo.agregarNuevo(1);
	nuevo.agregarNuevo(2);
	std::cout << nuevo.imprimir(2) << std::endl;
	nuevo.borrar();
	return 0;
}