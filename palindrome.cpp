#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int number;
    string palavra = "", aux = "";
    cin >> number;
    if(number) {
        palavra = to_string(number);
    }
    aux = palavra;
    reverse(aux.begin(), aux.end());

    cout << palavra << " - " << aux << endl;

    if(palavra == aux) {
        cout << "Eh Palíndromo" << endl;
    } else {
        cout << "Nao eh Palíndromo" << endl;
    }

    return 0;
}