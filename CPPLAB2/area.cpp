#include <iostream>
using namespace std;

int main(){
int choice;
while(choice!=4){
    cout<<"1.Area of circle...2.Area of rectangle...3.Area of triangle"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>choice;
    switch(choice){
    case 1: int r;
            float a;
            cout<<"Enter the radius of circle";
            cin>>r;
            a=3.14*r*r;
            cout<<"The area of circle= "<<a<<endl;
            break;
    case 2: int x,y,z;
            cout<<"Enter the length and breadth";
            cin>>x>>y;
            z=x*y;
            cout<<"The area of rectancle is= "<<z<<endl;
            break;
    case 3: int b,h;
            float ar;
            cout<<"Enter the base and height";
            cin>>b>>h;
            ar=0.5*b*h;
            cout<<"The area of triangle= "<<ar<<endl;
            break;
    case 4: cout<<"You chose to exit";
            break;
    default: cout<<"Invalid input";
            break;

}
}


    return 0;
}