#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,result=0,last,p=0;
cout<<"Enter a number"<<endl;
cin>>n;
int m=n,temp=n;
while(n!=0){
    n=n/10;
    p++;
}
cout<<p<<endl;
while(m!=0){
    last=m%10;
    result+=pow(last,p);
    m=m/10;
}
cout<<result<<endl;
if(temp==result){
    cout<<"It is an armstrong number";
}
else{
    cout<<"Not an armstrong number";
}
    return 0;
}