// Arithemtic operations using pass by refernece
#include <iostream>
int add(int,int,int&);        // Prototype
int subtract(int,int,int&);
int multiply(int,int,int&);
int div(int,int,int&);
int rem(int,int,int&);


int add(int n1, int n2, int &result){        //Definition
    result = n1 + n2;
}
int subtract(int n1, int n2, int &result){
    result = n1 - n2;
}
int multiply(int n1 , int n2, int &result){
    result = n1 * n2;
}
int div(int n1 , int n2, int &result){
    if(n2 != 0)
       result = n1 / n2;
    else
       std::cout<<"Error!";
    
}
int rem(int n1, int n2, int &result){
    result = n1 % n2;
}

int main(){
    int num1, num2, result;
    std::cout<<"Enter two numbers: ";
    std::cin >> num1 >> num2;

    add(num1, num2, result);                        // Declaration
    std::cout<<"Addition is: "<<result<<std::endl;

    subtract(num1,num2,result);
    std::cout<<"Subtraction is: "<<result<<std::endl;

    multiply(num1,num2,result);
    std::cout<<"Multiplication is: "<<result<<std::endl;

    div(num1,num2,result);
    std::cout<<"Division is: "<<result<<std::endl;

    rem(num1,num2,result);
    std::cout<<"Remainder is: "<<result<<std::endl;
}

