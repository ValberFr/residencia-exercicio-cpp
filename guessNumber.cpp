#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int number = rand() % 100 + 1, userNumber = 0;

    cin >> userNumber;

    while (userNumber != number) {
        if (userNumber < number) {
            cout << "O número está abaixo! Tente novamente: ";
            cin >> userNumber;
        } else if (userNumber > number) {
            cout << "O número está acima! Tente novamente: ";
            cin >> userNumber;
        } 
    }

    cout << "Acertou!" << endl;

    return 0;
}