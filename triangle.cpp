#include <iostream>
using namespace std;

int main(){
int s1,s2,s3,sum;
cout<<"Enter the sidesof the triangles"<<endl;
cin>>s1>>s2>>s3;
if((s1+s2)>s3 && (s1+s3)>s2 && (s2+s3)>s1 ){
    cout<<"Valid";
}
else{
    cout<<"Not valid";
}



    return 0;
}