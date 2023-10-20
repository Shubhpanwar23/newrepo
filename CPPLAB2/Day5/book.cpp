// 3. Create a class Book with data members as bname,id,author,price.
//  Write getters and setters for all the 
// data members. Also add the display function. 
// Create Default and Parameterized constructors. Create 
// the object of this class in main method and invoke all 
// the methods in that class.

#include <iostream>
using namespace std;

class book{
 private:   int bID,price;
    string bname,author;
public:
      book(){
        bID=12345;
        price=100;
        bname="Game of thrones";
        author="Babu rao";
      }
      book(int bID,int price,string bname,string author){
        this->bID=bID;
        this->price=price;
        this->bname=bname;
        this->author=author;
      }
      void acceptData(){
        int bid,pr;
        string bnam,auth;
        cout<<"Enter book name author id price"<<endl;
        cin>>bnam>>auth>>bid>>pr;
        bname=bnam;
        author=auth;
        bID=bid;
        price=pr;
      }
      void display(){
        cout<<bname<<" "<<author<<" "<<bID<<" "<<price<<endl;
      }
      string getbname(){
        return bname;
      }
     string getauthor(){
        return author;
      }
      int getprice(){
        return price;
      }
      int getbID(){
        return bID;
      }
      void setbID(int bi){
            bID=bi;
      }
      void setbname(string bn){
            bname=bn;
      }
      void setauthor(string au){
            author=au;
      }
      void setprice(int pr){
            price=pr;
      }


};

int main(){
book b1,b3;
b3.display();
book b2(123,1000,"ikigai","Raju");
b2.display();
b1.acceptData();
cout<<b1.getbID()<<endl;
b1.setprice(9000);
b1.display();
    return 0;
}