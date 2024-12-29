//libraries
#include <stdexcept>
#include <iostream>
//_H document
#include "ErrorOverList.h"

OverList_Exception::OverList_Exception(std::string mensaje) : runtime_error(mensaje) {};