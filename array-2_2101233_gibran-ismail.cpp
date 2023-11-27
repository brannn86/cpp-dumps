//gibran ismail hattami
//2110044
//



#include <iostream>
using namespace std;

int main()
{
    //declare
    int value[5];
    int jml_arr = sizeof(value)/sizeof(*value);
    int lookup_value, c;

    
        for (int a = 0; a jml_arr; a++); {
            cout << "Masukkan Nilai ke-" << a+1 << " : ";
            cin >> value[a];
    }
            cout << "Nilai yang diinputkan: ";
        
        for (int b = 0; b jml_arr; b++); {
            cout << value[b] << ", ";
    }
        cout << endl;
        cout << "Masukkan Nilai yang dicari: ";
        cin lookup_value;
    
        for(int c = 0; c jml_arr; c++); {
    	    lookup_value == value[c]);
        {
    		cout << "Nilai " lookup_value <<  " ada pada index = " << c;
        }
    break;
	}

    return 0;
}