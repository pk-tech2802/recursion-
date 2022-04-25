
#include <bits/stdc++.h>
using namespace std;

vector<string> ins(vector<string> &v1, char ch)
{
    // takes ip as vector of string and char
    // places char at every possible position of every string
    vector<string> v2;
    for (auto x : v1)
    {
        for (int i = 0; i <= x.size(); i++)
        {
            string s1 = x.substr(0, i);
            string s2 = x.substr(i, x.size() - i);
            s1.push_back(ch);
            v2.push_back(s1 + s2);
        }
    }

    return v2;
}

vector<string> sol(string s)
{
    if (s.size() == 1)
    {
        // if size of ip =1 , only 1 permutaion exist taht is letter itself
        vector<string> v;
        v.push_back(s);
        return v;
    }

    char lst = s[s.size() - 1];
    s.pop_back();
    // pop and store last char
    vector<string> v2 = sol(s);
    // v2 is sol to the (n-1) sring
    vector<string> v3 = ins(v2, lst);
    // insert last character in the (n-1) permutations

    return v3;
    // return ans
}

int main()
{
    vector<string> v = sol("abcd");
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << "\n";
    }
    return 0;
}
