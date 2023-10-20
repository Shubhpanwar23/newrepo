#include <iostream>
using namespace std;
 int main(){
int bs;
double tax,total;
cout<<"Enter the annual basic pay"<<endl;
cin>>bs;
if(bs<150000){
    cout<<"Tax 0%"<<endl;
    tax=0;
    cout<<"TAX"<<tax<<endl;
}
else if(bs>=150000 && bs<=300000){
    cout<<"Tax 20%"<<endl;
    tax=0.2*bs;
    cout<<"TAX"<<tax<<endl;
}
else{
    cout<<"Tax 30%"<<endl;
    tax=0.3*bs;
    cout<<"TAX"<<tax<<endl;
}
total=bs-tax;
cout<<"The total amount is "<<total<<endl;


    return 0;
 }