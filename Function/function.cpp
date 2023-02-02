#include <iostream>
#include <conio.h>
using namespace std;

void addition(int a, int b)
{
    int sum = a + b;
    cout <<"sum = "<< sum<<endl;
}
void subtraction(int a, int b)
{
    int subtraction = a - b;
    cout << "subtraction = " << subtraction<<endl;
}
void multiplication(int a, int b)
{
    int multiplication = a * b;
    cout << "multiplication = " << multiplication<<endl;
}
void division(int a, int b)
{
    float division =(float) a / b;
    cout << "division = " << division<<endl;
}
int main()
{

    addition(20, 30);
    multiplication(20, 30);
    division(20, 30);
    // getch();
}