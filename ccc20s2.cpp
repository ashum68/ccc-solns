#include <bits/stdc++.h>
using namespace std;

class Cell {
	public:
	int r;
	int c;
};

bool searched[1002][1002];
vector<vector<Cell> > products(1005000);


int main(void) {
	int m, n;
	cin >> m >> n;
	
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			int x;
			cin >> x;
			Cell cell;
			cell.r = i;
			cell.c = j;
			products[x].push_back(cell);
		}
	}
	
	bool possible = false;
	Cell last_cell;
	last_cell.r = m;
	last_cell.c = n;
	searched[m][n] = true;
	queue<Cell> q;
	q.push(last_cell);
	
	while(!q.empty()) {
		Cell cell = q.front();
		q.pop();
		vector<Cell> neighbours;
		int x = cell.r * cell.c;
		neighbours = products[x];
		
		for(Cell neighbour : neighbours) {
			if(neighbour.r == 1 && neighbour.c == 1) {
				possible = true;
			}
			else if(!searched[neighbour.r][neighbour.c]) {
				searched[neighbour.r][neighbour.c] = true;
				q.push(neighbour);
			}
		}
	}
	
	if (possible) {
		cout << "yes";
	} else {
		cout << "no";
	}
}