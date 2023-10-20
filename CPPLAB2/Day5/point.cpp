#include <iostream>
using namespace std;

class point{
private:  int x,y;
public: 
        point(){
            x=1;
            y=2;
        }
        point(int a,int b){
            x=a;
            y=b;
        }
        void acceptData(){
            int m,n;
            cout<<"Enter the value of x and y"<<endl;
            cin>>m>>n;
            x=m;
            y=n;
        }
        void show(){
            cout<<x<<"   "<<y<<endl;
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
point p1,p2;
p2.show();
point p3(3,45);
p3.show();
p1.acceptData();
cout<<p1.getx()<<endl;
p1.setx(12);
p1.show();

    return 0;
}