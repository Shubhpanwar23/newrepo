#include<iostream>
using namespace std;

void sumeven(int n){
int sum=0;
for(int i=1;i<=n;i++){
    if(i%2==0){
        sum=sum+i;
    }
}
cout<<"Sum of even numbers is "<<sum<<endl;
}


void sumodd(int n){
    int sum=0;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        sum=sum+i;
    }
}
cout<<"Sum of odd numbers is "<<sum<<endl;
}

int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;
sumeven(n);
sumodd(n);
return 0;
}