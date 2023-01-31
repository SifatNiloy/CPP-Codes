#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    // cout << "enter 5 marks: ";
    for (int i = 0; i < 5; i++)
    {
        cout << "marks for student "<<i+1<<" = ";
        cin >> marks[i];
    }      
        cout << "5 marks of the array are: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
    }
