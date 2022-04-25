// vvimp make the choise diagram then code part is cakewalk

#include <bits/stdc++.h>
using namespace std;
void sol(string op, int o, int z, int cnt)
{
    if (o + z == cnt)
    {
        cout << op << "\n";
        return;
    }
    string op1 = op, op2 = op;
    if (cnt - 1 >= 0)
    {
        op1.push_back('1');
        sol(op1, o + 1, z, cnt);
    }

    if (cnt - 1 >= 0)
    {
        if (cnt % 2 && (z + 1) <= cnt / 2)
        {
            op2.push_back('0');
            sol(op2, o, z + 1, cnt);
        }
        else if ((z + 1) < cnt / 2)
        {
            op2.push_back('0');
            sol(op2, o, z + 1, cnt);
        }
    }

    return;
}

int main()
{
    sol("", 0, 0, 3);
    cout << "\n";
    sol("", 0, 0, 4);
    return 0;
}
