#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > friends;

bool first_degree[50];

queue<int> q;
bool visited[50];
int dist[50];

void connect(int x, int y) {
	friends[x].push_back(y);
	friends[y].push_back(x);
}

int main(void) {
	
	friends.resize(51);
	
	connect(1,6);
	connect(2,6);
	connect(6,7);
	connect(3,6);
	connect(3,4);
	connect(4,6);
	connect(4,5);
	connect(5,6);
	connect(3,5);
	connect(7,8);
	connect(8,9);
	connect(9,10);
	connect(10,11);
	connect(11,12);
	connect(9,12);
	connect(12,13);
	connect(13,15);
	connect(3,15);
	connect(13,14);
	connect(16,17);
	connect(16,18);
	connect(17,18);
	
	while(1){
		string cmd;
		cin >> cmd;
		
		int x,y;
		
		
		
		// i - make friends
		if (cmd == "i") {
			cin >> x >> y;
			connect(x,y);
		}
		// d - ruin friendship
		else if (cmd == "d") {
			cin >> x >> y;
			auto it = find(friends[x].begin(), friends[x].end(), y);
			friends[x].erase(it);
			it = find(friends[y].begin(), friends[y].end(), x);
			friends[y].erase(it);
		}
		// n - return # of friends
		else if (cmd == "n") {
			cin >> x;
			cout << friends[x].size() << "\n";
		}
		// f - return # of friends of friends
		else if (cmd == "f") {
			cin >> x;
			int total = 0;
			
			first_degree[x] = true;
			for (int connection : friends[x]) {
				first_degree[connection] = true;
			}
			for (int connection : friends[x]) {
				for (int i=0, n=friends[connection].size(); i<n; ++i) {
					int f = friends[connection][i];
					if (!first_degree[f]) {
						first_degree[f]=true;
						total++;
					}
				}
			}
			
			
			cout << total << "\n";
			for (int i=0; i<50; ++i) {
				first_degree[i] = false;
			}
		}
		// s - return degree of separation
		else if (cmd == "s") {
			cin >> x >> y;
			
			q.push(x);
			visited[x] = true;
		
			while (!q.empty()) {
				int cur = q.front();
				// cout << cur;
				q.pop();
				
				for (int connection : friends[cur]) {
					if (!visited[connection]) {
						visited[connection] = true;
						q.push(connection);
						dist[connection] = dist[cur] + 1;
					}
				}
			}
			if (!visited[y]) {
				cout << "Not connected" << "\n";
			} else {
				cout << dist[y] << "\n";
			}
			for (int i=0; i<50; ++i) {
				visited[i] = false;
				dist[i] = 0;
			}
		}
		
		// q - quit
		else {
			break;
		}
	}
	
	
}