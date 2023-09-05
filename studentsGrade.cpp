#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    int studentRegister[50] = {}, i = 0;
    float grade1[50], grade2[50], grade3[50];
    bool flag = true;
    string response;

    while(flag) {
        cout << "Digite a matricula do aluno " << i + 1 << ": ";
        cin >>  studentRegister[i];
        cout << "Digite a nota 1 do aluno " << i + 1 << ": ";
        cin >>  grade1[i];
        cout << "Digite a nota 2 do aluno " << i + 1 << ": ";
        cin >>  grade2[i];
        cout << "Digite a nota 3 do aluno " << i + 1 << ": ";
        cin >>  grade3[i];
        i++;

        cout << "Continuar com notas? ";
        cin >> response;
        if(response == "Nao") {
            flag = false;
        }
    }

    for(int j = 0; j < i; j++) {
        cout << fixed << setprecision(1);
        cout << "MATRICULA " << "  NOTA 1  " << "  NOTA 2  " << "  NOTA 3  " << " MEDIA "<< endl;
        cout << "=================================================" << endl;
        cout << studentRegister[j] << "         " << grade1[j] << "      " << grade2[j] << "    " << grade3[j] << "    " << (grade1[j] + grade2[j] + grade3[j]) / 3 << "   " << endl; 
    }

    return 0;
}