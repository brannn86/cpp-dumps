#include <iostream>
using namespace std;

int main() {    
    int A, B, C;

    cout << "Input Bil A: ";
    cin >> A;
    cout << "Input Bil B: ";
    cin >> B;
    cout << "Input Bil C: ";
    cin >> C;
    cout << "A = " << A << " B = " << B << " C = " << C <<endl;
    
    if(A >= B && A >= C)
        cout << "Bilangan terbesar adalah: " << A;

    if(B >= A && B >= C)
        cout << "Bilangan terbesar adalah: " << B;
    
    if(C >= A && C >= B)
        cout << "Bilangan terbesar adalah: " << C;
  
    return 0;
}