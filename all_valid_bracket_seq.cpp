// vvimp :- make the choise diagram then code part is cakewalk

#include <bits/stdc++.h>
using namespace std;

void sol(string op, int o, int c)
{
    if (o == 0 && c == 0)
    {   
        // if no unused opening and closing brackets remaining then simply print ans 
        cout << op << "\n";
        return;
    }
    string op1 = op, op2 = op;

    if (o - 1 >= 0)
    {   
        // if open unued remaining u can always use it 
        op1.push_back('(');
        sol(op1, o - 1, c);
    }

    if (c - 1 >= 0 && o < c)
    {   
        // to use closed unused we have to ensure open unused is strictly less than close unused
        // that is open used greater than cloed used 
        op2.push_back(')');
        sol(op2, o, c - 1);
    }
    return;
}

int main()
{
    sol("", 2, 2);
    return 0;
}
