// Check positive or not
#include <iostream>
int main(){
    int num;

    std::cout<<"Enter number: ";
    std::cin>>num;

    (num > 0) ? std::cout<<"Positive number" : std::cout<<"Negative number";
}