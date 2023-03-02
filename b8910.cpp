#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int n = 9379;
    int m;
    cin >> m;
    int c = 1;
    const int e = 17;
    for (int i=1; i<=e; i++)
    {
        c *= m;
        c = c % n;
    }
    cout << c;
    return 0;
}
