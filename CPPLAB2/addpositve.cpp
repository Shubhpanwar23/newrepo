#include <iostream>
using namespace std;

int main(){
int n,sum=0;

while(n>0){
cout<<"Enter a number"<<endl;
cin>>n;
if(n>0)
sum+=n;
}
cout<<"The sum is "<<sum<<endl;
    return 0;
}