#include "core/MyObject.hpp"
#include <stdio.h>
#include <torch/torch.h>

int main() {
  printf("Hello, World!\n");
  torch::Tensor tensor = torch::rand({10, 10});
  std::cout << tensor << std::endl;
  MyObject myObject2(0);
  myObject2.printAttribute();
}