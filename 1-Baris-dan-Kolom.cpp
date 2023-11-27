//Nama  : Gibran Ismail Hattami
//NIM   : 2110044
//Kelas : 1B
//Prodi : Teknik Komputer

//----------Jawaban soal nomor 1----------//

#include <iostream>
using namespace std;
int main()

{
    //Declaration
    int m, n, x, y;

    //Input
    cout<<"Masukkan Jumlah Baris (m): ";
    cin>>m;
    cout<<"Masukkan Jumlah Kolom (n): ";
    cin>>n;

    //Main
    for (x=1; x<=n; x++)
    {
        for (y=1; y<=m; y++)
        {
            cout<<!(y%2);
        }
        cout<<endl;
    }

return 0;
}