#include <iostream>


void printInfo(const std::string name, const int age);

int main() {

  // parametros const são variaveis imutaveis que são read only

  std::string name = "Balofoide";
  int age = 20;

  printInfo(name, age);

  return 0;
}


void printInfo(const std::string name, const int age) {

  std::cout << name << "\n";
  std::cout << age << "\n";
}


 