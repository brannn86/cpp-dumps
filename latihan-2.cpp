/* Gibran Ismail Hattami
   2110044
   1B
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  //declare
  string sentence;

  //main
  cout<<"Masukkan Kalimat: ";
  getline(cin, sentence);
  for (int val = 0; val < sentence.size(); val++) {
    if (val == 0 || val == sentence.size() - 1) {

  //output
      cout <<  sentence[val] << endl;
    }
  }



  return 0;
} 