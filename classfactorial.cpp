//Factorial using class and constructor
#include <iostream>
class Factorial{
    private:
       int n1,result,i;
    public:
       Factorial(){
        this->n1=0;
        this->result=0;
        this->i=0;
       }
       int getinit(){
        std::cout<<"Enter value of n1: ";
        std::cin>>n1;
       }
       int getout(){
        result = 1;
        for(i=1;i<=n1;i++){
            result = result * i;
        }
        std::cout<<"Factorial is: "<<result;
       }
};
int main(){
    Factorial num;
    num.getinit();
    num.getout();
    return 0;
}