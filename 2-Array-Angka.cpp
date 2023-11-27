//Nama  : Gibran Ismail Hattami
//NIM   : 2110044
//Kelas : 1B
//Prodi : Teknik Komputer

//----------Jawaban soal nomor 2----------//

#include <iostream>
using namespace std;
int main()

{
    //Declaration
	int m, n, j, i, z=0;
	
    //Input
	cout << "Masukkan Jumlah Baris (m): ";
	cin >> m;
	cout << "Masukkan Jumlah Kolom (n): ";
	cin >> n;
	
    //Main
	if (m*n <= 25)
    {
		    for (i=0; i<m; i++)
        {
			for (j=0; j<n; j++)
            {
				if (j<=n)
                {
				if (z <= 9)
                    {
					cout<<"0"<<z<<" ";
					}
				else
                {
					cout<<z<<" ";
				}
					z++;
				}
			}
			cout<<endl;
		}
	}
	else
    
    {
		cout<<"Dimensi Lebih Dari 25"<<endl;
	}

return 0;
}