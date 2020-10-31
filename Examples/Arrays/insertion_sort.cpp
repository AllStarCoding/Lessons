#include <iostream>
#define size (sizeof(a)/sizeof(a[0]))
using namespace std;

void insertion_sort(int b[], int length);

int main(){

    int a[]={7, 49, -2, 4, 64, 8};
    int i;
    for (i=0; i<size; i++)
        {cout<<a[i]<<" ";}
    cout<<endl;
    insertion_sort(a, size);

    return 0;
}

void insertion_sort(int b[], int length){

    int top;
    int item;
    int i;
    for (top=1; top<length; top++){
        item=b[top];
        i=top;
        while(i>0 &&item<b[i-1]){
            b[i]=b[i-1];
            i--;

        }
        b[i]=item;
        for (i=0; i<length; i++)
        {cout<<b[i]<<" ";}
        cout<<endl;
    }
}
