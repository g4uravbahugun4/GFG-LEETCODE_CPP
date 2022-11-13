#include<bits/stdc++.h>
#include <string>

using namespace std;

bool search(string s1, string coll[])
{
    int flag=0;
    
    for(int i=0;i<10;i++)
    {
        if(coll[i]==s1)
         {
            flag=1;
            break;
         }
        
    }
   
    if(flag==1) return true;
    else return false ;
}

int minLength(string s, int n) {
    int times=n;
    
    string collection[]={"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
    int length=n;
    
    if (n==1)
    return 1;
    else
    {
     for(int i=0;i<times-1;i++)
     {
      for(int j=0;j<s.size();)
        {
         if( search(s.substr(j,2),collection)==true )
          {
            length=length-2;
            s.erase(s.begin()+j , s.begin() +j+2);
            cout<<s<<"\n";
            
            break;
          }
         else j=j+1;
        }
        
     }
    }
    return length;
 }  





int main(){
    string str;
    getline(cin, str);   
      
    
    int minlength=minLength(str, str.size());
    cout<<minlength;
   }