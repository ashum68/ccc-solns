#include <bits/stdc++.h>
using namespace std;


int main(void) {
	int n, num;
	cin >> n;
	int table[n][n];
	
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> num;
			table[i][j] = num;
		}
	}
	
	for (int x=0; x<4; x++) {
		bool ordered = true;
		for (int i=0; i<n-1; i++) {
			if (table[i][0] > table[i+1][0] || table[0][i] > table[0][i+1]) {
				ordered = false;
			} 
		}
		
		if (ordered == true) {
			for (auto i : table) {
				for (int j=0; j<n; j++) {
					cout << i[j] << " ";
				}
				cout << "\n";
			}
			break;
		}
		
		int rotated_table[n][n];
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				rotated_table[j][n-i-1] = table[i][j];
				
			}
		}
		
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				table[i][j] = rotated_table[i][j];
				/* cout << rotated_table[i][j] << " "; */
			}
			/* cout << "\n"; */
		}
		
		
	}
	
}