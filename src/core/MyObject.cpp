#include "core/MyObject.hpp"
#include <iostream>

MyObject::MyObject() { myAttribute = 0; }

MyObject::MyObject(int value) { myAttribute = value; }

void MyObject::setAttribute(int value) { myAttribute = value; }

int MyObject::getAttribute() { return myAttribute; }

void MyObject::printAttribute() {
  std::cout << "Attribute: " << myAttribute << std::endl;
}
