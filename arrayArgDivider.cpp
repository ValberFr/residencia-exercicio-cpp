#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string str;

    str.append(argv[1]);

    if(argc == 4) {
        if (str == "\int") {
            int result = atoi(argv[2]) / atoi(argv[3]);
            cout << result << endl;
        } else if (str == "\double") {
            double result = atof(argv[2]) / atof(argv[3]);
            cout << result << endl;
        }
    } else {
        cout << "Dados inválidos!" << endl;
    }

    return 0;
}