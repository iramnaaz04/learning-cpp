//Rectangle class and calculate area using parameterized constructor
#include <iostream>
class Rectangle{
    private:
        int length,breath;
        float area;
    public:
        Rectangle(int l, int b){
            length = l;
            breath = b;
        }
        int Area(){
            area = length * breath;
            std::cout<<"Area is: "<<area;
        }
};
int main(){
    Rectangle r(25,46);
    std::cout<<"Area of rectangle is: ";
    r.Area();
}