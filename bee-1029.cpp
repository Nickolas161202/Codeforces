//https://judge.beecrowd.com/pt/problems/view/1029
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void readVector(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> tests(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tests[i];
    }
    int total = 0;
    for (const int& t: tests)
    {
        vector<int>dp(t+2);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= t+1; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];

        }
    
        cout <<"fib(" <<t << ") = " << 2* dp[t+1] - 2 <<" calls = " << dp[t] << "\n";

        
    }
    
    

    


}