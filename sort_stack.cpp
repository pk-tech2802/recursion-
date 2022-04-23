#include <bits/stdc++.h>
using namespace std;

void ins(stack<int> &st, int val)
{

    if (st.size() == 0 || st.top() >= val)
    {
        st.push(val);
        return;
    }
    int lst = st.top();
    st.pop();
    ins(st, val);
    st.push(lst);
}

void sort(stack<int> &st)
{
    if (st.size() == 1)
    {
        return;
    }
    int lst = st.top();
    st.pop();
    sort(st);
    ins(st, lst);
}
int main()
{
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(0);
    st.push(5);
    sort(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
