// Ternary operator: The ternary operator is a shorthand for an if-else statement.
// condition ? expression1 : expression2;
#include <iostream>
int main(){
    int a,b;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    a>b ? std::cout << a << " is greater than " << b : std::cout << b << " is greater than " << a;
    std::cout << std::endl;
    return 0;
}