// Recursion really works like magic 

#include <bits/stdc++.h>
using namespace std;
int s = 1, h = 2, d = 3;
void sol(int n, int s, int d, int h)
{
    if (n == 1)
    {   
        // if only one disc remaining at source then simply move it to destination
        cout << "moving plate " << n << " from " << s << " to " << d << "\n";
        return;
    }

    sol(n - 1, s, h, d);
    // to solve for n first solvefor n-1 by moving n-1 to h through d
    cout << "moving plate " << n << " from " << s << " to " << d << "\n";
    // now all the (n-1) plates are moved to h move last one to d 
    sol(n - 1, h, d, s);
    // move remaining n-1 plates on the h to d through s
    return;
}

int main()
{
    sol(3, 1, 3, 2);
    return 0;
}
