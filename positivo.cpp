#include <iostream>

using namespace std;

int main(void) {
    int num1, num2, res = 0, s, s1 = 1, s2 = 1;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    if (num1 < 0) {
        num1 = -num1;
        s1 = -1;
    }

    if (num2 < 0) {
        num2 = -num2;
        s2 = -1;
    }

    return 0;
}