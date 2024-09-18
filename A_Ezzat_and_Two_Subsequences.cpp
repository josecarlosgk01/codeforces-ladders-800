#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
void run()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double avg1 = v[n - 1] / 1.0;
    double sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        sum += v[i];
    }
    --n;
    double avg2 = sum / (double)n;
    cout << fixed << setprecision(9) << avg1 + avg2 << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
        run();
}