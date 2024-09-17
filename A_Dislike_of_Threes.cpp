#include <iostream>
#include <vector>
using namespace std;
void run()
{
    int k;
    cin >> k;
    vector<int> v;
    int num = 1;
    while (v.size() < k)
    {
        if (num % 3 && num % 10 != 3)
            v.push_back(num);
        ++num;
    }
    cout << (v.empty() ? num : v[k - 1]) << endl;
}
int main()
{
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i)
        run();
}