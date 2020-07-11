#include<iostream>
using namespace std;
int main(){
int arr[100],i,j,k,m,n;
cin>>n;
cout<<"input array element"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=1;i<=n-1;i++){
    k=i;
    while(k>0 && arr[k]<arr[k-1]){
        m=arr[k];
        arr[k]=arr[k-1];
        arr[k-1]=m;
        k--;
    }
}
cout<<"print array element"<<endl;
for(int i=0;i<n;i++)
{
   cout<<arr[i]<<" ";
}
return 0;
}
