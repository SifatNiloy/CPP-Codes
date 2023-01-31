#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int i = 1;
    
    do{
        cout << pow( 2, i) << endl;
        i++;
    }
    while (i <= num);
    
}