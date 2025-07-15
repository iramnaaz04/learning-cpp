//Farhenheit to celcius using class and constructor
#include <iostream>
class Fahrenheit {
private:
    float temperature, celsius;

public:
    // Default constructor
    Fahrenheit() {
        temperature = 0;
        celsius = 0;
    }

    // Input method
    float takein() {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperature;
    }

    // Conversion and output
    float getout() {
        celsius = (5.0 / 9.0) * (temperature - 32);
        std::cout << "Temperature in Celsius is: " << celsius << std::endl;
    }
};

int main() {
    Fahrenheit temp;
    temp.takein();
    temp.getout();
    return 0;
}
