#include <bits/stdc++.h>
using namespace std;

int sol(int n, int k)
{
    if (n == 1 && k == 1)
    {
        return 0;
    }

    int z = sol(n - 1, ceil(k * 1.0 / 2));

    if (z == 0)
    {
        if (k % 2)
        {
            return 0;
        }
        return 1;
    }
    else
    {
        if (k % 2)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int ans = sol(4, 5);
    cout << "ans : " << ans;
    return 0;
}
