#include <iostream>
using namespace std;

void show(int a1[],int a2[],int a,int b){
cout<<"Array 1"<<endl;
for(int i=0;i<a;i++)
cout<<a1[i]<<" ";
cout<<endl;
cout<<"Array 2"<<endl;
for(int j=0;j<b;j++)
cout<<a2[j]<<" ";

}

void arrcon(int a1[],int a2[],int a,int b){
    int a3[a+b];
    int i=0;
    for(;i<a;i++)
        a3[i]=a1[i];
    cout<<"----->"<<a;
    int index=i;
    for(int j=0;j<b;j++)
    {
        a3[index]=a2[j];
        index++;
    }

    cout<<"Array 3"<<endl;
    for(int k=0;k<a+b;k++)
    cout<<a3[k]<<" ";
    
}

int main(){
    int n1,n2;
    int arr1[20],arr2[20];
    cout<<"Enter the length of array 1"<<endl;
    cin>>n1;
    cout<<"Enter the length of array 2"<<endl;
    cin>>n2;
for(int i=0;i<n1;i++){
    cout<<"For Array 1 Enter element "<<i+1<<endl;
    cin>>arr1[i];
}
for(int j=0;j<n2;j++){
    cout<<"For Array 2 Enter element "<<j+1<<endl;
    cin>>arr2[j];
}
show(arr1,arr2,n1,n2);
arrcon(arr1,arr2,n1,n2);

    return 0;
}