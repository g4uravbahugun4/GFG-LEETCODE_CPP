#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;


class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        for (int i = 0; i < strs.size()-1 ; i++)
        {
            string min = strs[0];
           if (strs[i].length() < min.length())
            {
                min = strs[i];
            }
        }

        for (int j = 0;  j< min.length(); j++)
        {
            if (min[j] == strs[




















                
            ])
        }
    }
};

 main(){
    
}
