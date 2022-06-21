#include <iostream>

using namespace std;

void reverse(int arr[],int n){
    int start = 0;   // isme 0th index ki value ko store kraya but ye ek pointer hai jo index ko point krta so ++ krne se index aage bdega ussi value ka
    int end =n-1;
    while(start<=end){
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
}

int main()
{
    int arr[6]={2,3,1,42,-2,0};
    int array[5]={4,2,5,-9,7};
    
    reverse(arr,6);    //can't write cout before it bcz callinf a void function
    reverse(array,5);
    
    printArray(arr,6);
    cout<<endl;
    printArray(array,5);
      

    return 0;  
}
