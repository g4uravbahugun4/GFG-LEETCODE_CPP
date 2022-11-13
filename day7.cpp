#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
}

int largerstElem(int arr[],int n){
    int highest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>highest) highest=arr[i];
    }
    return highest;
}

int deleteElem(int arr[],int n,int toDelete){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==toDelete)
        break;
    }
    if(i<n){
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    
    }
    return 0;    
}

bool findElem(int arr[],int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==n)
        {
        flag=1;
        break;
      }
     
}
if (flag == 1)
    return true;
return false;
}

int maximizeSum(int a[], int n){  
    int j=n;
    int m=7;
    int sum=0;
    while(m>0 ){
   int largest=largerstElem(a,n);
   int oneLess=largest-1;
   bool oneLessAvailable=findElem(a,oneLess);
//    cout<<"\n"<<oneLessAvailable;
   
   if(oneLessAvailable){
    deleteElem(a,n,largest);
    deleteElem(a,n,oneLess);
    
    sum=sum+largest;
    j=j-2;
    m=m-2;
    printArray(a,j);
   }
   else
   {
    deleteElem(a,n,largest);
    sum=sum+largest;
    j--;
    m--;
    printArray(a, j);
   }
    } 

    return sum;
}


int main(){
    int arr[]={2,6,3,2,10,10,6};
    int result=maximizeSum(arr,7);
    cout<<result;
}