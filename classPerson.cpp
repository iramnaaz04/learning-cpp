//Person class . Default constructor and Parameterized constructor.
#include <iostream>
class Person{
    private:
        std::string name;
        int age;
        float height;
        float weight;
    public:
        Person(){
            name = "Unknown";
            age = 0;
            height = 0;
            weight = 0;
        }
        Person(std::string n, int a, float h, float w){
            name = n;
            age = a;
            height = h;
            weight = w;
        }
        int display(){
            std::cout<<"Name is: "<<name<<std::endl;
            std::cout<<"Age is: "<<age<<std::endl;
            std::cout<<"Height is: "<<height<<std::endl;
            std::cout<<"Weight is: "<<weight<<std::endl;
        }
};
int main(){
    Person p1;    //Default constructor
    Person p2("Iramnaaz",12,4.2,32);

    std::cout<<"Default constructor is: ";
    p1.display();

    std::cout<<"Parameterized constructor is: ";
    p2.display();

    return 0;
}