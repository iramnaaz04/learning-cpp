//Accept sides of triangle and print type of triangle i.e whether it is Equilateral, Isosceles, Scalane or Right Angle triangle
#include <iostream>
int traingle(int a, int b, int c , int &result);
int traingle(int a, int b, int c, int &result){
    if(a==b && b==c){
        result="Equilateral triangle"<<std::cout<<endl; 
    }
    else if(a==b || b==c || a==c){
        result="Isosceles triangle"<<std::cout<<endl;
    }
    else{
        result="Scalene traingle";
    }

}
int main(){
    int a, b, c,result;
    std::cout<<"Enter length of side a: "<<std::cout<<endl;
    std::cin>>a;
    std::cout<<"Enter lenght of side b: ";
    std::cin>>b;
    std::cout<<"Enter length of side c: ";
    std::cin>>c;
    traingle(a,b,c,result);
    std::cout<<"Triangle is: "<<result;
}