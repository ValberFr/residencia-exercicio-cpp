#include <iostream>

using namespace std;

int main(void) {
    bool flag = false;

    for (int i = 1; i <= 100; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = true;
                break;
            }
        }
        if(!flag && i != 1) {
            cout << i << endl;
        }
        flag = false;
    }

    return 0;
}