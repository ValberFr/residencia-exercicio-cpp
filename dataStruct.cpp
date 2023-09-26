#include <iostream>
#include <string>
#include <regex>

using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;

    bool setData(string data) {
        regex data_regex("^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/\\d{4}$");
        smatch match;

        if (regex_match(data, match, data_regex)) {
            dia = stoi(match[1]);
            mes = stoi(match[2]);
            ano = stoi(match[3]);

            return true;
        } else {
            return false;
        }
    }
    
    string getData() {
       return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
    }
};

int main() {
    Data data;
    string strData;

    cout << "Digite a data: ";
    cin >> strData;

    if(data.setData(strData)) {
        cout << "Data: " << data.getData() << endl;
    } else {
        cout << "Data inválida!" << endl;
    }


    return 0;
}