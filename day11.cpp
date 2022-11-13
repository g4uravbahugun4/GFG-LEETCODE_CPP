#include <bits/stdc++.h>
using namespace std;
vector<int> SieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);
    vector<int> primeNo;

    for (int p = 2; p * p <= n; p++)
        if (prime[p] == true)
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;

    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
            primeNo.push_back(p);
    }
    return primeNo;
}

string isSumOfTwo(int N)
{
    // code here
    int flag = 0;
    string yes = "Yes";
    string no = "No";
    vector<int> prime = SieveOfEratosthenes(N);
    for (int i = 0; int j = prime.size() - 1; i < j)
    {
        int sum = prime[i] + prime[j];
        if (sum == N)
        {
            flag = 1;
            break;
        }
        if (sum < N)
            i++;
        j++;
    }
    if (flag == 0)
        return no;
    return yes;
}

int main(){
string str=isSumOfTwo(17);
cout<<str;
return 0;
}