#include <iostream>
class Numbers {
private:
    int i;

public:
    // Constructor
    Numbers() {
        i = 1;
    }

    // Output numbers from 1 to 10
    void getout() {
        std::cout << "Numbers from 1 to 10 are as follows:" << std::endl;
        while (i <= 10) {
            std::cout << i << " ";
            i++;
        }
        std::cout << std::endl;
    }
};

int main() {
    Numbers num;
    num.getout();
    return 0;
}
