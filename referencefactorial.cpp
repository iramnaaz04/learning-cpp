//Factorial using reference
#include <iostream>
int factorial(int n1, int &fact);
int factorial(int n1, int &fact){
    fact = 1;
    for(int i=1 ; i<= n1 ; i++){
        fact = fact * i;
    }
}

int main(){
    int num1 = 23,fact;
    factorial(num1,fact);
    std::cout<<"Factorial is: "<<fact;
}