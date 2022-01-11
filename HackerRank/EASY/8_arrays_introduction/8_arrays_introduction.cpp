#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
   
   int arr[100000];
   int i,j,n,temp;
   cin>>n;
   
   for(i=0;i<=n;i++)
   {
       cin>>arr[i];
   }
   
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
       cout<<arr[i]<<" ";
   }
   
  
   
    return 0;
}
