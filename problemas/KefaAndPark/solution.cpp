#include <iostream> 
#include <vector>
#include <string>

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;

int n, m, u, v, res = 0;
vvi adj(100005);
vi a(100005);

void dfs(int u, int p, int num, int maximo) {
    if (a[u]){
      num++;
    } else{
      num = 0;
    }
    
    maximo = max(maximo, num);

    int child = 0;

    for (int v : adj[u]){
        if (v != p){
            dfs(v, u, num, maximo);
            child++;
        }
    }

    if (child == 0 && maximo <= m) {
      res++;
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++){
      cin >> a[i];
    }

    for (int i = 1; i < n; i++){
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,-1,0,0);

    cout << res << endl;

    return 0;
}