#include <bits/stdc++.h>
using namespace std;



int main(void) {
	
	int n, val, best=1e9;
	cin >> n;
	
	// m = mountains array
	int m[n];
	
	for (int i=0; i<n; ++i) {
		cin >> m[i];
	}
	
	int cnt=0;
	for (int i=0; i<n; ++i) {
		int r=cnt;
		int len = n;
		int l = 0, index = 0;
		int arr[len];
		while(l<=r && r<n) {
			arr[index] = m[l];
			l++;
			r++;
			cout << arr[index]<< "\n";
			index++;
			
		}
		cout << "s\n";
		
		int left = 0, right = len;
		for(int j=0; j<n/2; ++j) {
			if (left <= right && right < len) {
				val = abs(arr[left] - arr[right]);
			}
			if (val < best) {
				best = val;
			}
			left++;
			right--;
		}
		
		//cout << best << " ";
		best = 1e9;
		len--;
		cnt++;
		
	}
	
}

