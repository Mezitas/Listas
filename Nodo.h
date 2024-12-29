#define Nodo_H
#ifdef Nodo_H
class Nodo {
public:
	int valor;
	Nodo* proximo;
	Nodo* anterior;
public:
	Nodo(int valor);
};
#endif // Nodo_H

