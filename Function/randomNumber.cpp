#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
    
    for (int i=1; i<=5; i++){
        int randomNumber = rand()%5 ; //vagses 0 theke 5 er moddhe
        cout << "random number = " << randomNumber << endl;
    }
    
}