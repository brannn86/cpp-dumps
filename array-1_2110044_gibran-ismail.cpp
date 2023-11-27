//gibran ismail hattami
//2110044
//1b

#include <iostream>
using namespace std;

int main(){

    //declare
    int value[5];
    int jml_arr = sizeof(value)/sizeof(*value);
    int cari_value, c;
    
    for (int a = 0; a < jml_arr; a++)
    {
        cout << "Masukkan input nilai ke-" << a+1 << " : ";
        cin >> value[a];
    }
    
    cout << "Nilai yang diinputkan : ";
    for (int b = 0; b < jml_arr; b++)
    {
        cout << value[b] << ", ";
    }
    cout << endl;
    cout << "Masukkan nilai yang akan dicari : ";
    cin >> cari_value;
    
    for(int c = 0; c < jml_arr; c++)
    {
    	if(cari_value == value[c])
        {
    		cout << "value " << cari_value <<  " ada pada index= " << c;
	        break;
        }
	}

    return 0;
}