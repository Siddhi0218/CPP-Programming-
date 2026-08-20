#include<iostream>
using namespace std;
class frac{
    int a,b,c,d;
    public:
    void setdata(){
        cout<<"Enter numerator of first fraction: ";
        cin>>a;
        cout<<"Enter denominator of first fraction: ";
        cin>>b;
        cout<<"Enter numerator of second fraction: ";
        cin>>c;
        cout<<"Enter denominator of second fraction: ";
        cin>>d;
    }
    void display(){
        int e = (a*d)+(b*c);
        int f = b*d;
        cout<<"Result: "<<e<<"/"<<f<<endl;
    }   
};
int main()
{
    frac f;
    f.setdata();
    f.display();
    return 0;
}