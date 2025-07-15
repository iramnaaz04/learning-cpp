// Greater using refernce
#include <iostream>
int greater(int n1, int n2, int &result);
int greater(int n1, int n2, int &result){
    if(n1 > n2)
        result = n1;
    else 
        result = n2;
}

int main(){
    int num1,num2,result;
    std::cout<<"Enter two numbers: ";
    std::cin>>num1>>num2;

    greater(num1,num2,result);
    std::cout<<"Greater is: "<<result;
}