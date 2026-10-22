#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> durations(N);

    for (int i = 0; i < N; i++) {
        cin >> durations[i];
    }

    // Missing tapes have capacity zero.
    int cap[3] = {0, 0, 0};

    for (int i = 0; i < K; i++) {
        cin >> cap[i];
    }

    // dp[a][b][c] = maximum total duration with these capacities.
    vector<vector<vector<int>>> dp(
        cap[0] + 1,
        vector<vector<int>>(
            cap[1] + 1,
            vector<int>(cap[2] + 1, 0)
        )
    );

    auto next = dp;
    for (int d: durations)
    {
        for (int a = 0; a <= cap[0]; a++)
        {
            for (int b = 0; b <= cap[1]; b++)
            {
                for (int c = 0; c <= cap[2]; c++)
                {
                    next[a][b][c] = dp[a][b][c];
                    if(a >= d){
                        next[a][b][c] = max(dp[a-d][b][c] + d, next[a][b][c]);
                    }
                    if(b >= d){
                        next[a][b][c] = max(dp[a][b-d][c]  + d, next[a][b][c]);
                    }
                    if(c >= d){
                        next[a][b][c] = max(dp[a][b][c-d] + d, next[a][b][c] );
                    }

                }
                
            }
            
        }
        dp.swap(next);
    }
    
    

    cout << dp[cap[0]][cap[1]][cap[2]] << '\n';

    return 0;
}