#include <bits/stdc++.h>
using namespace std;
void res(int a, int b)
{
    int luu1 = a, luu2 = b;
    int x_i = 1, y_i = 0;
    int x_i1 = 0, y_i1 = 1;
    int q, r, x_i2, y_i2;
    while(b != 0)
    {
        q = a / b;
        r = a % b;
        a = b;
        b = r;
        x_i2 = x_i - q * x_i1;
        y_i2 = y_i - q * y_i1;
        x_i = x_i1; y_i = y_i1;
        x_i1 = x_i2; y_i1 = y_i2;
    }
    //if (x_i < 0) x_i = x_i + luu2;
    //if (y_i < 0) y_i = y_i + luu1;
    cout << x_i << "*" << luu1 << " va " << y_i << "*" << luu2;
}
int main ()
{
    /*int n; cin >> n;
    bool a[n + 1];
    for (int i = 0; i < n + 1; i++) a[i] = true;
    for (int i = 2; i < n + 1; i++)
    {
        if (a[i])
        {
            int temp = i;
            int j = i + temp;
            while(j < n + 1)
            {
                a[j] = false;
                j += temp;
            }
        }
    }
    int res = 0;
    for (int i = 2; i < n + 1; i++)
    {
        if(a[i])
        {
            cout << i << " ";
            res++;
        }
    } cout << endl << res;*/
    /*vector<int> res(2) = {0, 0};
    int a, b;
    cin >> a >> b;*/
    int a, b; cin >> a >> b;
    res(a, b);
    return 0;

}
