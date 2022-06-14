#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=true;    //True will give error:Case sensitive
    for(int i=2;i<n;i++){   //or i<sqrt(n)
        if (n%i==0){
            flag=false;
            break;
        }
    }
    if (n<=1){
        flag = false;
    }
    if(flag){
        cout<<"Prime";
    }
    else{
        cout<<"Not";
    }
    
    return 0;
}
------------------------------------------------------------------
    To check prime no. of prime no.s btw 2 no.s
    
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(isPrime(i)){   //calling fuct to check prime
            cout<<i<<endl;}
bool isPrime(int n){
    for(int i=2;i<n;i++){   //or i<sqrt(n)
        if (n%i==0){
            return false;}
    }
    return true;
}
    
