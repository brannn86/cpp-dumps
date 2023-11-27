#include <iostream>
using namespace std;

int main(){
    
    int index1 = 2;
    int index2 = 3;
    int index3 = 4;
    int array3d[index1][index2][index3] = { 
                     { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} },
                     { {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24} }
                 };
                 
    int z = 1;
    for (int a = 0; a < index1; a++){
        cout << "Index " << z++ << endl;
        for (int b = 0; b < index2; b++){
            for (int c = 0; c < index3; c++){
                cout << array3d[a][b][c] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
