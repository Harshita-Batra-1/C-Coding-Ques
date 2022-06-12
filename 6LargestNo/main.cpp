#include <iostream>
using namespace std;

void main()
{
//4.) i)using in build function of max()
//    ii) using function declaration and calling
    int big(int,int);
    int x,y;
    cout<<"Enter no: ";
    cin>>x >>y;
    max=big(x,y);
    cout<<"Bigger no.: "<<max;
    getch()
    return 0;
}
int big (int a, int b)
{
    if(a>b)
        return (a);
    else
        return (b);

}
//1)using conditional operator
    //input 2 no.
    //input 3 no.
    //input 4 no.
//2)using if else loop
//3)using logical operators
//4)using functions

//1.)
    int a,b,big;
    cout<<"Enter 2 no: ";
    cin>>a>>b;
    big = a>b?a:b;
    cout<<"Bigger no."<<big;

    int a,b,c,big;
    cout<<"Enter 3 no: "<<endl;
    cin>>a>>b>>c;
    big = a>b?(a>c?a:c):(b>c?b:c);
    cout<<"Bigger no."<<big;

    int a,b,c,d,big;
    clrscr();
    cout<<"Enter 4 no: "<<endl;
    cin>>a>>b>>c>>d;
    big = a>b?(a>c?(a>d?a:d):(c>d?c:d):(b>c?(b>d?b:d):(c>d?c:d)));
    cout<<"Bigger no."<<big;

//2.)
    int a,b;
    cout<<"Enter no. : "<<endl;
    cin>>a>>b;
    if (a>b)
        cout<<"Biggest no. is: "<<a;
    else
        cout<<"Big is: "<<b;

//3.)
    int a,b,c;
    cout<<"Enter nos: ";
    cin>>a>>b>>c;
    if((a>b)&&(a>c)) //see brackets ( ( ) && ( ) )
        cout<<"Big is: "<<a;
    if((b>c)&&(b>a))
        cout<<"Big is: "<<b;
    else
        cout<<"Big : "<<c;


