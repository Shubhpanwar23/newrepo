#include<iostream>
using namespace std;
template<class T>
void Swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=80,b=90;
    cout<<a<<" - "<<b<<endl;
    Swap(a,b);
    cout<<a<<" - "<<b<<endl;
    char c='C',d='B';
    cout<<c<<" - "<<d<<endl;
    Swap(c,d);
    cout<<c<<" - "<<d<<endl;

}
