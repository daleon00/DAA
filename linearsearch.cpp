#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==key){
            return i;
            break;
        }
    }
    return -1;
}
 int main(void){
     int arr[]={2,3, 4, 40, 10, 50};
     int x= 10;
     int n=sizeof(arr)/sizeof(arr[0]);
     int result = linearsearch(arr, n, x);
     (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}