#include <bits/stdc++.h>
using namespace std;

int n, train, weight, maximum, total, counter=0;
queue<int> trains;

int main(void) {
	cin >> maximum >> n;
	for (int i=0; i<n; i++) {
		cin >> train;
		
		if (i >= 4) {
			trains.pop();
		}
		trains.push(train);
		
		total = 0;
		for (int i=0; i<trains.size(); i++) {
			weight = trains.front();
			total += weight;
			trains.pop();
			trains.push(weight);
		}
		if (total > maximum) {
			break;
		}
		counter++;
	}
	cout << counter;
	
	
}
