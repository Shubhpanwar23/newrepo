#include <iostream>
#include "header.h"

using namespace std;

static int totcoun=0;
static int count=0;

Employee::Employee(){
    eId=1;
    name="Shubham";
    salary=50000;
}
Employee::Employee(string name,int salary){
    totcoun++;
    this->eId=count++;
    this->name=name;
    this->salary=salary;
}
void Employee::calsalary(){
    cout<<"The salary through emp is"<<salary<<endl;
}

Manager::Manager(){
    incen=300;
}
Manager::Manager(string name,int salary,int incen):Employee(eId,name,salary){
    salary+=incen;
    cout<<salary;
}