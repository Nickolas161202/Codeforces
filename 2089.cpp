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

int main(){
    int V, N;
    V = N = 1;
    instance aux;
    vector<instance> instances;
    while (V != 0 && N!= 0)
    {
        cin >> V >> N;
        vector<int> coins(N);
        for (int i = 0; i < N; i++)
        {
            cin >> coins[i];
        }
        sort(coins.begin(), coins.end());
        aux.V = V;
        aux.N = N;
        aux.coins =  coins;
        instances.push_back(aux);
    }
    
 // p(j) = todas as moedas compatíveis com j
 //opt(j) = max(p(j) + j, p(j-1))
    int pj;
    for (instance ins : instances)
    {   
        vector<int> dp(ins.N +1);
        
        for (int i = 1; i <= ins.N; i++)
        {   
         
            dp[i] = max(dp[i-1], )
        }
        
    }
    
    
    
    




}