#include <iostream>

using namespace std;

void sortFloats(float &value1, float &value2, float &value3, float&value4) {
    float aux_value1 = value1, aux_value2 = value2, aux_value3 = value3, aux_value4 = value4;

     if (value1 > value2) {
        value2 = aux_value1;
        value1 = aux_value2;
    }
    if (value3 > value4) {
        value4 = aux_value3;
        value3 = aux_value4;
    }
    if (value1 > value3) {
        value3 = aux_value1;
        value1 = aux_value3;
    }
    if (value2 > value4) {
        value4 = aux_value2;
        value2 = aux_value4;
    }
}

  
int main()
{
    float value1 = 2.01, value2 = 1.15, value3 = 5.23, value4 = 2.45;
  
    sortFloats(value1, value2, value3, value4);

    cout << value1 << endl << value2<< endl << value3 << endl << value4 << endl;

    return 0;
}