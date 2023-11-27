//Nama  : Gibran Ismail Hattami
//NIM   : 2110044
//Kelas : 1B
//Prodi : Teknik Komputer

//----------Jawaban soal nomor 3----------//

#include <iostream>
using namespace std;

int main() 
    
{
    //Declaration
    int i,j,n;

    //Input
    cout << "Masukkan Jumlah Baris (n): ";
    cin >> n;

    //Main
    for (i=1;i<=n;i++) {
        for (j=i;j<=n;j++) {
            cout << "0";
        }

        for (j=1;j<=i;j++) {
            cout << "1";
        }
        cout << endl;
    }

    return 0;
}