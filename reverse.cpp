#include <iostream>
using namespace std;

int rev(int n){
    int result=0,last;
while(n!=0){
last=n%10;
result=result*10+last;
n=n/10;
}
return result;
}

int main(){
    int n;
cout<<"enter a number"<<endl;
cin>>n;
cout<<rev(n)<<endl;
    return 0;
}