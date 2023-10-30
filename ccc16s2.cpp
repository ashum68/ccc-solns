#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int q, n, total=0;
	cin >> q >> n;
	
	vector<int> d;
	vector<int> p;
	
	for(int i=0; i<n; ++i) {
		int s;
		cin >> s;
		d.push_back(s);
	}
	
	for(int i=0; i<n; ++i) {
		int s;
		cin >> s;
		p.push_back(s);
	}
	
	sort(d.begin(), d.end());
	sort(p.begin(), p.end());
	
	if(q==1) {
		for(int i=0; i<n; ++i) {
			total += max(d[i], p[i]);
		}
	} else {
		for(int i=0; i<n; ++i) {
			total += max(d[i], p[n-i-1]);
		}
	}
	cout << total;
}