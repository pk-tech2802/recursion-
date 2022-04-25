// ip op method 

#include <bits/stdc++.h>
using namespace std;
void sol(string ip, string op)
{
    if (ip.size() == 0)
    {
        cout << op << "\n";
        return;
    }

    char fst1 = ip[0];
    ip.erase(ip.begin() + 0);
    // there is diff between 'a' and 'A' of 32 
    
    char fst2 = fst1 - 32;
    string op1 = op, op2 = op;
    op1.push_back(fst1);
    op2.push_back(fst2);
    sol(ip, op1);
    sol(ip, op2);
}

int main()
{
    string ip = "abc", op = "";
    sol(ip, op);
    return 0;
}
