// thuat toan DFS

// input 
//9 9
//1 2
//1 3
//1 5
//2 4
//3 6
//3 7
//3 9
//5 8
//8 9


#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int n, m;
vector<int> adj[1001];
bool visited[1001];
void input() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
void DFS(int u) {
	cout << u << " ";
	visited[u] = true;
	for (int v : adj[u]) {
		// neu dinh v chua duoc tham
		if (!visited[v]) {
			DFS(v);
		}
	}
}
int main() {
	input();
	DFS(1);
}
