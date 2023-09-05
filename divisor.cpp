#include <iostream>

using namespace std;

int main(void) {
    int number;
    cin >> number;
    for(int i = number; i > 0; i--) {
        if(number % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}