#include <iostream>
#include <vector>

using namespace std;

struct time {
	int begin, end;
};

bool intersection(time a, time b) {
	if (a.end > b.begin) {
		time c = a;
		a = b;
		b = c;
	}
	if (a.end > b.begin)
		return true;
	else
		return false;
}

int main() {
	int n{};
	vector<time> v;
	vector< vector<time> > auditorium;
	while (cin >> n) {
		for (int i = 0; i < n; ++i) {
			time c;
			cin >> c.begin >> c.end;
			v.push_back(c);
		}
		for (int i = 0; i < v.size(); ++i) {
			int found_auditorium = -1;
			for (int j = 0; j < (int)auditorium.size(); ++j) {
				bool intersec = false;
				for (int q = 0; q < auditorium[j].size(); ++q) {
					if (intersection(auditorium[j][q], v[i])) {
						intersec = true;
						break;
					}
				}
				if (intersec == false) {
					found_auditorium = j;
					break;
				}
			}
			if (found_auditorium == -1) {
				vector<time> new_auditorium(1, v[i]);
				auditorium.push_back(new_auditorium);
			}
			else
				auditorium[found_auditorium].push_back(v[i]);
		}
		cout << auditorium.size() << endl;
	}
}

