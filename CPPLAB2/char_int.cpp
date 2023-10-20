#include <iostream>
using namespace std;

int main(){
    int n;
    char c;
cout<<"Enter number and character"<<endl;
cin>>n>>c;
for(int i=int(c);i<=(int(c)+n);i++){
    cout<<(char)i<<endl;
}
  return 0;
}
