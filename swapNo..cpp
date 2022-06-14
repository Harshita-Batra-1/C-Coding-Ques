#include <bits/stdc++.h>
using namespace std;
// with & without 3rd varibale // BIT manuplation // STL
int main()
{
    
    int a,b;
    cout<<"enter no. a: "<<endl;
    cin>>a;
    cout<<"enter no. b: "<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"no. a: "<<a<<endl;
    cout<<"no. b: "<<b<<endl;  
----------------------------------------
    int a,b,temp;
    cout<<"enter no. a: "<<endl;
    cin>>a;
    cout<<"enter no. b: "<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"no. a: "<<a<<endl;
    cout<<"no. b: "<<b<<endl;  
----------------------------------------
    int a, b;
    cout<<"enter no. a: "<<endl;
    cin>>a;
    cout<<"enter no. b: "<<endl;
    cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<"no. a: "<<a<<endl;
    cout<<"no. b: "<<b<<endl;
-----------------------------------------
    
    
    return 0;
}
