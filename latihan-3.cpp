/* Gibran Ismail Hattami
   2110044
   1B
*/

#include <iostream>
#include <string>
using namespace std;

int hitungJumlahSpasi(string kalimat) {
  int jumlahSpasi = 0;

  for (int i = 0; i < kalimat.size(); i++) {
    if (kalimat[i] == ' ') {
      jumlahSpasi++;
    }
  }

  return jumlahSpasi;
}

int main() {
  string kalimat;

  cout<<"Masukkin kalimat: ";
  getline(cin, kalimat);

  int jumlahSpasi = hitungJumlahSpasi(kalimat);

  
  int kataTengahMulai = 0;
  int kataTengahAkhir = 0;

  int locator = 0;

  for (int i = 0; i < kalimat.size(); i++) {
    if (kalimat[i] == ' ') {
      locator++;

      if (locator == jumlahSpasi / 2) {
        kataTengahMulai = i + 1;
      }

      if (locator == (jumlahSpasi / 2) + 1) {
        kataTengahAkhir = i;
      }
    }
  }

  string kataTengah = kalimat.substr(kataTengahMulai, kataTengahAkhir - kataTengahMulai);

  cout<<kataTengah<<endl;

  cin.get();
  return 0;
} 
