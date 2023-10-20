#include <iostream>
using namespace std;

int main(){
float a,b;
int choice;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;

while(choice!=5){
cout<<"1.Addition....2.Sub....3.multi....4.divide....5.Exit";
cin>>choice;

switch(choice){
case 1 : cout<<"The sum is "<<a+b<<endl;
         break;
case 2 : cout<<"The sub is "<<a-b<<endl;
         break;
case 3 : cout<<"The multi is "<<a*b<<endl;
         break;
case 4 : cout<<"The div is "<<a/b<<endl;
        break;
case 5 : cout<<"You chose exit"<<endl;
        break;
default: cout<<"Invalid choice";
        break;


}


}

    return 0;
}