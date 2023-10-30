#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > book;

queue<int> q;
bool visited[10001];
bool ending[10001];
int d[10001];

int main(void) {
	int n, m, to, lvl=10000;
	cin >> n;
	
	book.resize(10001);
	
	for (int i=1; i<=n; ++i){
		cin >> m;
		if (m == 0) {
			ending[i] = true;
		} else {
			for (int j=0; j<m; ++j) {
				cin >> to;
				book[i].push_back(to);
			}
		}
	}
	
	q.push(1);
	visited[1] = true;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		
		if (ending[cur] && d[cur] < lvl) {
			lvl = d[cur];
		}
		
		for (int page : book[cur]) {
			if (!visited[page]) {
				visited[page] = true;
				q.push(page);
				d[page] = d[cur] + 1;
				
			}
		}
	}
	
	
	bool complete = true;
	for (int i=1; i<=n; ++i) {
		if (!visited[i]) {
			complete = false;
		}
	}
	
	if (complete) {
		cout << "Y\n" << lvl+1;
	} else {
		cout << "N\n" << lvl+1;
	}
	
	
}
