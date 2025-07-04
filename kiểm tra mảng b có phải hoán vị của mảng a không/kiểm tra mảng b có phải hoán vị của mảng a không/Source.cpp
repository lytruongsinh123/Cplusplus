#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define MAX 100

int n, c[MAX][MAX], X[MAX];
//Cấu hình : X1,X2, X3, ... Xn
// // // quay lui nhánh cận
// Tối ưu : Đánh giá cận dưới : chi phí nhỏ nhất có thể đạt dược 
// Tối ưu : Đánh giá cận trên : chi phí lớn nhát có thể đạt được
int visited[105];
int d = 0, ans = INT_MAX, cmin = INT_MAX;
class solution {

public :
	void input() {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> c[i][j];
				if (c[i][j] != 0) {
					cmin = min(cmin, c[i][j]);
				}
			}
		}
	 memset(visited, 0, sizeof(visited));// gan các phan tu trong mang visited = 0

	}
	void Try(int i) {
		for (int j = 1; j <= n; j++) {
			if (visited[j] == 0) {
				visited[j] = 1;
					X[i] = j;
				d += c[X[i - 1]][X[i]];
				if (i == n) {
					// cap nhat ket qua
					ans = min(ans, d + c[X[n]][1]);
				 }
				// Danh gia can
				else if(d + (n - i + 1) * cmin < ans ){
					Try(i + 1);
				 }
				// backtracking
				visited[j] = 0;
				d -= c[X[i - 1]][X[i]];
			 }
		 }
	 }
 };
int main() {
	solution K;
	K.input();
	X[1] = 1; visited[1] = 1;
	K.Try(2);
	cout << ans << endl;
}