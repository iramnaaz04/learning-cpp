// Greater of two numbers
#include <iostream>
int main(){
    int num1,num2;
    std::cout<<"Enter two numbers: ";
    std::cin>>num1;
    std::cin>>num2;
    if(num1 > num2)
        std::cout<<num1<<" is greater than " <<num2;
    else
        std::cout<<num2<<" is greater than " <<num1;
}