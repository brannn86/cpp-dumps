#include <iostream>
using namespace std;

int maks = 5;
int top = 0;
string arrBook[5];

//check full
bool isFull(){
	if(top == maks){
		return true;
	}else{
		return false;
	}
}

//check empty
bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}	
}

//push
void push(string data){
	if(isFull()){
		cout << "Data penuh" << endl;
	}else{
		arrBook[top] = data;
		top++;
	}
}

//pop
void pop(){
	if(isEmpty()){
		cout << "Data kosong" << endl;
	}else{
	arrBook[top-1] = "";
	top--;
	}
}

//display
void display(){
	if(isEmpty()){
		cout << "Data kosong" << endl;
	}else{
	for(int i=top-1; i >= 0; i--){
		//if(arrBook[i]  != "") //top detect
		cout << "Data ke: " << i << " " << arrBook[i] << endl;
		}
	cout << "<=================>" << endl;	
	}
}



int main(){
//string data;
//cout << "masukkan data: ";
//cin >> data;
//push(data);

int pushtimes;
string data;

cout << "Masukkan jumlah data: ";
cin >> pushtimes;

for(int i=0; i<=pushtimes-1 ; i++){
	cout << "Masukkan isi data ke-" << i << ": ";
	cin >> data;
	push(data);
}
	display();

	return 0;
}
