#include<iostream>
using namespace std;
int main()
{
        int a, b, x, y, temp, hcf, lcm;
        cout<<"\n Enter Two Numbers : \n";
        cin>>x>>y;
        a=x;
        b=y;
        while(b!=0)
        {
                temp=b;
                b=a%b;
                a=temp;             
                
        }
        hcf=a;
        lcm=(x*y)/hcf;
        cout<<"\n HCF : "<<hcf<<"\n";
        cout<<"\n LCM : "<<lcm<<"\n";
        return 0;
}
//--------HINT----to------solve----------------using recursion funct below
int gcd(int x , int y){
        int r;
        r=x%y;
        if(r==0){
                return (y);
        else{
                gcd(y,r);

cin>>a>>b;
                if(a>b){
                        res=gcd(a,b)
                else{
                        res=gcd(b,a)
