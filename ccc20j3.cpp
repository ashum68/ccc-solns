#include <bits/stdc++.h>
using namespace std;

int main(void) {
	
	int n;
	cin >> n;
	
	for (int i=0; i<n; ++i) {
		string coords,x,y;
		cin >> coords;
		
		int cnt=0;
		
		while (true) {
			if (coords[cnt] == ',') {
				break;
			}
			cnt++;
		}
		
		x = coords.substr(0,cnt);
		y = coords.erase(0,cnt+1);
	
		cout << x << y;
		
	}
	

}