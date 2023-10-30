#include <bits/stdc++.h>
using namespace std;



int main(void) {
	string word;
	int r, c;
	cin >> word >> r >> c;
	char grid[r][c];
	
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> grid[i][j];
		}
	}
	
	int index = 0;
	queue<pair<int, int> > q;
	
	q.push(make_pair(0,0));
	
	while(!q.empty()) {
		auto cur = q.front();
		q.pop(); 
		
		char target = word[index];
		if (grid[cur.first][cur.second]) {
			index++;
		}
	}
	
}