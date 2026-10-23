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

    for (const instance& ins : instances) {
        vector<vector<int>> dp(
            ins.N + 1,
            vector<int>(ins.V + 1, 0)
        );

        for (int i = 1; i <= ins.N; i++) {
            int coin = ins.coins[i - 1];

            for (int j = 0; j <= ins.V; j++) {
                // Não utilizar a moeda atual
                dp[i][j] = dp[i - 1][j];

                // Utilizar a moeda atual, se couber
                if (coin <= j) {
                    dp[i][j] = max(
                        dp[i][j],
                        coin + dp[i - 1][j - coin]
                    );
                }
            }
        }
        if(dp[ins.N][ins.V] == ins.V){
            cout << "sim" << '\n';
        }
        else{
            cout << "não" << '\n';
        }
    }

    return 0;
}
    
    
    
    
    
