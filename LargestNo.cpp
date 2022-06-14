#include <iostream>
using namespace std;
//1)using conditional operator
    //input 2 no.
    //input 3 no.
    //input 4 no.
//2)using if else loop
//3)using logical operators
//4)using functions
//    i)using in build function of max()
//    ii) using function declaration and calling
//4.)i)
    int big(int,int);
    int x,y;
    cout<<"Enter no: ";
    cin>>x >>y;
    max=big(x,y);
    cout<<"Bigger no.: "<<max;
    getch()
    return 0;}
int big (int a, int b){
    if(a>b)
        return (a);
    else
        return (b);} 
//4.)ii) C++ program to demonstrate the use of std::max
#include<iostream>
#include<algorithm>
using namespace std;

// Defining the binary function
bool comp(int a, int b)
{
return (a < b);
}
int main()
{

// Finding the largest of all the numbers
cout << std::max({1, 2, 3, 4, 5, 10, -1, 7},comp) << "\n";

return 0;
}

//4.)ii) C++ program to demonstrate the use of std::max
#include<iostream>
#include<algorithm>
using namespace std;

// Defining the binary function
bool comp(int a, int b)
{
return (a < b);
}
int main()
{
int a = 7;
int b = 28;

cout << std::max(a,b,comp) << "\n";

// Returns the first one if both the numbers
// are same
cout << std::max(7,7,comp);

return 0;
}

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
