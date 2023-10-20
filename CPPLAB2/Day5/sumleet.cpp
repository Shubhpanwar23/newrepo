#include <iostream>
using namespace std;

int main(){
int arr[10];
int target,a,b;
cout<<"Enter the target"<<endl;
cin>>target;

for(int i=0;i<10;i++){
    cout<<"Enter element "<<i+1<<" ";
    cin>>arr[i];
}
for(int i=0;i<10;i++)
{
    for(int j=i+1;j<10;j++)
    {
        if (arr[i]+arr[j]==target)
        {
            cout<<"["<<i+1<<","<<j+1<<"]"<<endl;
        }
    }
}

    return 0;
}
