// sorting using recursion 

#include <bits/stdc++.h>
using namespace std;

void ins(vector<int> &v, int val)
{

    if (v.size() == 0 || v[v.size() - 1] <= val)
    {
        v.push_back(val);
        return;
    }
    // when array is empty of last element of array is greater than element to be inserted then simply push_back the element
    int lst = v[v.size() - 1];
    v.pop_back();
    ins(v, val);
    // when value to be inserted is not suitable on last position then pop the last and find approprate position for val
    v.push_back(lst);
    // after inserted element gets its position insert back the popped element
}

void sort(vector<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }
    // if size=1 then array is already sorted
    int lst = v[v.size() - 1];
    // get the last element out , sort the remaining array then insert the last element at its pos
    v.pop_back();
    sort(v);
    ins(v, lst);
}
int main()
{
    vector<int> v = {2, 3, 1, 4, 10, 9, 7, 8, 6, 5};
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";
    return 0;
}
