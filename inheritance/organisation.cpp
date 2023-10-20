#include <iostream>
using namespace std;

class Emp{
 protected: int id;
          string name;
          int  deptId;
          double basicSalary;

public: Emp(){
    id=123;
    name="Shubham";
    deptId=345;
    basicSalary=10000;
    }
    Emp(int id,string name,int deptId,double basicSalary){
        this->id=id;
        this->name=name;
        this->deptId=deptId;
        this->basicSalary=basicSalary;
    }
    double computeNetSalary(){
        return 0;
    }
};

class Mgr:public Emp{
private: double perfBonus;

public: Mgr(){
    perfBonus=1;
        }
        Mgr(int id,string name,int deptId,double basicSalary,double perfBonus):Emp(id,name,deptId,basicSalary){
            this->perfBonus=perfBonus;
        }
        double computeNetSalary(){
            return basicSalary+perfBonus;
        }

};
class Worker:public Emp{
private: int hoursWorked;
        int hourlyRate;
 public: Worker(){
          hourlyRate=100;
          hoursWorked=2;
          }
          Worker(int id,string name,int deptId,double basicSalary,int hoursWorked,int hourlyRate):Emp(id,name,deptId,basicSalary){
            this->hourlyRate=hourlyRate;
            this->hoursWorked=hoursWorked;
          }     
          double computeNetSalary(){
            return basicSalary+(hoursWorked*hourlyRate);
          }

};

int main(){
Emp e1(12,"Shubham",123,1000);
cout<<e1.computeNetSalary()<<endl;
Mgr m1(123,"Raj",56,5000,200);
cout<<m1.computeNetSalary()<<endl;
Worker w1(123,"Mike",34,5400,3,500);
cout<<w1.computeNetSalary()<<endl;
cout<<"------------------"<<endl; 




    return 0;
}