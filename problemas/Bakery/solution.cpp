#include <iostream>
#include <vector>
#include <queue>
#include <set>
#define VAR 1000000000000000000 
using namespace std;

vector<pair<long long, long long>> arestas[100002];
long long dis[100004];

int main()
{
	int n, m, k;

	cin >> n >> m >> k;

	for(int i = 1; i <= m; i++){
		long long a, b, l;

		cin >> a >> b >> l;

		arestas[a].push_back({b,l});
		arestas[b].push_back({a,l});
	}

	for(int i=0;i<=n;i++){
		dis[i] = VAR;
	}

	priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>>> q;
	set<int> s;

	for(int i=1; i<=k; i++){
		int x;

		cin >> x;

		s.insert(x);
		dis[x] = 0;
		q.push({0,x});
	}

	while(!q.empty()){
		auto it = q.top();

		q.pop();

		for(auto x: arestas[it.second]){
			if(dis[x.first]>it.first+x.second){
				dis[x.first] = it.first+x.second;
				q.push({dis[x.first], x.first});
			}
		}
	}

	long long res = VAR;

	for(int i=1; i<=n; i++){
		if(s.find(i) == s.end()){
			res = min(res,dis[i]);
		}
	}

	if(res == VAR){
		res=-1;
	}

	cout << res << endl;
}