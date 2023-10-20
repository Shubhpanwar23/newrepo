#include<iostream>
using namespace std;

void sum(int a){
    int s;
    for(int i=1;i<=a;i++){
        s+=i;
    }
    cout<<"sum is equal to "<<s<<endl;
}

int main(){
    int a;
cout<<"Enter the number";
cin>>a;
sum(a);

    return 0;
}