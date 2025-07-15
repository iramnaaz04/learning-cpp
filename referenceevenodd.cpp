//Even odd using reference
#include <iostream>
int evenodd(int n1, int &result);
int evenodd(int n1, int &result){
    if(n1 % 2 == 0)
        result = "Even";
    else
        result = "Odd";

}
int main(){
    int num1,result;
    std::cout<<"Enter number: ";
    std::cin>>num1;
    evenodd(num1,result);
    std::cout<<"Number is: "<<result;
}

