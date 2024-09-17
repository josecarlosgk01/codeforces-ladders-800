#include <iostream>
#include <vector>
using namespace std;
void run()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] != s[i + 1])
            v.push_back(s[i]);
    }
    v.push_back(s[n - 1]);
    vector<int> visited(126, 0);
    bool flag = true;
    for (int i = 0; i < v.size(); ++i)
    {
        char curr = v[i];
        if (visited[int(curr)])
            flag = false;
        else
            visited[int(curr)] = 1;
    }
    cout << (!flag ? "NO" : "YES") << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
        run();
    return 0;
}