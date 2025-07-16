//Book class with parameterized constructor that accepts Book Name and Price.Display the details.
#include <iostream>
class Book{
    private:
        std::string bookname;
        int price;
    public:
        Book(std::string b, int p){
            bookname = b;
            price = p;
        }
    int display(){
        std::cout<<"Bookname: "<<bookname<<std::endl;
        std::cout<<"Price: "<<price<<std::endl;
    }
};
int main(){
    Book b("The Love Of Physics",240);
    b.display();
    return 0;
}