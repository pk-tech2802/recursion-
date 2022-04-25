// Recursion really works like magic
// example of input output method

#include <bits/stdc++.h>
using namespace std;
void sol(string ip, string op)
{
    if (ip == "")
    {
        cout << op << "\n";
        // if ip is empty all possibilities of op are done simply print it
        return;
    }

    char lst = ip[ip.size() - 1];
    string op1=op,op2=op;
    op2.push_back(lst);
    ip.pop_back();
    // pop out the last char decision is either inclde this char in next stage op or not
    // in op since we are making decsion about char we have to remove it from ip
    sol(ip, op1);
    sol(ip, op2);
}

int main()
{
    string s1 = "abcd", s2 = "";
    sol(s1, s2);
    return 0;
}
