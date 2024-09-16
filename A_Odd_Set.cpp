#include <iostream>
using namespace std;
void run()
{
    int n;
    cin >> n;
    int odd = 0, even = 0;
    for (int i = 0; i < 2 * n; ++i)
    {
        int x;
        cin >> x;
        if (x & 1)
            ++odd;
        else
            ++even;
    }
    cout << (odd == even ? "Yes" : "No") << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
        run();
    return 0;
}