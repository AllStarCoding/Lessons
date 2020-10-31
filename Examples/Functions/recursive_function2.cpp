#include <iostream>

void printrow(int n);
using namespace std; //we could put it outside main so it works for the other functions
int main(){

int x;
cout<<"Input the number of asterisk(s) you want to draw in a single row: ";
cin>>x;
printrow(x);
return 0;

}

void printrow(int n){

    if (n<1); //if it is less than one, do nothing
    else if (n==1)
        cout<<"*"; //simply draw 1
    else{
        printrow(n-1); //when it is more than 1, first draw n-1 asterisk(s)
        cout<<"*"; //then draw the last one
    }

}
