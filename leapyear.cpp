#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter the year to check leap year or not :\n";
    cin>> a;

    if(a%4){ 
        cout<<a<<"is not leap year";
    } else{
        cout<<a<<"is leap year";
    }
}