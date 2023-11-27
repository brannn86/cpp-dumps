#include <iostream>
using namespace std;

int main(){
    int row;
    int column;

    cout << "Rows: ";
    cin >> row;
    cout << "Columns: ";
    cin >> column;

    int array [row][column];
    int input_value;

    for (int a = 0; a < row; a++){
        for (int b = 0; b < column; b++){
        cout << "Value [" << a << "][" << b << "]: ";
        cin >> array[a][b];
        }
    }

    cout << "vvvvvvvvvvvvvvv" << endl;

    for (int a = 0; a < row; a++){
        for(int b = 0; b < column; b++){
            cout << array[a][b] << " ";
        }
        cout << endl;
    }

    return 0;
}