//1-10 using reference
#include <iostream>
int numbers(int n1, int &result);
int numbers(int n1, int &result){
    result = 0,n1=1;
    for(int i=1; i<=10; i++){
        // result = result + 1;
        result++;
    }
    n1++;
}
int main(){
    int num1 = 1, result;
    numbers(num1, result);
    std::cout<<"Numbers from 1 - 10 are as follows: "<<result;
}