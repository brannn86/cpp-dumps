/* Gibran Ismail Hattami
   2110044
   1B
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  //declare
  char find = 'E';
  int characters = 0;
  string sentence = ("ABCDEFGHJK EFAN EFUL");
  
  //main
  cout<< sentence <<endl;
  for (int val = 0; val < sentence.size(); val++) {
    if (sentence[val] == find) {
      cout<<val<<endl;
      characters++;
    }
  }
  //output
  cout<<"Jumlah Karakter = "<<characters;

  return 0;
} 