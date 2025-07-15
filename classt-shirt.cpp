//T-shirt using class and constructor
#include <iostream>
class T_shirt{
    private:
       float tshirt,discount,net_price,price;
    public:
       T_shirt(){
        tshirt=0;
        discount=0;
        net_price=0;
        price=0;
       }
        init(){
            std::cout<<"Enter price of t-shirt: ";
            std::cin>>tshirt;
        }
        inout(){
            discount = price * 15 / 100;
            net_price = price - discount;
            std::cout<<"Discount is: "<<discount;
            std::cout<<"Net price is: "<<net_price;
        }
};
int main(){
    T_shirt shirt;
    shirt.init();
    shirt.inout();
    return 0;
}