#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"enter marks : ";
    cin>>mark;
    if(mark>100 || mark <0){
        cout<<"invalid mark";
    }
    else if (mark>=80)
    {
        cout<<"A+";
    }
    else if (mark>=70 )
    {
        cout<<"A";
    }
    else if (mark>=60)
    {
        cout<<"A-";
    }
    else if (mark>=50)
    {
        cout<<"B";
    }
    
    else if (mark>=40)
    {
        cout<<"C";
    }
    
    else if (mark>=33)
    {
        cout<<"D";
    }
    else{
        cout<<"F";
    }
    
    
}