#include<iostream>
#include<vector>
using namespace std;

int n = 0;
int counter = 1;
vector<int> t;

void out(int range) {
	for (int i = 0; i < range; i++) {
		cout << t[i] << '+';
	}
	cout << '\b' << endl;
};

void rec(int index, int sum, int last) {
	if (sum == n) {
		if (counter == 13672) out(index);
		counter++;
		return;
	}
	for (int i = last; i <= n - sum; i++)
	{
		t[index] = i;
		rec(index + 1, sum + i, i);
	}
};

int main() {
	cin >> n;
	terms = vector<int>(n);
	rec(0, 0, 1);
}
