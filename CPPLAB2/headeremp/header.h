#include <iostream>
using namespace std;
namespace school{
class student{
private: int rollno,mrks1,mrks2,mrks3;
public:
     student(){
        rollno=123;
        mrks1=50;
        mrks2=50;
        mrks3=50;
     }
     student(int rollno,int mrks1,int mrks2,int mrks3){
        this->rollno=rollno;
        this->mrks1=mrks1;
        this->mrks2=mrks2;
        this->mrks3=mrks3;
     }
     void acceptdata(){
        int rollno,mrks1,mrks2,mrks3;
        cout<<"Enter rollno marks1 marks2 marks3"<<endl;
        cin>>rollno>>mrks1>>mrks2>>mrks3;
        this->rollno=rollno;
        this->mrks1=mrks1;
        this->mrks2=mrks2;
        this->mrks3=mrks3;
     }
    char grade(double p){
        if(p>=90)
        return 'A';
        else if (p>=70 && p<90)
        return 'B';
        else if(p>=50 && p<70)
        return 'C';
        else 
        return 'E';

    } 
    double percentage(){
        double percent;
        percent=(mrks1+mrks2+mrks3)/3;
        return percent;
    }
    void display(){
    int total=(mrks1+mrks2+mrks3);
    cout<<"The result for roll number "<<rollno<<endl;
    cout<<"Total= "<<total<<endl;
    double p=percentage();
    cout<<"Percentage is "<<p<<"%"<<endl;
    cout<<"Grade "<<grade(p)<<endl;


   }
};
}