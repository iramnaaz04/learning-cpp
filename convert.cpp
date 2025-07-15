// Convert Farhenheit to Celsius and Celcius to Farhenheit
#include <iostream>
int main(){
    int choice;
    float temperature;
    std::cout << "Choose conversion type:\n";
    std::cout << "1. Fahrenheit to Celsius\n";
    std::cout << "2. Celsius to Fahrenheit\n";
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;
    if(choice == 1){
        std::cout << "Enter temperarure in farhenheit: ";
        std::cin >> temperature;
        float celcius = (temperature - 32) * 5/9;
        std::cout << "Temperature in celcius: " << celcius << '\n';
    }
    else if(choice == 2){
        std::cout << " Enter temperature in celcius: ";
        std::cin >> temperature;
        float farhenheit = (temperature * 9/5) + 32;
        std::cout << "Temperature in farhenheit: " <<farhenheit << '\n';
    }
        else{
        std::cout << "Invalid choice. Please enter 1 or 2 \n";
    }
} 
 

 