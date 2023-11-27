#include <iostream>
using namespace std;
 
int main (){
    const int JAM_MASUK=7;
    int kedatangan;
    char nilai;
 
    cout<<"Jam kehadiran Mahasiswa = ";cin>>kedatangan;
    nilai = kedatangan<JAM_MASUK?'A':'C';
    cout<<"Kehadiran = "<<nilai;
    return 0;
}