//header
#include <iostream>
#include <conio.h>
#include <cstring>
#include <fstream>
using namespace std;

//struct
struct todolist{
    char waktu[20],nama[20],status[20],bobot[20];
};
    todolist maks[20];

int todo;
int jumlahtodo;
int nomor_todo;
char urut[20];

void tambahtodo() {
    cout<<"\nJumlah kegiatan Yang Akan diinput : ";
    cin>>jumlahtodo;

    nomor_todo=0;
    for (int i=0; i<jumlahtodo; i++) {
        nomor_todo=nomor_todo+1;

        cout<<"\nTodo list ke-"<<nomor_todo<<endl;
        cout<<"Nama Kegiatan\t: "; cin.ignore();
        cin.getline(maks[todo].nama, 20);
        cout<<"Waktu\t\t: ";
        cin.getline(maks[todo].waktu, 20);
        cout<<"Status\t\t: ";
        cin.getline(maks[todo].status, 20);
        cout<<"Bobot\t\t: ";
        cin.getline(maks[todo].bobot, 20);
        todo++;
        }

}

void hapustodo() {
    cout<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
    cout<<"||\tNO\t||\tWaktu\t||\t\tTodo\t\t||\tStatus\t||\tBobot\t||\n";

    int j=0;
    for(int i=0;i<todo;i++){
        j=j+1;

        cout<<"==================================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<maks[i].waktu<<"\t||";
        cout<<maks[i].nama<<"\t\t||";
        cout<<maks[i].status<<"\t||";
        cout<<"\t"<<maks[i].bobot<<"\t||";
        cout<<endl;
    }
    cout<<"==================================================================================" << endl << endl;

    int listhapus, hasil;
        cout << "Hapus list ke-";
        cin >> listhapus;

        hasil = listhapus-1;
        todo--;

        for(int i=hasil; i<todo; i++) {
            maks[i]=maks[i+1];
        }
        cout<<"\n\n\n-------- List ke-"<<listhapus<<" Terhapus ------- " << endl;
}

void lihattodo() {
    cout<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
    cout<<"||\tNO\t||\tWaktu\t||\t\tTodo\t\t||\tStatus\t||\tBobot\t||\n";

    int j=0;
    for(int i=0;i<todo;i++){
        j=j+1;
        cout<<"==================================================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<maks[i].waktu<<"\t||";
        cout<<maks[i].nama<<"\t\t||";
        cout<<"\t"<<maks[i].status<<"\t||";
        cout<<"\t"<<maks[i].bobot<<"\t||";
        cout<<endl;
    }
    cout<<"==================================================================================================" << endl;

}

void edittodo() {
    cout<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
    cout<<"||\tNO\t||\tWaktu\t||\t\tTodo\t\t||\tStatus\t||\tBobot\t||\n";

    int j=0;
    for(int i=0;i<todo;i++){
        j=j+1;
        cout<<"===============================================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<maks[i].waktu<<"\t||";
        cout<<maks[i].nama<<"\t\t||";
        cout<<maks[i].status<<"\t||";
        cout<<"\t"<<maks[i].bobot<<"\t||";
        cout<<endl;
    }
        cout<<"===============================================================================================" << endl << endl;

        int edit,hasil;

        cout<<"Masukan Todo list yang akan diubah : ";
        cin>>edit;

        hasil=edit-1;

        cout<<"Nama Kegiatan\t: "; cin.ignore();
        cin.getline(maks[hasil].nama, 20);
        cout<<"Waktu\t\t: ";
        cin.getline(maks[hasil].waktu, 20);
        cout<<"Status\t\t: ";
        cin.getline(maks[hasil].status, 20);
        cout<<"Bobot\t\t: ";
        cin.getline(maks[hasil].bobot, 20);
}

void urutkan() {
    int i,j,a;
    for (i=0; i<=todo-1; i++) {
        for(j=i+1; j<=todo; j++) {
           a = strcmp(maks[i].bobot, maks[j].bobot);
           if (a<0) {
                strcpy(urut, maks[i].bobot);
                strcpy(maks[i].bobot, maks[j].bobot);
                strcpy(maks[j].bobot, urut);

                strcpy(urut, maks[i].nama);
                strcpy(maks[i].nama, maks[j].nama);
                strcpy(maks[j].nama, urut);

                strcpy(urut, maks[i].waktu);
                strcpy(maks[i].waktu, maks[j].waktu);
                strcpy(maks[j].waktu, urut);

                strcpy(urut, maks[i].status);
                strcpy(maks[i].status, maks[j].status);
                strcpy(maks[j].status, urut);
           }
        }
    }
    cout << "\n\t\t\t TO DO LIST TELAH DIURUTKAN\n";
}

//main
int main() {
    //kamus data
    int pilih;

    cout << "\n TO DO LIST" << endl << endl;

    menu:
    cout<<" SELECT MENU ";
    cout<<"\n1. Tambah Todo List";
    cout<<"\n2. Hapus Todo List";
    cout<<"\n3. Lihat Todo List";
    cout<<"\n4. Edit Todo List";
    cout<<"\n5. Urutkan Todo List";
    cout<<"\n6. Save & Exit";

    cout<<"\n\nMasukkan Pilihan : ";
    cin>>pilih;
    system("cls");

    switch(pilih) {
        case 1 :tambahtodo();goto menu;
        case 2 :hapustodo(); goto menu;
        case 3 :lihattodo(); goto menu;
        case 4 :edittodo(); goto menu;
        case 5 :urutkan(); goto menu;
        case 6 : {
            ofstream TodoList;
            TodoList.open("To Do list.txt", ios::app);

            char exit;
            cout << endl << endl;
            cout <<"\t\t\t\t\tYakin Keluar? [Y]    [N] \n\n";
            cout <<"\t\t\t\t\t\t";
            cin>>exit;

            if(exit=='y'||exit=='Y') {
                TodoList<< "\t\t\t\t\tTodo List Anda\n";
                TodoList<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
                TodoList<<"||\tNO\t||\tWaktu\t||\t\tTodo\t\t||\tStatus\t||\tBobot\t||\n";

                int j=0;

            for(int i=0;i<todo;i++){
                j=j+1;
                TodoList<<"===============================================================================================\n";
                TodoList<<"||\t"<<j<<"\t||";
                TodoList<<maks[i].waktu<<"\t||";
                TodoList<<maks[i].nama<<"\t\t||";
                TodoList<<"\t"<<maks[i].status<<"\t||";
                TodoList<<"\t"<<maks[i].bobot<<"\t||";
                TodoList<<endl;
            }
            TodoList<<"===============================================================================================" << endl;
            cout << "\n\t\t\t\t\tTo Do List telah tersimpan\n";
            cout << " \t\t\t\t\tSelamat beraktivitas :))\n";
            }
    TodoList << endl;
    TodoList << "\t\t\t\t\t\tSelamat Beraktivitas :))\n";

    if(exit=='n'||exit=='N') {
        goto menu;
    }
    TodoList.close();
        }
    }
    while (pilih>6) {
        cout<<"\tPilihan tidak tersedia (Menu hanya 1-5)"<<endl;
        cout << "\t\tTekan enter untuk mengulang" << endl;
        getch();
        goto menu;
    }
}
