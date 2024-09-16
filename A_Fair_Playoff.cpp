#include <iostream>
#include <algorithm>
using namespace std;
void run()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int w1 = max(s1, s2);
    int w2 = max(s3, s4);
    bool flag = min(s1, s2) > w2 || min(s3, s4) > w1;
    cout << (flag ? "NO" : "YES") << endl;
}
int main()
{
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i)
        run();
    return 0;
}