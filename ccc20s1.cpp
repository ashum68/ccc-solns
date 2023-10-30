#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	
	vector< pair<double, double> > info;
	
	for (int i=0; i<n; i++) {
		double time, pos;
		cin >> time >> pos;
		info.push_back(make_pair(time, pos));
	}
	
	sort(info.begin(), info.end());
	
	double t1 = info[0].first;
	double p1 = info[0].second;
	
	double best = 0;
	
	for (int i=1, n=info.size(); i<n; i++) {
		double t2 = info[i].first;
		double p2 = info[i].second;
		double delta_t = t2 - t1;
		double delta_p = abs(p2 - p1);
		double speed = delta_p / delta_t;
		t1 = t2;
		p1 = p2;
		if (speed > best) {
			best = speed;
		}
	}
	
	cout << best;
}