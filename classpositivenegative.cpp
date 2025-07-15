// Positive Negative using class and constructor
#include <iostream>
class PosNeg{
    private:
       int n1;
    public:
       PosNeg(){
        n1 = 0;
       }
    int getin(){
        std::cout<<"Enter value of n1: ";
        std::cin>>n1;
    }
    int getout(){
        if(n1 > 0){
            std::cout<<"Positive!";
        }
        else if(n1 < 0){
            std::cout<<"Negative!";
        }
        else{
            std::cout<<"Enter valid input!";
        }
    }
};
int main(){
    PosNeg num;
    num.getin();
    num.getout();
}