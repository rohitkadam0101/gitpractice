#include<iostream>
using namespace std;

// swap without three variables

int main(){
    int a = 5,b =6;
    cout<<"Before Swapping"<<endl;
    cout<<"a value is "<<a<<endl;
    cout<<"b value is "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After Swapping"<<endl;
    cout<<"a value is "<<a<<endl;
    cout<<"b value is "<<b<<endl;
    return 0;
}