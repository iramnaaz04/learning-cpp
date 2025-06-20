// if-else example
#include <iostream>
int main(){
    char grade;
    std::cout << "Enter your grade (A, B, C, D, F): ";
    std::cin >> grade;
    if(grade == 'A' ){
        std::cout << "Excellent work!";
    }
    else if(grade == 'B'){
        std::cout << "Good job!";
    }
    else if(grade == 'C'){
        std::cout << "You passed. Can do better!";
    }
    else if(grade == 'D'){
        std::cout << "You barely passed";
    }
    else if(grade == 'F'){
        std::cout << "You failed";
    }
    else{
        std::cout << "Invalid grade entered. Please enter A, B, C, D, or F";
    }
    return 0;
}
