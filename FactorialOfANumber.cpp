#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin >> n;
    
    int fact = 1;
    
    if(n < 0) {
        cout << "Error" << endl;
    }
    else if(n == 0) {
        cout << 1 << endl;
    } 
    else {
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << fact << endl;
    }

    return 0;
}