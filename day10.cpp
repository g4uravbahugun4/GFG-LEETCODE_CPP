#include <bits/stdc++.h>
using namespace std;
bool validParanthesis(string str){
    stack <char> stk;
    
    pair<char, char> a;
    pair<char, char> b;
    pair<char, char> c;
   
    a.first='(';
    a.second = ')';
    
    b.first = '{';
    b.second = '}';
    
    c.first = '[';
    c.second = ']';

    for (int i = 0; i < str.length(); i++)
    {
     if (str[i] == '(' || str[i] == '{' || str[i] == '[' )
        stk.push(str[i]);
        else
        { 
          char ch=str[i];
          switch (ch)
          { 
            case ')':
                if(stk.top()==a.first){
                    stk.pop();
                }
                break;
                
            case '}':
                if (stk.top() == b.first)
                {
                    stk.pop();
                }
                break;

            case ']':
                if (stk.top() == c.first)
                {
                    stk.pop();
                }
                break;
            }
        }
    }
    return true;
}

int main()
{
    string s=")";
    bool answer=validParanthesis(s);
    cout<<answer;
    return 0;
   
}