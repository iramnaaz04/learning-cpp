// User input
#include <iostream>
int main(){
    std::string name;
    int age;
    // std::cout <<"What's your name? ";
    // std::cin >> name;
    std::cout <<"What's your full name? ";
    std::getline(std::cin, name); // Using getline to allow for full names with spaces
    std::cout <<"How old are you? ";
    std::cin >>age;
    std::cout <<"Hello, " <<name <<std::endl;
    std::cout <<"Your age is: " <<age <<std::endl;
}