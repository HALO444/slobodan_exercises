#include <iostream>

int main(){
  std::cout << "Enter your number: ";
  int number{};
  std::cin >> number;
  std::cout << "Number that you entered is: "<< number <<"\n";
  std::cout << "Enter two Numbers1: ";
  int num1{};
  int num2{};
  std::cin >>num1 >>num2;
  std::cout << "Print Numbers "<<num1 << " " <<num2 << "\n";
  std::cout <<"Enter two Numbers2: ";
  std::cin >> num1;
  std::cin >> num2;
  std::cout << "Print Numbers "<<num1 << " " <<num2 << "\n";
}