#include <iostream>
using namespace std;

int main(){
int n,f=1;
cout<<"Enter a nunber"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    f=f*i;
}
cout<<"The factorial is "<<f<<endl;



    return 0;
}