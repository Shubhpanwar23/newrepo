#include<iostream>
#include<cmath>
using namespace std;

int main(){
int m,n,r;
cout<<"Enter the number and the power"<<endl;
cin>>m>>n;
r=pow(m,n);
for(int i=1;i<n;i++){
    cout<<m<<"*";
}
cout<<m<<"="<<r<<endl;


    return 0;
}