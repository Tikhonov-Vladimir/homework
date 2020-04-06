#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n < pow(10, 5)) {
		vector <int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		for (auto value : a)
			cout << value << " ";
		return 0;
	}
	else
		cout << "error";
}
