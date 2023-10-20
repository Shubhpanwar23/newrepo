#include <iostream>
using namespace std;

int main(){
int a,b,temp;
cout<<"Enter the number to be swapped a and b"<<endl;
cin>>a>>b;
temp=a;
a=b;
b=temp;
cout<<"After swapping a="<<a<<" and b="<<b<<endl;
    return 0;
}