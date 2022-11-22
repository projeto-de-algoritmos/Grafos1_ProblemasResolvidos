#include <iostream>
#include <vector>
using namespace std;

long long n, k, kl, lk, res, res1, res2;
vector<long long> g[200000];

int main(){
    cin >> n >> k;

    for(int i = 1; i <= k; i++){
			cin >> kl >> lk;

			g[kl].push_back(lk);
			g[lk].push_back(kl);
    }

    for(int i = 1; i <= n; i++){
			if(g[i].size() == 2){
				res ++;
			} else if(g[i].size() == 1){
				res1 ++;
			} else if(g[i].size() == n - 1){
				res2 ++;
			}
    }

    if(res == n){
			cout << "ring topology" << endl;
    } else if(res == n - 2 && res1 == 2){
			cout << "bus topology" << endl;
    } else if(res2 == 1 && res1 == n - 1){
			cout << "star topology" << endl;
    } else {
    	cout << "unknown topology" << endl;
		}

		return 0;
}