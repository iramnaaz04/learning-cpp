// Even-Odd using class and constructor
#include <iostream>
class EvenOdd{
    private:
       int n1;
    public:
       EvenOdd(){
        n1 = 0;
       }
    int getin(){
        std::cout<<"Enter value of n1: ";
        std::cin>>n1;
    }
    int getout(){
        if(n1 % 2 == 0 ){
            std::cout<<"Even number";
        }
        else{
            std::cout<<"Odd number";
        }
    }
};
int main(){
    EvenOdd num;
    num.getin();
    num.getout();
}