#include <iostream>
#define size (sizeof(a)/sizeof(a[0]))
using namespace std;

void selection_sort(int b[], int length);

int main(){

    int a[]={7, 8, 10, 5, 1, 11, -9};
    int i;
    for (i=0; i<size; i++)
        {cout<<a[i]<<" ";}
    cout<<endl;
    selection_sort(a, size);

    return 0;
}

void selection_sort(int b[], int length){

    int i, largest_location;
    int temp;
    int top;
    for (top=length-1; top>0; top--){
        largest_location=0;
        for (i=1; i<=top; i++){
            if (b[i]>b[largest_location]){
                largest_location=i;
            }
        }
        temp=b[top];
        b[top]=b[largest_location];
        b[largest_location]=temp;
    for (i=0; i<length; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    }
}
