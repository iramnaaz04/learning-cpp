// Farhenheit to Celcius;
#include <iostream>
int main(){
    float farhenheit;
    std::cout<<"Enter temperature in farhenheit: ";
    std::cin>>farhenheit;

    float celcius = 5.0/9.0 * (farhenheit - 32);
    std::cout<<"Temperature in celcius is: " <<celcius;
}