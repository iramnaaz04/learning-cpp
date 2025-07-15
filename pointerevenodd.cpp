//Even odd using pointer
#include <iostream>
int evenodd(int *no);
int evenodd(int *no){
    if(*no % 2 == 0)
        std::cout<<"Even";
    else
        std::cout<<"Odd";
}
int main(){
    int num;
    std::cout<<"Enter number: ";
    std::cin>>num;
    evenodd(&num);
    std::cout<<"Number is: "<<num;
}