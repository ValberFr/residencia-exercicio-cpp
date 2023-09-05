#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int heigth, line = 1;
    char character = 'A';

    cin >> heigth;

    for(int i = 0; i < heigth; i++) {
        for (int j = 0; j < line; j++) {
            cout << character;
            if(character == 'Z') {
                character = 'a';
            } else if (character == 'z') {
                character = '0';
            } else if (character == '9') {
                character = 'A';
            } else {
                character++;
            }
        }
        cout << endl;
        line++;
    }

    return 0;
}