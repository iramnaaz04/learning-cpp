//Square and cube using pointer
#include<iostream>
int squarecube(int *num, int *square, int *cube);
int squarecube(int *num, int *square, int *cube){
    *square = *num * *num;
    *cube = *num * *num * *num;
}
int main(){
    int no, sq, cb;
    std::cout<<"Enter a number: ";
    std::cin>>no;

    squarecube(&no, &sq, &cb);
    std::cout<<"Square and cube is: "<<sq <<cb;
}