#include <iostream>

using namespace std;

int main()
{
// with using 3rd variable
    int a,b,t;
    cin>>a>>b;
    t=a;
    a=b;
    b=t;
    cout<< a << b <<endl;
    return 0;
}
// without using 3rd variable
a=a+b;
b=a-b;
a=a-b;

