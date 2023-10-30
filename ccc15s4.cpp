#include <bits/stdc++.h>
using namespace std;


vector<vector<pair<int, int> > > adj;
int dist[1000000];
bool visited[2001];
int parent[2001];

int main(void) {
	int k,n,m;
	cin >> k >> n >> m;
	
	for (int i=0; i<m; ++i) {
		int a,b,t,h;
		cin >> a >> b >> t >> h;
		adj[a].push_back(make_pair(b, t));
		adj[b].push_back(make_pair(a, t));
	}
	
	int a, b;
	cin >> a >> b;
	
	d[a] = 0;
	for (int i=0; i<n; ++i) {
		int v = -1;
		for (int j=0; j<n; ++j) {
			if (!visited[j] && v == -1 || d[j] < d[v]) {
				v = j;
			}
		}
		
		if (d[v] = INF) {
			break;
		}
		
		visited[v] = true;
		for (auto edge : adj[v]) {
			int to = edge.first;
			int len = edge.second;
			
			if (d[v] + len < d[to]) {
				d[to] = d[v] + len;
				p[to] = v;
			}
		}
	}
	
}