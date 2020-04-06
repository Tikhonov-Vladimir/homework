#include <iostream>
#include <vector>

using namespace std;

const struct st {
	string name{};
	double average{};
};



vector<st> wsort_by_average(vector<st> v) {
	if (v.size() > 1) {
		while (true) {
			bool mist = false;
			for (int i = 0; i < v.size() - 1; ++i) {
				if (v[i].average < v[i + 1].average) {
					mist = true;
					st new_s = v[i];
					v[i] = v[i + 1];
					v[i + 1] = new_s;
				}
			}
			if (mist == false)
				break;
		}
	}
	return v;
}

vector<st> filling() {
	vector<st> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		st new_s{};
		int sum{};
		cin >> new_s.name;
		{
			string last_name{};
			cin >> last_name;
			new_s.name = new_s.name + ' ' + last_name;
		}
		for (int j = 0; j < 3; ++j) {
			int m{};
			cin >> m;
			sum += m;
		}
		new_s.average = double(sum) / 3;
		v.push_back(new_s);
	}
	return v;
}

int main() {
	vector<st> v = filling();
	v = wsort_by_average(v);
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].name << ' ' << endl;
}
