#include<iostream>
using namespace std;

int main(){
char a;
cout<<"Enter a character"<<endl;
cin>>a;
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u' ){
    cout<<"Vowel";
}
else{
    cout<<"Consonant";
}

    return 0;
}