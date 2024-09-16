#include <iostream>
using namespace std;
void run()
{
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << (sum < n ? 1 : sum - n) << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
        run();
}