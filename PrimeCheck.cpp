#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=true;    //True will give error:Case sensitive
    for(int i=2;i<n;i++){
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