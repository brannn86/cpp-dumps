#include <iostream>
using namespace std;
int main(){
	int array[8]={4,3,2,1,5,8,7,6};
	int i, j, temp;
	int n=sizeof(array)/sizeof(array[0]);	
		cout<<"Sebelum diurutkan: "<<endl;
			for(i=0; i < 8; i++){
				cout<<array[i]<<" ";
	}
cout<<endl;
cout<<"Sesudah diurutkan: "<<endl;
for(i=1; i<9; i++){
	for(j=0; j<n-i; j++){
		if(array[j]<array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			}
		}
		cout<<array[j]<<" ";
	}

}

