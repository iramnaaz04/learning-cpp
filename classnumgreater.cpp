//Greater number using class and constructor
#include <iostream>
class Num {
private:
    int n1, n2;
public:
    // Constructor to initialize numbers
    Num() {
        n1 = 0;
        n2 = 0;
    }
    // Function to input numbers
    void getData() {
        std::cout << "Enter num1: ";
        std::cin >> n1;
        std::cout << "Enter num2: ";
        std::cin >> n2;
    }

    // Function to show which number is greater
    void showData() {
        if (n1 > n2)
            std::cout << n1 << " is greater\n";
        else if (n2 > n1)
            std::cout << n2 << " is greater\n";
        else
            std::cout << "Both numbers are equal\n";
    }
};
int main() {
    Num no;
    no.getData();
    no.showData();
    return 0;
}
