#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
        int length=s.length();
        int flag=0;
        for (int i = 0; i < length; i++)
        {
            if (s[i] != s[length - i - 1])
            {
                flag = 1;
                break;
            }
        }
    if (flag == 1)
        return false;
    else
        return true;
}

int lengthofpal(string s)
{

    return s.length();
}


int minChar(string str)
{
    int sub = 0;
   
    int len = str.length();
    string s1 = str;
    // Write your code here
    for (int i = 0; i < str.length(); i++)
    {
        s1 = s1.substr(0, len);
        // cout<<"substring at this point is:"<<s1<<"\n";
        // cout<<"ispallindrome bool value is "<<isPalindrome(s1)<<"\n";
        
        if (isPalindrome(s1)==0)
          {
              len = len - 1;
              continue;
          }  
        else
        {
            sub = lengthofpal(s1);
            break;
        }
    }
    // return str.length() - sub;
    return  sub;
}

    int main()
    {
        string str;
        cout << "enter string\n";
        cin >> str;
        cout << minChar(str);
    }