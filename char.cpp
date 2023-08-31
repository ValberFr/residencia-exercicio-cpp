#include <iostream>

using namespace std;

void printChar(char value) {
    cout << "\'" << value << "\'" << " - " << dec  << int(value) << " - " << oct << int(value) << " - " << hex << int(value) << endl; 
}

int main(void) {
    char char1, char2 = 81, char3 = tolower(char2);

    cin >> char1;

    string text = isupper(char1) ? "letra maiuscula" : islower(char1) ? "letra minuscula" : isdigit(char1) ? "digito" : "outro tipo de caracter";

    cout << "Char 1 é um(a) " << text << endl;
    cout << "Char 2: ";
    printChar(char2); 
    cout << "Char 3: ";
    printChar(char3); 

    return 0;
}