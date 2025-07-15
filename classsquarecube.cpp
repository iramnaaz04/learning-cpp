#include <iostream>

class SquareCube {
private:
    int n1, sq, cb;

public:
    // Constructor to initialize
    SquareCube() {
        n1 = 0;
        sq = 0;
        cb = 0;
    }

    void input() {
        std::cout << "Enter value of n1: ";
        std::cin >> n1;
    }

    void output() {
        sq = n1 * n1;
        cb = n1 * n1 * n1;
        std::cout << "Square is: " << sq << " and Cube is: " << cb << std::endl;
    }
};

int main() {
    SquareCube num;
    num.input();
    num.output();
    return 0;
}
