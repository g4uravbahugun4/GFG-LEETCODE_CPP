#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

string lexicographicallySmallest(string S, int k)
{
    
    int n = S.size();
    if ((n & (n - 1)) == 0)
        k = k / 2;
    else
        k = k * 2;

    if (k >= n)
        return "-1";
   
    stack<char> str;
    for (int i = 0; i < n; i++)
    {
        char ch = S[i];
        while (!str.empty() && k > 0 && str.top() > ch)
        {
            str.pop();
            k--;
        }
        str.push(ch);
    }
//  cout<<"befroe part 2 \n";
//     while (!str.empty())
//     {
        
//         cout <<str.top()<<"\n";
//         str.pop();
//     }

    
    while (!str.empty() && k > 0)
    {
        str.pop();
        k--;
    }
// cout<<"after part 2";
//     while (!str.empty())
//     {

//         cout << str.top() << "\n";
//         str.pop();
//     }

    string ans = " ";
    while (!str.empty())
    {
      
        ans +=str.top();
       
        str.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
 
}

int main(){
    string str;
    int k;

    cin>>str>>k;
    string answer=lexicographicallySmallest(str,k);
   cout<<answer;
   
}
