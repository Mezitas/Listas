//libraries
#include <iostream>
//_H documents 
#include "SimpleList.h"

int main() {
	SList nuevo;
	nuevo.agregarNuevo(1);
	std::cout << nuevo.imprimir(0) << std::endl;
	nuevo.borrar();
	return 0;
}