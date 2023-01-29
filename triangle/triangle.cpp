#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    double base, height, area;
    cout <<"Enter the base of the traingle: ";
    cin >> base;

    cout<<"Enter the height of the traingle: ";
    cin>>height;

    area=(double)1/2*base*height; /*type casting*/
    /* area=(double)1/2*base*height*/

    cout<<"Area of the traingle is: "<<area;
    
    getch();
}