// Swap variables
#include <iostream>
int main(){
    int a=1,b=2,temp;
    temp = a;
    a = b;
    b = temp;

    std::cout<<a;
    std::cout<<b;
    return 0;
}