#include <bits/stdc++.h>
using namespace std;


template <typename T>
void readVector(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

struct bag_items
{
    int w;
    int v;
};

int main(){
int c;
cin >> c;
int n;
cin >> n;

vector<bag_items> items(n);
vector<int> p(n);

for (int i = 0; i < n; i++)
{
    if (!(cin >> items[i].v >> items[i].w))
    {
        cerr << "Invalid input at interval " << i << '\n';
        return 1;
    }
}
cout <<" aqui foi";
vector<vector<int>>dp(n+1, vector<int>(c+1));

for (int i = 0; i < n; i++)
{
    dp[n][0] = 0;
}
for (int  i = 0; i < c; i++)
{
    dp[0][c] = 0;
}

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= c; j++)
    {     cout << items[i-1].w << "\n";

        if (items[i-1].w > j)
        {
            dp[i][j] =  dp[i-1][j];
        }
        else {
        dp[i][j] =  max( dp[i-1][j-items[i-1].w] + items[i-1].v, dp[i-1][j]);
        }
    }
    
}

for (int i = 0; i <= n; i++)
{
    readVector(dp[i]);
    cout << "\n";
}
cout << dp[n][c];


}