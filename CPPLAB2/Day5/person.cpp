// 1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
// members. Also add the display function. Create Default and Parameterized constructors. Create the 
// object of this class in main method and invoke all the methods in that class. 

#include <iostream>
using namespace std;

class person{
    private:    int age;
                string name,city;
public:
        person(){
            name="Shubham";
            age=24;
            city="Gurgaon";
        }
        person(int age,string name,string city){
            this->age=age;
            this->name=name;
            this->city=city;
        }
        void acceptData(){
            int age;
            string name,city;
            cout<<"Enter name, age and city"<<endl;
            cin>>name>>age>>city;
            this->age=age;
            this->name=name;
            this->city=city;

        }
        int getage(){
            return age;
        }
        string getname(){
            return name;
        }
        string getcity(){
            return city;
        }
        void setage(int age){
            this->age=age;
        }
        void setname(string name){
            this->name=name;
        }
        void setcity(string city){
            this->city=city;
        }

        void show(){
            cout<<name<<" "<<age<<" "<<city<<endl;
        }


};

int main(){
    int ag;
    string nam,cit;
person p1,p2;
p1.show();
p2.acceptData();
p2.setname("Panwar");
p2.show();
    return 0;
}