#include<iostream>
using namespace std;
int main(){
    int n, sum=0;

    int students[n];
    cout<<"Enter student number : ";
    cin>>n;
    for (int i=0;i<n; i++){
        cout<<"marks for student "<<i+1<<" = ";
        cin>>students[i];
        sum=sum+students[i];
    }
    cout<<"total marks is : "<<sum<<endl;
    float avg= (float) sum/ n;
    cout<<"average : "<< avg;

}