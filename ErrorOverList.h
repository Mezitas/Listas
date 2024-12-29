#define ErrorOverList_H
#ifdef ErrorOverList_H

class OverList_Exception : public std::runtime_error {
public:
	OverList_Exception(std::string mensaje);
};
#endif // ErrorOverList_H

