#include <iostream>//MENGGUNAKAN COUT, CIN, ENDI  /*Include merupakan input output header yang digunakan sebagai standar input
#include <conio.h> //MENGGUNAKAN GETCH()             ouput digunakan sebagai standar input ouput operasi yang digunakan C++*/
#include <stdlib.h> //MENGGUNAKAN SYSTEM("CLS)
#include <string.h>//MENGGUNAKAN STRCPY()
#define MAX 10 //MAKSIMAL NOMOR TUGAS


using namespace std;

//STRUCT
struct queue                //pada pemrograman ini, kelompok kami menggunakan kode program antrian atau queue, dimana implementasi program queue ini                                 */
{                           //hanya menggunakan nomor saja seperti yang ada pada antrian, untuk programnya sendiri, kita harus membuat beberapa fungsi,
    int head;               //variabel, dan lain lain terlebih dahulu.
    int tail;               //head merupakan pointer yang menyimpan alamat data pertama, dan tail merupakan pointer yang menyimpan alamat data terakhir
    char data[20][20];      //berikut variabel yang dimasukan
};

//INSTALISASI OBJEK
queue namatugas, nomer;     //berikut yang variabel yang di masukan pada fungsi queue
                            //variabel namatugas akan diisi oleh nama tugas dan varianel nomor akan diisi oleh waktu pemngumpulan atau deadline
//FUNGSI UNTUK MENU
void inisialisasi(){                   //void itu kosong, artinya tidak mengembalikan apapun sehingga tidak menggunakan return
    namatugas.head=namatugas.tail=-1;  //dimana nama.head dan nama.tail, begitupun dengan nomer.head dan nomer.tail diubah menjadi -1
    nomer.head=nomer.tail=-1;
}

int isFull(){
    if(namatugas.tail== MAX-1)         //fungsi isFull untuk mengecek apakah list tugas tersebut penuh atau tidak, jika return 1 list penuh
        return 1;                      //dan jika return 0 list tidak penuh
    else
        return 0;                      //queue ini untuk nama tugas
}

int isFull_2(){                         //sama seperti yang di atas, cuman ini untuk queue nemer atau deadlinenya
    if(nomer.tail== MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty(){                          //fungsi isEmpty untuk memerikasa listnya kosong atau tidak, jika return 1 kosong
    if(namatugas.tail==-1){             //dan jika return 0 tidak kosong
        namatugas.head=-1;
        return 1;                       //queue ini untuk nama tugas
    }
    else
        return 0;
}

int isEmpty_2(){                        //sama seperti yang di atas, cuman ini untuk queue nemer atau deadlinenya
    if(nomer.tail==-1){
        nomer.head=-1;
        return 1;
    }
    else
        return 0;
}

void enqueue(char d[20]){                       //fungsi enqueue berfungsi untuk memasukan data kedalam list, dimana akan menerima variabel char
    system("cls");                              //berukuran 20
    namatugas.head=0;                           //system cls berfungsi untuk membersihkan layar program
    namatugas.tail++;
    strcpy(namatugas.data[namatugas.tail],d);   //strcpy ini berfungsi untuk menyalin isi dalam variabel d ke dalam nama.data
}

void enqueue_2(char d[20]){                     //sama saja seperti yang diatas, cuma yang ini untuk nomer atau deadlinenya
    system("cls");                              //system cls berfungsi untuk membersihkan layar program
    nomer.head=0;
    nomer.tail++;
    strcpy(nomer.data[nomer.tail],d);
}

void dequeue(){                                    //fungsi dequeue berfungsi untuk mengeluarkan list pertama
    system("cls");                                 //system cls berfungsi untuk membersihkan layar program
    cout<<"Tugas"<<namatugas.data[namatugas.head]<<"sudah diselesaikan"<<endl;

    for(int i=namatugas.head;i<=namatugas.tail;i++) //disini ada perulangan, perulangan 1 untuk nama tugas dan yang kedua untuk deadlinenya
    strcpy(namatugas.data[i],namatugas.data[i+1]);  //strcpy disini, sama seperti sebelumnya menyalin data, hanya saja yang disalin data list kedua
    namatugas.tail--;                               //menjadi data list pertama

    for(int i=nomer.head;i<=nomer.tail;i++)         //sama seperti yang diatas, cuman ini untuk deadlinenya
    strcpy(nomer.data[i], nomer.data[i+1]);
    nomer.tail--;
}

void cari(string d){                                //fungsi cari, dimana dia akan menerima input string d
    system("cls");                                  //system cls berfungsi untuk membersihkan layar program
    for(int i=namatugas.head; i<=namatugas.tail; i++){              //Lalu ada perulangan berfungsi untuk mencari nama tugas pada list
        if(namatugas.data[i]==d){
            cout<<"Tugas "<<d<<" terdapat pada list no.  "<<i+1<<endl;
            break;                                                     //break adalah perintah khusus yang dipakai untuk memaksa sebuah perulangan
        }                                                              //berhenti sebelum waktunya
    }
}

void ganti(string d){                               //fungsi ganti berfungsi untuk mengganti nama tugas dan deadline pada list
    char x[20], y[20];
    system("cls");
    for(int i=0;i<=namatugas.tail;i++){             //lalu ada perulangan, jika namatugas.data[i]==d maka akan memunculkan output
        if(namatugas.data[i]==d){                   //untuk memasukan tugas dan deadline yang baru atau yang akan di ganti
            cout<<"\nNote : Jika di nama tugas terdapat spasi, maka spasi diganti dengan underscore(_)\n";
            cout<<"Nama Tugas yang diganti : ";       //untuk nama tugas yang diganti akan dimasukan ke variabel x
            cin>>x;
            cout<<"\nNote : Jika di nama tugas terdapat strip, maka strip diganti dengan underscore(-)\n";
            cout<<"Perubahan deadline : ";            //untuk deadline yang diganti akan dimasukan ke variabel y
            cin>>y;
            strcpy(namatugas.data[i],x);              //strcpy untuk menyalin isi dari data x ke dalam namatugas.data
            strcpy(nomer.data[i],y);                  //strcpy untuk menyalin isi dari data y ke dalam namatugas.data
            cout<<"Data Tugas "<<d<<" dirubah menjadi "<<namatugas.data[i]<<" dengan tugas : "<<nomer.data[i];
        }                           //lalu akan memunculkan keterangan bahwa nama tugas dan deadline berhasil di lakukan
    }
}

void hapus(){                       //fungsi hapus berguna untuk semua isi dari list yang ada
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
        if(namatugas.tail==-1)                  //jika lisnya kosong maka akan ada keterangan tugas kosong
                cout<<"(Tugas Kosong)"<<endl;
            else{
                for(int i=0;i<=namatugas.tail;i++)
                cout<<i+1<<". "<<namatugas.data[i]<<" dengan deadline pada "<<nomer.data[i]<<endl;}
            cout<<"\Pilih : ";                                  //atau jika antrian tidak kosong, maka akan menampilkan isi list yang telah dimasukan
            cin>>pilih;

            switch(pilih){
            case 1:
                if(!isFull()){                  //memanggil isFull untuk mengecek apakah penuh jika tidak akan menampilkan cout berikut
                    cout<<"\nNote : Jika di nama tugas terdapat spasi, maka spasi diganti dengan underscore(_)\n";
                    cout<<"Masukan nama Tugas : ";
                    cin>>x;
                    cout<<"\nNote : Jika di nama tugas terdapat strip, maka strip diganti dengan underscore(-)\n";
                    cout<<"Deadline : ";
                    cin>>y;
                    enqueue(x);
                    enqueue_2(y);               //lalu variabel x dan y akan dimasukan pada fungsi enqueue() dan enqueue_2()
                }
                else
                    cout<<"\nTugas sudah terlalu banyak!"<<endl;//jika penuh makan akan menampilkan keterangan tugas sudah terlalu banyak
                }
                break;

            case 2:                             //akan mengecek apakah list kosong, jika tidak kosong maka akan menjalankan fungsi dequeue()
                if(!isEmpty()){
                    dequeue();
                }
                else
                    cout<<"\nSaat ini tidak ada tugas!"<<endl; //jika kosong maka akan memunculkan keterangan saat ini tidak ada tugas
                break;

            case 3:
                cout<<"masukan nama tugas yang ingin dicari : ";      //menampilkan memasukan nama yang dicari yang akan disimpan nantinya
                cin>>d;                                                //pada variabel d
                cari(d);                                               //lalu dia akan memanggil fungsi cari() pada variabel d
                break;

            case 4:
                cout<<"\nNote : Masukan nama tugas sesuai dengan yang ada dilist"<<endl;
                cout<<"masukan nama tugas yang ingin diganti : "; //menampilkan memasukan nama yang diganti yang akan disimpan nantinya
                cin>>d;
                ganti(d);                                          //pada variabel d
                break;                                             //lalu dia akan memanggil fungsi ganti() pada variabel d

            case 5:                         //menjalankan fungsi hapu() maka semua list yanga ada menjadi kosong
                hapus();
                break;

            case 6:                                                            //untuk keluar dari program
                cout<<"\nTekan enter untuk keluar dari program"<<endl;
                break;

            default :
                system("cls");                      //jika memilih diluar case 1 sampai 6 maka akan terjadi error
                cout<<"Error!";

        }
    }while(pilih!=6);                               //jika pilih tidak sama dengan case 6 maka program akan terus berjalan
}

