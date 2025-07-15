// T-shirt . Calculate net price
#include <iostream>
int main(){
    float tshirt,price56;
    std::cout<<"Enter price of t-shirt: ";
    std::cin>>tshirt;
    float net_price,discount;
    discount = tshirt * 15 / 100;

    net_price = tshirt - discount;

    std::cout<<"Net-price is: " <<net_price;

}