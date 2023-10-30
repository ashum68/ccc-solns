#include <bits/stdc++.h>
using namespace std;

vector<int> parent, ranking;

class Edge {
	public:
	int a, b, old;
	long long weight;
};

bool compare(Edge a, Edge b) {
	if (a.weight == b.weight) {
		return a.old > b.old;
	}
	return a.weight < b.weight;
}

int find_set(int v) {
	if (v == parent[v]) {
		return v;
	}
	return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		if (ranking[a] < ranking[b]) {
			swap(a,b);
		}
		parent[b] = a;
		ranking[a] += ranking[b];
	}
}

vector<Edge> edges;


int main(void) {
	int n, m;
	long long d;
	cin >> n >> m >> d;
	
	int day=0;
	
	parent.resize(n+1);
	ranking.resize(n+1);
	for (int i=0; i<n+1; ++i)  {
		parent[i] = i;
		ranking[i] = 0;
	}
	
	for (int i=0; i<n-1; ++i) {
		int a, b;
		long long c;
		cin >> a >> b >> c;
		
		Edge edge;
		edge.a = a;
		edge.b = b;
		edge.weight = c;
		edge.old = 1;
		edges.push_back(edge);
	}
	
	for (int i=0; i<m-n+1; ++i) {
		int a, b;
		long long c;
		cin >> a >> b >> c;
		
		Edge edge;
		edge.a = a;
		edge.b = b;
		edge.weight = c;
		edge.old = 0;
		edges.push_back(edge);
	}
	
	sort(edges.begin(), edges.end(), compare);
	
	/*
	for(int i=0; i<edges.size();++i) {
		cout << edges[i].a << edges[i].b << edges[i].weight << edges[i].old << "\n";
	}
	*/
	
	int max_edge, cnt=0;
	for (Edge edge : edges) {
		if (cnt > n) break;
		if (find_set(edge.a) != find_set(edge.b)) {
			union_sets(edge.a, edge.b);
			//cout << edge.a << edge.b << "\n";
			if (edge.old == 0) {
				day++;
			}
			max_edge = edge.weight;
			cnt++;
		}
	}
	
	for (int i=0; i<n+1; ++i)  {
		parent[i] = i;
		ranking[i] = 0;
	}
	
	//cout << d << "\n";
	for (Edge edge : edges) {
		if (find_set(edge.a) != find_set(edge.b)) {
			
			if (edge.weight < max_edge || (edge.old == 1 && edge.weight == max_edge)) {
				union_sets(edge.a, edge.b);
				//cout << edge.a << edge.b << "\n";
			}
			else if (edge.weight <= d && edge.old == 1) {
				day--;
				break;
			}
			
			
		}
	}
	cout << day;
}