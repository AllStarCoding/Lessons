#include <iostream>
#define size (sizeof(a)/sizeof(a[0]))
using namespace std;

void bubble_sort(int b[], int length);

int main(){

    int a[]={7, 8, 10, 5, 1, 11, -9};
    int i;
    for (i=0; i<size; i++)
        {cout<<a[i]<<" ";}
    cout<<endl;
    bubble_sort(a, size);

    return 0;
}

void bubble_sort(int b[], int length){

    int i, largest_location;
    int temp;
    int top;
    bool sorted=false;
    for (top=length-1; top>0 && !sorted; top--){
        sorted=true;
        for (i=0; i<top; i++){
            if (b[i]<b[i+1]){
                sorted =false;
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }

    for (i=0; i<length; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    }
}
