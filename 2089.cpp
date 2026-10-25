#include <bits/stdc++.h>
using namespace std;

struct instance{
    int N;
    int V;
    vector<int> coins;
};

int p(int j, int t, vector<int> coins) {
    int a = 0;
    for (int i = 0; i <= j; i++)
    {
        if (a < t)
        {
            a += coins[i];
        }
        
    }
    return a;
    
} 
template <typename T>
void readVector(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}


int main() {
    int V, N;
    vector<instance> instances;

    while (cin >> V >> N) {
        if (V == 0 && N == 0)
            break;

        instance aux;
        aux.V = V;
        aux.N = N;
        aux.coins.resize(N);

        for (int i = 0; i < N; i++) {
            cin >> aux.coins[i];
        }

        instances.push_back(aux);
    }
    int include , exclude;
    include = exclude = 0;
    for (const instance& ins : instances) {
        vector<int> dp(ins.V + 1, 0);
        for (const int& coin : ins.coins) {
            for (int j = ins.V; j > 0; j-- ) {
                if (coin <= j) {
                    include = coin + dp[j - coin];
                    exclude = dp[j];
                    dp[j] = max(include, exclude);
                }
            }
            
        }
        if(dp[ins.V] == ins.V){
            cout << "sim" << '\n';
        }
        else{
            cout << "nao" << '\n';
        }
    }

    return 0;
}
    
    
    
    
    
