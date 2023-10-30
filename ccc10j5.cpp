#include <bits/stdc++.h>
using namespace std;

class pos {
	public:
	int x;
	int y;
	int level;
};

bool visited[9][9];

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	
	int start_x, start_y, end_x, end_y;
	int moves[8][2] = {
		{2,1},
		{2,-1},
		{-2,1},
		{-2,-1},
		{1,2},
		{1,-2},
		{-1,2},
		{-1,-2},
	};
	
	cin >> start_x >> start_y >> end_x >> end_y;
	
	pos start, end;
	
	start.x = start_x;
	start.y = start_y;
	start.level = 0;
	end.x = end_x;
	end.y = end_y;
	
	queue<pos> q;
	
	visited[start_x][start_y] = true;
	q.push(start);
	while (!q.empty()) {
		
		pos current = q.front();
		q.pop();
		
		if (current.x == end.x and current.y == end.y) {
			cout << current.level;
			return 0;
		}
		
		for (int i=0; i < 8; i++) {
			int new_x = current.x + moves[i][0];
			int new_y = current.y + moves[i][1];
			if (new_x > 0 and new_x < 9 and new_y > 0 and new_y < 9) {
				if (!visited[new_x][new_y]) {
					visited[new_x][new_y] = true;
					pos new_pos;
					new_pos.x = new_x;
					new_pos.y = new_y;
					
					new_pos.level = current.level + 1;
					q.push(new_pos);
				}
				
			}
		
		}
		
	}
	
}

