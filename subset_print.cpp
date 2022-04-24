// Recursion really works like magic
// examplr of input output method

#include <bits/stdc++.h>
using namespace std;
int s = 1, h = 2, d = 3;
void sol(string ip, string op)
{
    if (ip == "")
    {
        cout << op << "\n";
        // if ip is empty all possibilities of op are done simply print it
        return;
    }

    char lst = ip[ip.size() - 1];
    string dm;
    dm.push_back(lst);
    ip.pop_back();
    // pop out the last char decision is either inclde this char in next stage op or not
    // in op since we are making decsion about char we have to remove it from ip
    sol(ip, op);
    sol(ip, op + dm);
}

int main()
{
    string s1 = "abcd", s2 = "";
    sol(s1, s2);
    return 0;
}
