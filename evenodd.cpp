// Even or Odd
#include <iostream>
int main(){
    int num;
    std::cout<<"Enter number: ";
    std::cin>>num;

    (num % 2 == 0) ? std::cout<<num<<" is even number" : std::cout<<num<<" odd number";
}