#include <iostream>
#include <typeinfo>
using namespace std;

class Fruit{
public: virtual void taste(){
    cout<<"No specfic taste"<<endl;
}
};
class Apple:public Fruit{
public: void taste(){
    cout<<"Apple taste is sweet"<<endl;
}
void shake(){
    cout<<"Apple shake"<<endl;
}
};
class Orange:public Fruit{
public: void taste(){
    cout<<"Orange is sour"<<endl;
}
void juice(){
    cout<<"Orange juice"<<endl;
}
};
class Mango:public Fruit{
public: void taste(){
    cout<<"Mango is sweet"<<endl;
}
void pulp(){
    cout<<"Mango pulp"<<endl;
}

};

int main(){
int ch,index=0;
Orange *o1;
Mango *m1;
Apple *a1;

Fruit *basket[10];

do{
cout<<"1.Enter apple | 2.Enter Mango | 3.Enter Orange | 4.Display | 5.View specific function | 6.Exit"<<endl;

cout<<"Enter your choice"<<endl;
cin>>ch;
switch(ch){
case 1:  a1=new Apple();
         basket[index]=a1;
        index++;
        cout<<"Apple added"<<endl;
        break;
case 2:  m1= new Mango();
        basket[index]=m1;
        index++;
        cout<<"Mango added"<<endl;
        break;        
case 3: o1=new Orange();
        basket[index]=o1;
        index++;
        cout<<"Orange added"<<endl;
        break;

case 4: for(int i=0;i<index;i++){
        if(typeid(*basket[i])==typeid(Orange)){
        cout<<"At index "<<i<<"  "<<"orange"<<endl;  
        }
        else if(typeid(*basket[i])==typeid(Apple)){
            cout<<"At index "<<i<<"  "<<"Apple"<<endl;
        }
        else {
            // if(typeid(*basket[i])==typeid(Mango))
            cout<<"At index "<<i<<"  "<<"Mango"<<endl;
        }
}
        break;
case 5: for(int j=0;j<index;j++){
         if(typeid(*basket[j])==typeid(Orange)){
            Orange *oObj=dynamic_cast<Orange *>(basket[j]);
            oObj->juice();
         }
         else if(typeid(*basket[j])==typeid(Apple)){
            Apple *aObj=dynamic_cast<Apple *>(basket[j]);
            aObj->shake();
         }
         else if(typeid(*basket[j])==typeid(Mango)){
            Mango *mObj=dynamic_cast<Mango *>(basket[j]);
            mObj->pulp();
         }
}
         cout<<"Number of fruits "<<index<<endl;
        
        break;
case 6: cout<<"You chose to exit";
        break;

default: cout<<"invalid input"<<endl;
            break;  
}                 

}while(ch!=6);
return 0;
}