//Gibran Ismail Hattami
//2110044
//no 1

#include <iostream>
using namespace std;

void swap (){
    string A = " biru";
    string B = " merah";
    string C;
        cout << "Gelas A =" << A << endl;
        cout << "Gelas B =" << B << endl;
    C = A;
    A = B;
    B = C;
        cout << "Gelas A =" << A << endl;
        cout << "Gelas B =" << B << endl;
}
int main()
{
    swap();
    return 0;
}