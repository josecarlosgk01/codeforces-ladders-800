#include <iostream>
using namespace std;
void run()
{
    int n;
    cin >> n;
    int c1 = n / 3;
    int c2 = c1;
    if (n % 3 == 1)
        c1 += 1;
    else if (n % 3 == 2)
        c2 += 1;
    cout << c1 << " " << c2 << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
        run();
    return 0;
}