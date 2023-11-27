//Gibran Ismail Hattami
//2110044
//nomor 2

#include <iostream>
using namespace std;

int ganjil (){
    int ganjil;
        cout << "Masukan bilangan: ";
	        cin >> ganjil;
	    cout<<endl;
    if (ganjil%2==0)
    {
		cout << ganjil << ": genap" << endl;
	}
    else
    {
		cout << ganjil << ": ganjil" << endl;	
	}

    return ganjil;
}

int main()
{
   ganjil();
   return 0;
}