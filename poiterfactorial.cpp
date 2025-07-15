//Factorial using pointer
#include <iostream>
int factorial(int *num, int *fact);
int factorial(int *num, int *fact){
    *fact = 1;
    for(int i = 1; i <= *num; i++){
        *fact = *fact * i;
    }
}
int main(){
    int no,result;
    std::cout<<"Enter number: ";
    std::cin>>no;
    factorial(&no,&result);
    std::cout<<"Factorial is: "<<result;
}