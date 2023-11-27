/* Gibran Ismail Hattami
   2110044
   1B
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  //declare
  char find;
  int characters = 0;
  string sentence = ("ABCDEFGHJK EFAN EFUL");
  
  //main
  cout << sentence << endl;
  cout << "Cari Karakter: ";
  cin >> find;
  for ( int x=0 ; x < sentence.size(); x++) {
    if (sentence[x] == find) {
      cout << x << endl;
      characters++;
    }
  }
  //output
  cout<<"Jumlah Karakter = "<<characters;

  return 0;
} 