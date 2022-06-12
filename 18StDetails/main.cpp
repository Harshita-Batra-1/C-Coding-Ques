#include <iostream>

using namespace std;

int main()
{
    char name[15]="Anika gupta "; //giving 15 is imp otherwise it's error-invalid conv from const char to char
    int age=15;
    char sex='F';  //"F" gives error
    int roll = 23;
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<sex<<endl;
    cout<<roll<<endl;
    return 0;

}
