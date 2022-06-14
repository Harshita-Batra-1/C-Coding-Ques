#include <iostream>

using namespace std;

int main()
{
// automatic type conversion
    int i;
    float f;
    double d;
    cout<<"Enter i value in integer: ";
    cin>>i;
    cout<<"Enter f value in float: ";
    cin>>f;
    d=i*f;
    cout<<"Value of d= "<<d; // andr lena hota toh cin krte bahr dikhani valuee toh sath me de diya
//Type casting
   int a =100, b = 20;
   float c;
   c = a/b;  //result in integer
   c = (float) a/b;  // result in float

//converting int to char - resulting in ascii value
    int a;
    char  c;
    a=100;
    c=a;
    cout << c << endl;
    int a;
    char c;
    a=19920;
    c=a;
    cout<< c <<endl;

//converting char to int - resulting in ascii value
    int a;
    char c;
    c='y';
    a=c;
    cout<< a <<endl;

    int a;
    char c;
    c='0';
    a=c;
    cout<< a <<endl;
// try adding int and char also - result ascii value adds up
    int i  = 10;
    char c = 'a';
    int o = i + c;
    cout<< o << endl;

}