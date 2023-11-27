#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream myFile;
    string data;

    myFile.open("hari.txt");
    char text;
    while (!myFile.eof()){
        myFile.get(text);
        cout << text;
    }
    myFile.close();

    cin.get();
    return 0;
}