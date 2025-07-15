//Meter to kilometer using class and constructor
#include <iostream>
class Mikilo{
    private:
        float meter,kilometer;
    public:
        Miki(){
            this->meter=0;
            this->kilometer=0;;
        }
        getData(){
            std::cout<<"Enter distance in meter: ";
            std::cin>>meter;
        }
        showData(){
            kilometer = meter / 1000;
            std::cout<<"Distance in kilometer is: "<<kilometer;
        }
};
int main(){
    Mikilo mt;
    mt.getData();
    mt.showData();
    return 0;
}