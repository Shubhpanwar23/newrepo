#include <iostream>
using namespace std;


class Animal{
private:   int hands;
           int legs;
           string environ;
           
public: Animal(){
    hands=2;
    legs=2;
    environ="land";
    

}
Animal(int hands,int legs,string environ){
    this->hands=hands;
    this->legs=legs;
    this->environ=environ;
}
void display(){
cout<<"Hands: "<<hands<<" "<<"Legs: "<<legs<<" "<<"Environment= "<<environ<<endl;
}
void Animalproperties(){
    cout<<"-----this is animal properties----"<<endl;
}

};

class Mammal:public Animal{
  private:  int iq;

public: Mammal(){
    iq=50;
}
Mammal(int hands,int legs,string environ,int iq ):Animal(hands,legs,environ){
this->iq=iq;
}
void display(){
    Animal::display();
    cout<<"IQ= "<<iq<<endl;
}
void Mammalproperties(){
cout<<"-----Mammal properties----"<<endl;
}
};
class Aquatic:public Animal{
private:   int fins;

public:  Aquatic(){
    fins=2;
}
         Aquatic(int hands,int legs,string environ,int fins):Animal(hands,legs,environ){
        this->fins=fins;

         }

        void display(){
            Animal::display();
            cout<<"Fins= "<<fins<<endl;
        }
        void Aquaticproperties(){
            cout<<"-----this is aquatic prop----"<<endl;
        }

};



int main(){
Mammal m1(2,4,"land",60);
m1.display();
Aquatic a1;
a1.display();



    return 0;
}