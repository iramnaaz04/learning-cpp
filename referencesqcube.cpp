// Square and cube by reference
#include <iostream>
int sq(int , int&);
int cube(int , int&);

int sq(int n1, int &result){
    result = n1 * n1;
}
int cube(int n1,int &result){
    result = n1 * n1 * n1;
}
int main(){
    int num1,result;
    std::cout<<"Enter number: ";
    std::cin>>num1;

    sq(num1,result);
    std::cout<<"Square is: "<<result << std::endl;

    cube(num1,result);
    std::cout<<"Cube is: "<<result;
}