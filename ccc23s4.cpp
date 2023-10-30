#include <bits/stdc++.h>
using namespace std;

vector<int> parent, ranking;

struct Edge {
	int u, v;
	long l, c;
	bool used;
};

bool compare(Edge u, Edge v) {
	if (u.l == v.l) {
		return u.c < v.c;
	}
	return u.l < v.l;
}

int find(int v) {
	if (v == parent[v]) {
		return v;
	}
	return parent[v] = find(parent[v]);
}

void union_sets(int a, int b) {
	a = find(a);
	b = find(b);
	if (a != b) {
		if (ranking[a] < ranking[b]) {
			swap(a,b);
		}
		parent[b] = a;
		ranking[a] += ranking[b];
	}
}

vector<Edge> edges;
vector<vector<pair<long, long> > > mst;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	long cost=0;
	cin >> n >> m;
	
	parent.resize(n+1);
	ranking.resize(n+1);
	
	edges.resize(m);
	mst.resize(n+1);
	
	for (int i=0; i<n+1; ++i)  {
		parent[i] = i;
		ranking[i] = 0;
	}
	
	for (int i=0; i<m; ++i) {
		int u, v, l, c;
		cin >> u >> v >> l >> c;
		
		Edge edge;
		edge.u = u;
		edge.v = v;
		edge.l = l;
		edge.c = c;
		edge.used = false;
		//edges[i] = edge;
		edges.push_back(edge);
		//cout << edge.u;
	}

	sort(edges.begin(), edges.end(), compare);
	
	int cnt=0, index=0;

	for (Edge edge : edges) {
		//cout << cnt;
		if (cnt == n-1) break;
		if (find(edge.u) != find(edge.v)) {
			union_sets(edge.u, edge.v);
			//cout << edge.u << edge.v << "\n";
			mst[edge.u].push_back(make_pair(edge.v, edge.l));
			mst[edge.v].push_back(make_pair(edge.u, edge.l));
			cost += edge.c;
			cnt++;
			edges[index].used = true;
		}
		index++;
	}
	
	edges.erase(edges.begin(), edges.begin() + m);
	//cout << "\n";
	
	for (Edge edge : edges) {
		if (edge.used) continue;
		priority_queue<pair<long, long>, vector<pair<long, long> >, greater<pair<long, long> > > pq;
		vector<bool> visited(n+1, false);
		vector<long> dist(n+1, LONG_MAX);
		
		dist[edge.u] = 0;
		pq.push(make_pair(0,edge.u));
		
		while (!pq.empty()) {
			auto current = pq.top();
			long curDist = current.first;
			int curNode = current.second;
			pq.pop();
			
			if (visited[curNode]) {
				continue;
			}
			visited[curNode] = true;
			if (!mst[curNode].empty()) {
				for (auto edge : mst[curNode]) {
					int nextNode = edge.first;
					long nextWeight = edge.second;
					long nextDist = curDist + nextWeight;
					if (not visited[nextNode] and nextDist < dist[nextNode]) {
						dist[nextNode] = nextDist;
						pq.push(make_pair(nextDist, nextNode));
					}
				}
			}
		}
		
		//cout << edge.u << edge.v << " " << edge.l << " " << dist[edge.v] << "\n";
		if (edge.l < dist[edge.v]) {
			cost += edge.c;
			mst[edge.u].push_back(make_pair(edge.v, edge.l));
			mst[edge.v].push_back(make_pair(edge.u, edge.l));
		}
	}
	
	cout << cost;
	
}