#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

int flag=0;
    void swap(int* xp, int* yp)
    {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    }
    
    void print(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"\n";
        }
    }
    
bool isFit(int arr[], int brr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
         if (arr[j] > arr[j + 1])
           swap(&arr[j], &arr[j + 1]);
        }
    }
          
         for (int i = 0; i < n - 1; i++)
         {
          for (int j = 0; j < n - i - 1; j++)
           {
            if (brr[j] > brr[j + 1])
             swap(&brr[j], &brr[j + 1]);
           }
         }

      
    
     for(int i=0;i<n;i++)
      {
        if(arr[i]>brr[i])
         flag=1;
          break;
      }
   
    if(flag==1)
         return false;
          else
        return true;
}
         
};

int main(){
    int i,j,z,t,n,flag;
    cin>>t;
    for(z=0;z<t;z++){
        flag=0;
        cin>>n;
        int arr[n+1];
        int brr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++)
        cin>>brr[j];

       Solution ob;
       ob.print(arr,n);
    //    if(ob.isFit(arr,brr,n)) cout<<"Yes\n";
    //    else
    //    cout<<"No\n"; 
    }
return 0;
}
