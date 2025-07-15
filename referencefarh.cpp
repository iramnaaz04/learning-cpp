// Farhenheit to celcius
#include <iostream>
using namespace std;

float fahrenheit(float temp, float &celcius) {
    celcius = (temp - 32) * 5.0 / 9.0;
}

int main() {
    float farh, celcius;

    cout << "Enter Fahrenheit: ";
    cin >> farh;

    fahrenheit(farh, celcius);

    cout << "Temperature in Celsius is: " << celcius;

    return 0;
}
