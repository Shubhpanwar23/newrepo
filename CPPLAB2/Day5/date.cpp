// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters 
// for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
// object of this class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;

class date{
    private: int dd,mm,yy;
    public:
    date(){
        dd=12;
        mm=11;
        yy=1999;
    } 
    date(int dd,int mm,int yy){
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
    }
    void acceptData(){
        int d,m,y;
        cout<<"Enter day month year"<<endl;
        cin>>d>>m>>y;
        dd=d;
        mm=m;
        yy=y;
    }
    void show(){
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
    int getDay(){
            return dd;
    }
    int getMonth(){
        return mm;
    }
    int getYear(){
        return yy;
    }
    void setDay(int d){
        dd=d;
    }
    void setMonth(int m){
        mm=m;
    }
    void setYear(int y){
        yy=y;
    }



};

int main(){
date d1,d3;
d1.show();
date d2(16,3,1867);
cout<<endl;
d2.show();
cout<<endl;
d3.acceptData();
d3.setMonth(5);
cout<<d3.getMonth()<<endl;
d3.show();

    return 0;
}