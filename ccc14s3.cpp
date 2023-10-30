
#include <bits/stdc++.h>
using namespace std;



int main(void) {
	int T, N;
	cin >> T;
	for (int i=0; i<T; i++) {
		
		stack<int> mountain;
		stack<int> branch;
		int count = 1;
		bool possible = true;
		
		
		cin >> N;
		
		for (int j=0; j<N; j++) {
			int x;
			cin >> x;
			mountain.push(x);
		}
		
		while(!mountain.empty() or !branch.empty()) {
			if (!mountain.empty() and mountain.top()==count) {
				mountain.pop();
				count++;
			} else if (branch.empty()) {
				branch.push(mountain.top());
				mountain.pop();
			} else if (branch.top() == count) {
				branch.pop();
				count++;
			} else if (!mountain.empty()) {
				branch.push(mountain.top());
				mountain.pop();
			} else {
				cout << "N \n";
				possible = false;
				break;
			}
		}
		
		if (possible) {
			cout << "Y \n";
		}
		
	}
	
}