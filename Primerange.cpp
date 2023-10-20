#include<iostream>
using namespace std;


int prime(int n){
for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }
    else{
        return 1;
    }
}

}
int main(){
    int n;
cout<<"Enter the range"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
 if(prime(i)){
cout<<i<<endl;
 }
}

    return 0;
}