// Hypotenus of a triangle
#include <iostream>
#include <cmath>
int main(){
    double a,b,c;
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    // a = pow(a,2);
    // b = pow(b,2);
    // c = sqrt(a+b);
    // Other method
    c = sqrt(pow(a,2) + pow(b,2));
    std::cout<<"The hypotenuse of the triangle is: " <<c <<std::endl;
    return 0;

}