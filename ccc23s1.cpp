#include <bits/stdc++.h>
using namespace std;



int sum_of_row(int a[], int c) {
	int sum=0;
	int row_sum=0;
	bool first = true;
	for (int i=0; i<c; ++i) {
		int cur = a[i];
		if (cur == 1 && first) {
			sum += 3;
			first = false;
			//cout << "check";
		}
		else if (cur == 1) {
			sum++;
		} else {
			row_sum += sum;
			sum = 0;
			first = true;
		}
		if (i == c-1) {
			row_sum += sum;
		}
	}
	return row_sum;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int c, n;
	cin >> c;
	
	int upper[c];
	int lower[c];
	
	for (int i=0; i<c; ++i) {
		cin >> n;
		upper[i] = n;
	}
	
	int connected=0;
	
	for (int i=0; i<c; ++i) {
		cin >> n;
		lower[i] = n;
		if (i % 2 == 0 && upper[i] == 1 && n == 1) {
			connected++;
		}
	}
	//cout << sum_of_row(upper, c) << " " << sum_of_row(lower, c) << " " << connected * 2;
	cout << sum_of_row(upper, c) + sum_of_row(lower, c) - connected * 2;
	
}