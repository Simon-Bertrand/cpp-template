#include <iostream>
class MyObject {
private:
  int myAttribute;

public:
  MyObject();
  MyObject(int value);
  void setAttribute(int value);
  int getAttribute();
  void printAttribute();
};