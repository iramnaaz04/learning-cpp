// Maths related function
#include <iostream>
#include <cmath> //For mathematical functions
int main(){
    int a = 45;
    int b = 75;
    int z;
    float x = 3.14;
    float y = 3.99; 

    z = pow(2, 3); // 2 raised to the power of 3
    z = sqrt(9); // Square root of 9
    z = abs(-3); // Absolute value of -3
    z = round(x);
    z = ceil(x);
    z = floor(y);

    std::cout << "2 raised to the power of 3 is: " <<z <<std::endl;
    std::cout << "Square root of 9 is: " <<z <<std::endl;
    std::cout << "Absolute value of -3 is: " <<z <<std::endl;
    std::cout << "Round of 3.14 is: "<<z <<std::endl;
    std::cout << "Ceil of 3.14 is: "<<z <<std::endl;
    std::cout << "Floor of 3.99 is: "<<z <<std::endl;
}