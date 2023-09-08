#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vec;
    int sum = 0, num;
    string response;

    cout << "Inserir nota? ";
    cin >> response;

    while( response == "s") {
        cout << "Nota: ";
        cin >> num;
        vec.push_back(num);

        cout << "Inserir nota? ";
        cin >> response;
    }

    for(int value: vec) {
        sum += value;
    }

    cout << sum/vec.size() << endl;

    return 0;
}