//Table using reference
#include <iostream>
using namespace std;
int table(int no, int &result);
int table(int no, int &result) {
    result = 0;
    for (int i = 1; i <= 10; i++) {
        cout << no * i << endl;
        result++;    
    }
}
int main() {
    int n1, result;
    cout << "Enter number: ";
    cin >> n1;

    table(n1, result);

    cout << "Total lines printed for the table: " << result << endl;

    return 0;
}
