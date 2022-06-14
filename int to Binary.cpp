#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int a;
    cin>>a;
    bitset<16> x(a);
    cout<<x;

    return 0;
}
