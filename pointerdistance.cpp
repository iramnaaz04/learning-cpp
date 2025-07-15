//Meter to kilometer using pointer
#include <iostream>
float distance(float *meter, float *kilometer);
float distance(float *meter, float *kilometer){
    *kilometer = *meter / 100;
}
int main(){
    float dist, km;
    std::cout<<"Enter distance in meter: ";
    std::cin>>dist;
    distance(&dist, &km);
    std::cout<<"Distance in kilometer is: "<<km;
}