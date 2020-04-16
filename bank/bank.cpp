#include <iostream>
using namespace std;

int main(void) {
    int a[100001] = { 0 }, i, j, b[6] = { 10, 20, 50, 100, 200, 500 }, n;
    for (i = 0; i < 6; i++)
        a[b[i]] = 1;
    for (i = 10; i < 100001; i += 10)
    {
        for (j = 0; j < 6; j++)
            if (i + b[j] < 100001 && a[i + b[j]] == 0)
                a[i + b[j]] = a[i] + 1;
    }
    cin >> n;
    if (a[n] == 0)
        cout << -1 << endl;
    else
        cout << a[n] << endl;
    return 0;
}
