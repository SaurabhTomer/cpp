#include <bits/stdc++.h>
using namespace std;
int find(vector<int> a)
{

    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {                     // this will xor all elements of array
        ans = ans ^ a[i]; // xor of 0 with arr[i] will be arr[i]
    }
    return ans;
}
int main()
{
    vector<int> a = {4, 1, 2, 1, 2};

    int sol = find(a);
    cout << "Missing element is :" << sol;
}