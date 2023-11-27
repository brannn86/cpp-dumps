#include <iostream>
#include <string>
using namespace std;

int main() {

//declare
  string sentence;
  int spaces = 0;
  int mid = 0;
  int last = 0;
  int locator = 0;

//main
  cout<<"Masukkan Kalimat: ";
  getline(cin, sentence);
  for (int i = 0; i < sentence.size(); i++) {
    if (sentence[i] == ' ') {
      spaces++;
    }
  }

  for (int i = 0; i < sentence.size(); i++) {
    if (sentence[i] == ' ') {
      locator++;

      if (locator == spaces / 2) {
        mid = i + 1;
      }

      if (locator == (spaces / 2) + 1) {
        last = i;
      }
    }
  }

  string middle = sentence.substr(mid, last - mid);
  
//output
  cout << middle << endl;

  return 0;
} 
