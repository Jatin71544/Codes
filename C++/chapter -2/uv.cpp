#include <iostream>
int addNumbers( int first_param, int second_param){
  int result = first_param + second_param;
  return result;
}


int main(){
int first_Number {13};//statement
int second_Number {7};

std::cout << "First number :" << first_Number << std::endl;
std::cout << "Second number :" << second_Number << std::endl:

int sum = first_Number + second_Number;
std::cout << "Sum :" << sum << std::endl;

sum = addNumbers(22,13);
std::cout << "Sum :" << sum << std::endl;

return 0;
}