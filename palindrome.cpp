#include<iostream>
using namespace std;


void palin(int a){
int result=0,last;
int temp=a;
while(a!=0){
last=a%10;
result=result*10+last;
a=a/10;
}
cout<<result<<endl;
if(temp==result){
    cout<<"It is a palindrome"<<endl;
}
else{
    cout<<"Not a palindrome"<<endl;
}


}
int main(){
    int a; 
cout<<"Enter a number ";
cin>>a;
palin(a);

    return 0;
}