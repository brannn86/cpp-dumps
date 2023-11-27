#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    //declare
    int array[] = { 3,5,6,8,12};
    int n = sizeof(array)/sizeof(array[0]);
    int num = 6;
    auto angka = find(array, array + n, num);
 
    //main
    if (angka != end(array))
    {
        cout << "Nilai 6 ada pada Index =  " << distance(array, angka);
    }
    else 
        {
            cout << "Nilai";
        }
        
    return 0;
}