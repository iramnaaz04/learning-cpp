/*Default constructor . Q] Write a class Car with a default constructor that sets the company name to "Unknown" and a 
model number to 0. Display them using function
*/
#include <iostream>
class Car{
    private:
       std::string company;
       int model;
    public:
       Car(){
        company="Unknown";
        model=0;
       }
    int display(){
        std::cout<<"Company: "<<company<<std::endl;
        std::cout<<"Model: "<<model<<std::endl;
    }
};
int main(){
    Car c1;
    c1.display();
    return 0;
}