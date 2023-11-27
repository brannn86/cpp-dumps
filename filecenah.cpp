#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //ios::out
    //ios::trunc
    //ios::app

    ofstream myFile;
    myFile.open("data1.txt", ios::out);
    myFile << "keren 1" << endl;
    myFile << "keren 111" << endl;
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    int a = 1234555;
    myFile << "keren 22" << endl;
    myFile << a << endl;
    myFile.close();

    myFile.open("data3.txt", ios::app);
    myFile << "keren 4443" << endl;
    myFile << "keren 443" << endl;
    myFile.close();

    cin.get();
    return 0;
}