#include <iostream>
#define size (sizeof(a)/sizeof(a[0]))
using namespace std;

void quick_sort(int b[], int low, int high);
int partition(int c[], int low, int high);
int main(){

    int a[]={-4, 3, 1, 0, 98, 72, 56};
    int i;
    for (i=0; i<size; i++)
        {cout<<a[i]<<" ";}
    cout<<endl;
    quick_sort(a, 0, size-1);
    for (i=0; i<size; i++)
        {cout<<a[i]<<" ";}
        cout<<endl;

    return 0;
}

void quick_sort(int b[], int low, int high){
    int p;
    if (low<high){
       p=partition(b, low, high);
       quick_sort(b, low, p);
       quick_sort(b, p+1, high);
    }

}

int partition(int c[], int low, int high){
    int i;

    int pivot=c[(low+high)/2];
    int temp, j;
    i=low-1;
    j=high+1;
    while(1){
        do{
            i=i+1;
        }while(c[i]<pivot);
        do{
            j=j-1;
        }while(c[j]>pivot);
        if (i>=j){

            return j;
        }
        temp=c[j];
        c[j]=c[i];
        c[i]=temp;


    }


}
