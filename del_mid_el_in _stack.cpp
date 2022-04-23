#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int k)
{
    if (k == 1)
    {   
        // k==1 means element to be deleted is on the top 
        st.pop();
        return;
    }
    int lst = st.top();
    // store the last ele temperorily 
    st.pop();
    solve(st, k - 1);
    // call solve fun with reducing value of k 
    st.push(lst);
    // after execution of function bak push the initial value popped 
}
int main()
{
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(0);
    st.push(5);
    st.push(5);
    solve(st, st.size() / 2 + 1);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
