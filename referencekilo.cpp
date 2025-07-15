// Meter to kilometer using reference
#include <iostream>

float distance(float meter, float &kilometer);
float distance(float meter, float &kilometer){
    kilometer = meter / 1000;
}
int main(){
    float dist, kilometer;
    std::cout<<"Enter distance in meters: ";
    std::cin>>dist;

    distance(dist,kilometer);
    std::cout<<"Distance in kilometer is: "<<kilometer<<"km";
}