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
    int ch,age;
    string city,name;
person p1;
cout<<"1.Enter data|2.dispay|3.Edit city|4.Edit age|5.Edit name|6.Get Name|7.EXIT"<<endl;
do{
cout<<"Enter your choice"<<endl;
cin>>ch;
switch(ch){
case 1:p1.acceptData();
        break;
case 2:p1.show();
        break;
case 3:cout<<"Enter the city"<<endl;
        cin>>city;
        p1.setcity(city);
        cout<<"City updated successfully"<<endl;
        break;
case 4:cout<<"Enter the age"<<endl;
        cin>>age;
        p1.setage(age);
        cout<<"Age updated successfully"<<endl;
        break;
case 5:cout<<"Enter name"<<endl;
        cin>>name;
        p1.setname(name);
        cout<<"Name updated successfully"<<endl;
        break;
case 6: cout<<p1.getname()<<endl;
        break;
case 7: cout<<"You chose to exit"<<endl;
        break;
default:cout<<"Invalid input";
        break;

}
}while(ch!=7);


    return 0;
}