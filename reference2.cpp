//Table of 2 using reference
#include <iostream>
using namespace std;
int table(int no, int &result);
int table(int no, int &result) {
    result = 0;
    for (int i = 1; i <= 10; i++) {
        // cout << no * i << endl;
        if(no % 2 == 0)
            cout<<i;
        result++;    
    }
}
int main() {
    int n1 = 2, result;
    table(n1, result);
    cout << result;
    return 0;
}
