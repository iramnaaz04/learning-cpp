//Greatest using reference
#include <iostream>
int greater(int n1, int n2, int n3, int &result);
int greater(int n1, int n2, int n3, int &result){
    if(n1 > n2 && n1 > n3)
        result = n1;
    else if(n2 > n1 && n2 > n3)
        result = n2;
    else
        result = n3;
}

int main(){
    int num1,num2,num3,result;
    std::cout<<"Enter three numbers: ";
    std::cin>>num1>>num2>>num3;

    greater(num1,num2,num3,result);
    std::cout<<"Greater is: "<<result;
}