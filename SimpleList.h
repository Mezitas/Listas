#define SimpleList_H
#ifdef SimpleList_H
class SList {
private:
	int valor;
	int* proximo;
public:
	SList(int valor) :valor(valor), proximo(NULL) {}
	void agregarNuevo(int* nuevo);
};


#endif // SimpleList_H

