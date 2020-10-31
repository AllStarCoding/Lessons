#include <iostream>

using namespace std;

int *array_items(int*, int);
int main(){

    int a[3]={4, 5, 6};

    int *p;

    p=array_items(a, 3);

    cout<<*p<<endl;

    return 0;
}


int *array_items(int a[], int size){

   return &a[0];
}
