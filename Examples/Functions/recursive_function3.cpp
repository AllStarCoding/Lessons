#include <iostream>

void printTriangle(int n);
using namespace std; //we could put it outside main so it works for the other functions
int main(){

int x;
cout<<"Input the number of asterisks triangle you want to draw: ";
cin>>x;
printTriangle(x);
return 0;

}

void printTriangle(int n){

    if (n<1); //if it is less than one, do nothing
    else if (n==1)
        {cout<<"*"; //simply draw 1
         cout<<endl;}
    else{
        printTriangle(n-1); //when it is more than 1, first draw n-1 asterisks triangle
        while(n>=1){
            cout<<"*"; //then draw the last row
            n--;
        }
        cout<<endl;
    }

}
