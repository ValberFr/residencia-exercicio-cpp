#include <iostream>

using namespace std;

int main(void) {
    int quantidade;

    cout << "Quantos alunos há na turma? ";
    cin >> quantidade;
    cout << "Há " << quantidade << " alunos na turma.\n";
    cout << "O tipo short int ocupa " << sizeof(short int) << " bytes na memória.\n";
    cout << "O tipo int ocupa " << sizeof(int) << " bytes na memória.\n";
    cout << "O tipo long int ocupa " << sizeof(long int) << " bytes na memória.\n";
    cout << "O tipo long long int ocupa " << sizeof(long long int) << " bytes na memória.\n";

    unsigned short int idade = 20;

    cout << "A idade é: " << idade << endl;

    int valHex = 0x1A;

    cout << "O valor de valHex: " << valHex << " ou " << hex << valHex << dec; 

    cout << " em hexadecimal." << endl;

    long int valOctal = 032;

    cout << "O valor de valOctal: " << valOctal << " ou " << oct << valOctal << dec; 

    cout << " em octal." << endl;

    return 0;
}