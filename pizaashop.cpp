#include <iostream>
using namespace std;



int main(){
    int choice,sum=0;
    cout<<"1.Pizza....200"<<endl<<"2.Pasta....100"<<endl<<"3.Coke....50"<<endl<<"4.Exit"<<endl;
    
    while(choice!=4){
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
        case 1 : cout<<"You chose pizza";
                sum=sum+200;
                break;
        case 2 : cout<<"You chose pasta";
                sum=sum+100;
                break;
        case 3 : cout<<"You chose Coke";
                sum=sum+50;
                break;
        case 4 :cout<<"You chose exit";
                 break;
        default : cout<<"Invalid choice";
                break;
        }
    }

    cout<<"Total amount is "<<sum<<endl;
    return 0;
}