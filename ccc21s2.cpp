#include <iostream>
#include <unordered_set>


using namespace std;

int main(void) {
	long long m, n;
	int k;
	cin >> m >> n;
	cin >> k;
	
	unordered_set<int> row;
	unordered_set<int> column;
	
	for (int i=0; i<k; i++) {
		char c;
		int a;
		cin >> c >> a;
		
		if (c == 'R') {
			if (row.find(a) == row.end()) {
				row.insert(a);
			}
			else {
				row.erase(a);
			}
		}
		else {
			if (column.find(a) == column.end()) {
				column.insert(a);
			}
			else {
				column.erase(a);
			}
		}
		
		
	}
	
	long long gold = row.size() * n + column.size() * m - row.size() * column.size() * 2;
	
	cout << gold;
}