#include <iostream>
using namespace std;
struct buku{
	int tahunterbit;
	string judul, pengarang;
	
	buku *next;
};
int main(){
	buku *node1, *node2, *node3;
	
	node1 = new buku();
	node2 = new buku();
	node3 = new buku();
	
	node1->judul = "Dasar Pemrograman";
	node1->pengarang = "Deden & Taufik";
	node1->tahunterbit = 2022;
	node1->next = node2;
	
	node2->judul = "Pemrograman Lanjut";
	node2->pengarang = "Taufik & Deden";
	node2->tahunterbit = 2022;
	node2->next = node3;
	
	node3->judul = "Struktur Data & Algoritma";
	node3->pengarang = "Mike Hawk";
	node3->tahunterbit = 2023;
	node3->next = NULL;
	
	buku *cur;
	cur = node1;
	while(cur != NULL){
		cout << endl;
		cout << "Judul Buku = " << cur->judul << endl;
		cout << "Pengarang = " << cur->pengarang << endl;
		cout << "Tahun Terbit = " << cur->tahunterbit << endl;
	}
}
