#define SimpleList_H
#ifdef SimpleList_H
#include "Nodo.h"
class SList {
	Nodo* cabeza;
public:
	SList() :cabeza() {}
	void agregarNuevo(int nuevo);
	int imprimir();
	void borrar();
};


#endif // SimpleList_H

