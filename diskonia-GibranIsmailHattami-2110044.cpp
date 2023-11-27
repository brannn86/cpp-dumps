//Gibran Ismail Hattami
//2110044
//2B

#include <iostream>
using namespace std;

void math(); 
int main (){
    math();
    return 0;
}

void math(){
    int harga;
    float diskon;
    int bayar;

    cout << "Harga (Rp): ";
        cin >> harga;
    cout << "Jumlah potongan/diskon (%): ";
        cin >> diskon;
    cout << "Bayar (Rp): ";
        cin >> bayar;

    system("cls");
        float potongan_harga = harga*(diskon/100);
        int harga_setelah_diskon = harga - potongan_harga;
        int kembalian = bayar - harga_setelah_diskon;

//Output
    cout << " /$$$$$$$  /$$           /$$                           /$$          " << endl;
    cout << "| $$__  $$|__/          | $$                          |__/          " << endl;
    cout << "| $$  | $$ /$$  /$$$$$$$| $$   /$$  /$$$$$$  /$$$$$$$  /$$  /$$$$$$ " << endl;
    cout << "| $$  | $$| $$ /$$_____/| $$  /$$/ /$$__  $$| $$__  $$| $$ |____  $$" << endl;
    cout << "| $$  | $$| $$|  $$$$$$ | $$$$$$/ | $$  | $$| $$  | $$| $$  /$$$$$$$" << endl;
    cout << "| $$  | $$| $$ |____  $$| $$_  $$ | $$  | $$| $$  | $$| $$ /$$__  $$" << endl;
    cout << "| $$$$$$$/| $$ /$$$$$$$/| $$ |  $$|  $$$$$$/| $$  | $$| $$|  $$$$$$$" << endl;
    cout << "|_______/ |__/|_______/ |__/  |__/ |______/ |__/  |__/|__/ |_______/" << endl;
    cout << "===========================STRUK BELANJA============================" << endl;
    
        cout << "Harga (Rp)\t  = ";
        cout << harga << endl;
        cout << "Diskon (%)\t\t  = ";
        cout << diskon << endl;
        cout << "Bayar (Rp)\t\t  = ";
        cout << bayar << endl;
        cout << "====================================================================" << endl;
        cout << "Potongan Harga (Rp)\t  = ";
        cout << potongan_harga << endl;
        cout << "Harga Setelah Diskon (Rp) = ";
        cout << harga_setelah_diskon << endl;
        cout << "Kembalian (Rp)\t\t  = ";
        cout << kembalian << endl;
}