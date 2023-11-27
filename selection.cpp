#include <iostream>
using namespace std;
int main(){
	int array[7]={2,8,5,3,9,4,1};
	int n=sizeof(array)/sizeof(array[*array]);
	int tmp;
	cout<<"Sebelum diurutkan: "<<endl;
			for(int i=0; i < n; i++){
				cout<<array[i]<<" ";
			}
		
	for(int i=0;i<n;i++){
		int min=i;
			for(int j=i+1;j<n;j++){
				if(array[j]<array[min]){
					min=j;
				}
			}
			tmp=array[min];
			array[min]=array[i];
			array[i]=tmp;
		}
		cout<<endl;
		cout<<"Sesudah diurutkan: "<<endl;
			for(int k=0;k<n;k++){
				cout<<array[k]<<" ";
		}
	}
