#include <iostream>
#include <string>
using namespace std;

int NumbersOfSpaces(string sentence) {
  int spaces = 0;

  for (int i = 0; i < sentence.size(); i++) {
    if (sentence[i] == ' ') {
      spaces++;
    }
  }

  return spaces;
}

int main() {
  string sentence;

  cout<<"Masukkin sentence: ";
  getline(cin, sentence);

  int spaces = NumbersOfSpaces(sentence);
  int mid = 0;
  int last = 0;
  int locator = 0;

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

  cout << middle << endl;

  return 0;
} 
