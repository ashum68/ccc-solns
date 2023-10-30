#include <bits/stdc++.h>
using namespace std;

int main(void) {
	
	
	while (true) {
		
		int r;
		cin >> r;
		int cnt = 0;
		
		if (r==0) {
			break;
		}
		int max = r*r;
		for (int x=1; x<r; x++) {
			int y = sqrt(max - x*x);
			cnt += y;
		
		}
		cout << cnt*4 + r*4 + 1 << "\n";
	}
}