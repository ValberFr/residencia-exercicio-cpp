#include <iostream>

using namespace std;

int main(void) {
    char letter;

    for (int i = 33; i <= 126; i++) {
        cout << "\'" << char(i) << "\'" << " - " << dec  <<  i << " - " << oct << i << " - " << hex << i <<endl; 
    }

    cin >> letter;

    cout << "\'" << letter << "\'" << " - " << dec  << int(letter) << " - " << oct << int(letter) << " - " << hex << int(letter) << endl; 
    return 0;
}