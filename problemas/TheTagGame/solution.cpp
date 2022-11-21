#include <iostream>
#include <vector>

using namespace std;

int f[300000];
int g[300000];
int n, x;

vector<int> v[300000];
vector<int> l;

int dfs(int num, int fa){
	int maximo = 0;
	g[num] = fa;

	for(int i = 0; i < v[num].size(); i++){
		if(v[num][i] != fa){
			int u = dfs(v[num][i], num);
			maximo = max(maximo, u);
		}
	}

	return f[num] = maximo+1;
}

int main(){
	cin >> n >> x;

	for(int i = 1; i < n; i++){
		int a, b;

		cin >> a >> b;
		
    v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1, 0);
	int t = 0;

	for(int i = x; i != 1; i = g[i]) t++;

	int t2 = (t-1) / 2;
	int maximo = -1;

	for(int i = 1, j = x; i <= t2+1; i++, j = g[j]){
		maximo = max(maximo, t-i+f[j]-1);
	}

	cout<< (maximo+1)*2 << endl;

	return 0;
}