// Arithmetic operations
#include <iostream>
int main(){
    int num1, num2;
    std::cout<<"Enter first number: ";
    std::cin >> num1;
    std::cout<<"Enter second number: ";
    std::cin >> num2;

    int sum = num1 + num2;
    std::cout<< "Sum of " << num1 << " + " << num2 <<" is: " <<sum << std::endl;

    int subtract = num1 - num2;
    std::cout<< "Subtraction of " << num1 << " - " << num2 <<" is: "<<subtract << std::endl;

    int mul = num1 * num2;
    std::cout<< "Multiplication of " << num1 << " * " << num2 <<" is: "<<mul <<std::endl;

    int div = num1 / num2;
    std::cout<< "Division of " << num1 << " / " << num2 <<" is: "<<div <<std::endl;

    int rem = num1 % num2;
    std::cout<< "Remainder of " << num1 <<" % " << num2 <<" is: "<<rem <<std::endl;
}