#include <iostream>
using namespace std;
class rectangle{
    private:
    int len,br;
    public:
    void setdata(int l, int b){
        len = l;
        br = b;
    }
    void display(){
        cout<<"Length: "<<len<<endl;
        cout<<"Breadth: "<<br<<endl;
    }
    void area_peri(){
        int a,p;
        a=len*br;
        p=2*(len+br);
        cout<<"Area: "<< a <<endl;
        cout<<"Perimeter: "<< p <<endl;
    }
    void getdata(){
        cout<<"Enter length and breadth: "<<endl;
        cin>>len>>br;
    }
};
int main(){
    rectangle r1,r2,r3; 
    r1.getdata();
    r1.display();
    r1.area_peri();
    return 0;
}
