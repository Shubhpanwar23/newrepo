#include <iostream>
using namespace std;

int main(){
int n1,n2;
int k=0,temp,x=0;

int arr1[]={3,2,5,4,6,9};
int arr2[]={8,1,10,13,16};
n1=sizeof(arr1)/sizeof(int);
n2=sizeof(arr2)/sizeof(int);
int arr3[n1+n2];
for(int i=0;i<n1;i++){
    arr3[i]=arr1[i];
}
for(int j=n1;j<(n1+n2);j++){
    arr3[j]=arr2[k];
    k++;
}
for(int a=0;a<(n1+n2);a++){
    cout<<arr3[a]<<" ";
}
cout<<endl;
for(int n=0;n<(n1+n2);n++){
    for(int m=0;m<(n1+n2);m++){
    if(arr3[m]>arr3[m+1]){
        temp=arr3[m];
        arr3[m]=arr3[m+1];
        arr3[m+1]=temp;
    }
    
}
}
cout<<"After sorting"<<endl;
for(int c=0;c<(n1+n2);c++){
    cout<<arr3[c]<<" ";
}
    return 0;
}