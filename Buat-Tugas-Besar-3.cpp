#include <iostream>//MENGGUNAKAN COUT, CIN, ENDI
#include <conio.h> //MENGGUNAKAN GETCH()
#include <stdlib.h> //MENGGUNAKAN SYSTEM("CLS)
#include <string.h>//MENGGUNAKAN STRCPY()
#define MAX 10 //MAKSIMAL NOMOR TUGAS


using namespace std;

//STRUCT
struct queue
{
    int head;
    int tail;
    char data[20][20];
};

//INSTALISASI OBJEK
queue namatugas, nomer;

//FUNGSI UNTUK MENU
void inisialisasi(){
    namatugas.head=namatugas.tail=-1;
    nomer.head=nomer.tail=-1;
}

int isFull(){
    if(namatugas.tail== MAX-1)
        return 1;
    else
        return 0;
}

int isFull_2(){
    if(nomer.tail== MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty(){
    if(namatugas.tail==-1){
        namatugas.head=-1;
        return 1;
    }
    else
        return 0;
}

int isEmpty_2(){
    if(nomer.tail==-1){
        nomer.head=-1;
        return 1;
    }
    else
        return 0;
}

void enqueue(char d[20]){
    system("cls");
    namatugas.head=0;
    namatugas.tail++;
    strcpy(namatugas.data[namatugas.tail],d);
}

void enqueue_2(char d[20]){
    system("cls");
    nomer.head=0;
    nomer.tail++;
    strcpy(nomer.data[nomer.tail],d);
}

void dequeue(){
    system("cls");
    cout<<"Tugas"<<namatugas.data[namatugas.head]<<"sudah diselesaikan"<<endl;

    for(int i=namatugas.head;i<=namatugas.tail;i++)
    strcpy(namatugas.data[i],namatugas.data[i+1]);
    namatugas.tail--;

    for(int i=nomer.head;i<=nomer.tail;i++)
    strcpy(nomer.data[i], nomer.data[i+1]);
    nomer.tail--;
}

void cari(string d){
    system("cls");
    for(int i=namatugas.head; i<=namatugas.tail; i++){
        if(namatugas.data[i]==d){
            cout<<"Tugas "<<d<<" terdapat pada list no.  "<<i+1<<endl;
            break;
        }
    }
}

void ganti(string d){
    char x[20], y[20];
    system("cls");
    for(int i=0;i<=namatugas.tail;i++){
        if(namatugas.data[i]==d){
            cout<<"\nNote : Jika di nama tugas terdapat spasi, maka spasi diganti dengan underscore(_)\n";
            cout<<"Nama Tugas yang diganti : ";
            cin>>x;
            cout<<"\nNote : Jika di nama tugas terdapat strip, maka strip diganti dengan underscore(-)\n";
            cout<<"Perubahan deadline : ";
            cin>>y;
            strcpy(namatugas.data[i],x);
            strcpy(nomer.data[i],y);
            cout<<"Data Tugas "<<d<<" dirubah menjadi "<<namatugas.data[i]<<" dengan tugas : "<<nomer.data[i];
        }
    }
}

void hapus(){
    system("cls");
    namatugas.head=namatugas.tail=-1;
    nomer.head=nomer.tail=-1;
    cout<<"Semua tugas sudah dihapus";
}

//FUNGSI MAIN
int main()
{
    string d;
    system("cls");
    cout<<"====================================================================="<<endl;
    cout<<"===============PROJECT UAS DASPRO KELAS 1B KELOMPOK 1================"<<endl;
    cout<<"=============GIBRAN ISMAIL HATTAMI             2110044==============="<<endl;
    cout<<"=============MUHAMMAD ABDUL AZIZ               2100486==============="<<endl;
    cout<<"=============RADEN MUHAMMAD KEVIN. H. D        2100958==============="<<endl;
    cout<<"=============WESLY HUGO TAMBA                  2110039==============="<<endl;
    cout<<"====================================================================="<<endl;
    cout<<"Tekan apapun untuk melanjutkan........";
    getch();
    system("cls");

//CASE MENU
    int pilih;
    inisialisasi();
    char x[20],y[20];
    do{
        cout << "\n\n= PROGRAM LIST TUGAS KULIAH ="<<endl;
        cout << "\n==============================="<<endl;
        cout << "\n|1. Masukan Tugas             |"<<endl;
        cout << "\n|2. Bereskan Tugas            |"<<endl;
        cout << "\n|3. Mencari nama tugas        |"<<endl;
        cout << "\n|4. Mengganti nama tugas      |"<<endl;
        cout << "\n|5. Kosongkan semua tugas     |"<<endl;
        cout << "\n|6. Keluar                    |"<<endl;
        cout << "\================================"<<endl;
        cout << "\nList tugas :"<<endl;
        if(namatugas.tail==-1)
                cout<<"(Tugas Kosong)"<<endl;
            else{
                for(int i=0;i<=namatugas.tail;i++)
                cout<<i+1<<". "<<namatugas.data[i]<<" dengan deadline pada "<<nomer.data[i]<<endl;}
            cout<<"\Pilih : ";
            cin>>pilih;

            switch(pilih){
            case 1:
                if(!isFull()){
                    cout<<"\nNote : Jika di nama tugas terdapat spasi, maka spasi diganti dengan underscore(_)\n";
                    cout<<"Masukan nama Tugas : ";
                    cin>>x;
                    cout<<"\nNote : Jika di nama tugas terdapat strip, maka strip diganti dengan underscore(-)\n";
                    cout<<"Deadline : ";
                    cin>>y;
                    enqueue(x);
                    enqueue_2(y);
                }
                else
                    cout<<"\nTugas sudah terlalu banyak!"<<endl;
                break;

            case 2:
                if(!isEmpty()){
                    dequeue();
                }
                else
                    cout<<"\nSaat ini tidak ada tugas!"<<endl;
                break;

            case 3:
                cout<<"masukan nama tugas yang ingin dicari : ";
                cin>>d;
                cari(d);
                break;

            case 4:
                cout<<"\nNote : Masukan nama tugas sesuai dengan yang ada dilist"<<endl;
                cout<<"masukan nama tugas yang ingin diganti : ";
                cin>>d;
                ganti(d);
                break;

            case 5:
                hapus();
                break;

            case 6:
                cout<<"\nTekan enter untuk keluar dari program"<<endl;
                break;

            default :
                system("cls");
                cout<<"Error!";

        }
    }while(pilih!=6);
}

