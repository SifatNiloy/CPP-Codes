#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main(){
    while (1)
    {
        int guessNumber, randomNumber;
        cout << "enter your number between 1 to 5 : ";
        cin >> guessNumber;
        randomNumber = 1 + rand() % 5;
        if (guessNumber == randomNumber)
        {
            cout << "you have won" << endl;
        }
        else
        {
            cout << "you have lost.please try again. " << endl;
            cout << "random number was : " << randomNumber<<endl;
        }
        
    }
    getch();
}