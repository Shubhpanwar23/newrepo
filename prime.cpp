#include <iostream>
using namespace std;

void prime(int a){
    bool flag=true;
for(int i=2;i<a;i++){
    if(a%i==0){
        flag=false;
        break;
    }
    else{
        flag=true;
    }
}
if(flag==true){
    cout<<"Prime number";
}
else{
    cout<<"Not a prime number";
}
}

int main(){
    int a;
cout<<"Enter a number"<<endl;
cin>>a;
prime(a);


    return 0;
}