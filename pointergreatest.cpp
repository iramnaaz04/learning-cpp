//Greatest using pointer
#include <iostream>
int number(int *a, int *b, int *c, int *result);
int number(int *a, int *b, int *c, int *result){
    if(*a > *b && *a > *c)
        *result = *a;
    else if(*b > *a && *b > *c)
        *result = *b;
    else 
        *result = *c;
}
int main(){
    int num1,num2,num3,res;
    std::cout<<"Enter three numbers: ";
    std::cin>>num1>>num2>>num3;
    number(&num1,&num2,&num3,&res);
    std::cout<<"Greatest among all three numbers are: "<<res;
}