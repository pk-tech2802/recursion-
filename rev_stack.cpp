#include <bits/stdc++.h>
using namespace std;

void ins(stack<int> &st, int val)
{
    if (st.size() == 0)
    {   
        // we want t insert value at bottom , hence when stack becomes empty insert it 
        st.push(val);
        return;
    }

    int lst = st.top();
    st.pop();
    // pop the top store it , try to insert element in smaller stack
    ins(st, val);
    st.push(lst);
    // back push the popped top value 
    return;
}

void rev(stack<int> &st)
{
    if (st.size() == 1)
    {   
        // if size is 1 then stack inverse is stack itself 
        return;
    }

    int lst = st.top();
    st.pop();
    // store and pop the lst el 
    rev(st);
    // reverse remaining stack 
    ins(st, lst);
    // insert vaue at top to the bottom 

    return;
}
int main()
{
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(0);
    st.push(5);
    st.push(5);
    rev(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
