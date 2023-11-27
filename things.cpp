#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main()
{
    int p, l, t, v;
    
    cout << "masukan panjang" << endl;
    cin >> p;
    cout << "masukin lebar" << endl;
    cin >> l;
    cout << "masukan tinggi" << endl;
    cin >> t;
    v = p * l * t;
    cout << "volumenya adalah  " << v << "" << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
