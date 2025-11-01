

//never use size of arr inside a fun because function takes the array as pointer instead of whole value


#include<iostream>
using namespace std;
 void arrfun(int arr[], int n) {
     for (int i = 0 ; i < n ; i++ ) {
         cout<<arr[i]<<" ";
     }
 }

    int main() {
        int *ptr = 0 ;
        int arr[] = {1,2,3,4,5,6,7,8,9,10};
        int n = sizeof(arr)/sizeof(arr[0]);
        arrfun(arr,n);
     cout<<*ptr<<endl;
     return 0;

    }