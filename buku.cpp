#include <iostream>
using namespace std;

struct Buku{
	int tahunTerbit;
	string judul, pengarang;
	
	Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del;

void createSingleLinkedList(string judul, string pengarang, int tB){
	head = new Buku();
	tail = new Buku();
	
	head->judul = judul;
	head->pengarang = pengarang;
	head->tahunTerbit = tB;
	head->next = NULL;
	tail = head;
	}
	
void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << endl;
		cout << "Judul Buku = " << cur->judul << endl;
		cout << "Pengarang = " << cur->pengarang << endl;
		cout << "Tahun Terbit = " << cur->tahunTerbit << endl;
		
		cur = cur->next;
	}
}

void addFirst(string judul, string pengarang, int tB){
	newNode = new Buku();
	
	newNode->judul = judul;
	newNode->pengarang = pengarang;
	newNode->tahunTerbit = tB;
	newNode->next = NULL;
	head = newNode;
}

void addLast(string judul, string pengarang, int tB){
	newNode = new Buku();
	
	newNode->judul = judul;
	newNode->pengarang = pengarang;
	newNode->tahunTerbit = tB;
	newNode->next = NULL;
	tail->next = newNode;
	tail = newNode;
}

//void deleteFirst()
	
int main(){
//string namabuku, namapengarang;
//int tahun;

//cout << "Judul Buku: " << namabuku;
//cin >> namabuku;

//cout << "Pengarang: " << namapengarang;
//cin >> namapengarang;

//cout << "Tahun Terbit: " << tahun;
//cin >> tahun;

createSingleLinkedList("Buku Taktik menguasai wanita", "Mas Jon", 2022);
printSingleLinkedList();

addFirst("Buku Koleksi Chord Gitar", "Mas Pur", 2023);
printSingleLinkedList();

addLast("Buku Lirik Lagu Dmasiv", "Mas Bro", 2024);
printSingleLinkedList();

}
