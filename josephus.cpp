
#include <bits/stdc++.h>
using namespace std;

void sol(vector<int> v, int ind, int k)
{
    if (v.size() == 1)
    {
        cout << "last remaining : " << v[0] << "\n";
        return;
    }

    ind = (ind + k) % v.size();
    v.erase(v.begin() + ind);

    sol(v, ind, k);
}

int main()
{
    vector<int> v;
    for (int i = 1; i <= 40; i++)
    {
        v.push_back(i);
    }
    int k = 6, ind = 0;
    sol(v, ind, k);

    return 0;
}
