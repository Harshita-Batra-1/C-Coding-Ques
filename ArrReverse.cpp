#include <iostream>

using namespace std;

int main()
{
    int array[5]={4,2,5,-9,7};
    int n=5;
    int start = 0;   
    int end =n-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--; }
    for(int i=0; i<n; i++){
        cout<< array[i]<<" ";
    }   
    --------------------------------------------------------------------OR-------------------------------------------------------------------------

void reverse(int arr[],int n){     //arr[] -- isme pointer arr means 1st element of array ka index aega
    int start = 0;   // isme 0th index ko store kraya 
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
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
    
    reverse(arr,6);    //can't write cout before it bcz calling a void function
    reverse(array,5);  // array k 0 ko point krta hua ek pointer pass kra re h
    
    printArray(arr,6);
    cout<<endl;
    printArray(array,5);
      

    return 0;  
}
