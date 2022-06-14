#include <iostream>

using namespace std;

int main()
{
//simple interest
    int p,r,t,s; //give float instead
    cout<<"Enter Principal: "<<endl;
    cin>>p;
    cout<<"Enter rate: "<<endl;
    cin>>r;
    cout<<"Enter time: "<<endl;
    cin>>t;
    s= (p*r*t)/100;
    cout<<"Simple Interest: "<<s; 

//Compound Interest
    int p,r,t,a,ci;
    cout<<"Enter Principal: "<<endl;
    cin>>p;
    cout<<"Enter rate: "<<endl;
    cin>>r;
    cout<<"Enter time: "<<endl;
    cin>>t;
    a = p*pow(((1+r)/100),t);
    ci = a - p;
    cout<<"Compound Interest: "<<ci;

    return 0;
}