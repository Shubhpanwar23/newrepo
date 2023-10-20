//  Create a class ComplexNumber with data members real, imaginary.
//  Create Default and Parameterized constructors.
//   Write getters and setters for all the data members.
//    Also add the display function. Create the object of this 
//    class in main method and invoke all the methods in that class.


#include <iostream>
using namespace std;

class complex{
private: int x,y;
public:
        complex(){
            x=2;
            y=3;
        }
        complex(int a,int b){
            x=a;
            y=b;
        }
        void acceptData(){
            int a,b;
            cout<<"Enter values of x and y";
            cin>>a>>b;
            x=a;
            y=b;
        }
        void show(){
            cout<<x<<"+"<<y<<"i"<<endl;
        }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
        void setx(int a){
            x=a;
        }
        void sety(int b){
            y=b;
        }


};


int main(){
complex c1,c2;
c1.show();
complex c3(23,34);
c3.show();
c2.acceptData();
c2.setx(56);
c2.getx();
c2.show();

    return 0;
}