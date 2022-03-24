#include <iostream>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=0;j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
void arrayprint(int arr[], int n)
{
    int i;
    for (i=0; i< n; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    arrayprint(arr, n);
    return 0;
}
 