#include <bits/stdc++.h>
using namespace std;

vector<int> downwardDigonal(int N, vector<vector<int>> A)
{

    vector<int> ans;

    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = i;

        while (start < n and end >= 0)
        {
            ans.push_back(A[start][end]);
            start++;
            end--;
        }
    }

    for (int i = 1; i < n; i++)
    {
        int start = i;
        int end = n - 1;

        while (start < n and end >= 0)
        {
            ans.push_back(A[start][end]);
            start++;
            end--;
        }
    }

    return ans;
}