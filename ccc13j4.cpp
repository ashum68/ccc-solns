#include <bits/stdc++.h>
using namespace std;

vector<int> times;

int main(void) {
	int T, C;
	cin >> T >> C;
	for (int i=0; i<C; ++i) {
		int time;
		cin >> time;
		times.push_back(time);
	}
	sort(times.begin(), times.end());
	
	int completed=0, cnt=0;
	
	while (completed <= T) {
		completed += times.front();
		if (completed <= T) {
			times.erase(times.begin());
			cnt++;
		} else {
			break;
		}
		
	}
	cout << cnt;
}