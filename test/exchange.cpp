#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    int j = n - 1;
    int res = 0;
    vector<int> mas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    sort(mas.begin(), mas.end());
    while (s > 0)
    {
        if (s >= mas[j])
        {
            res++;
            s = s - mas[j];
        }
        else
            j--;
    }
    cout << res << endl;
    system("pause");
    return 0;
}
