#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    num1=10;
    num2=30;
    int max=(num1>num2)? num1 : num2;
    cout<<"larger number is "<<max;

    cout<<endl<<"enter a number: "<<endl;
    cin>>num3;
    num3%2==0? cout<<num3<<" is even": cout<<num3<< " is odd";

}