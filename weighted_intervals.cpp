#include <bits/stdc++.h>
using namespace std;
// Weighted intervals problem
//input:
// first line: number of intervals N followed by 
// n lines: sj, ej, wj where sj is the start of the task j, ej is the end of the task j and wj is the weight.
struct weighted_intervals
{
    int s;
    int e;
    int w;
};

template <typename T>
void readVector(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int compute_p(const vector<weighted_intervals>& intervals, int t) { // l = 0, r =  1  m = ;
    int l = 0;
    int r = t - 1;
    int ans = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (intervals[m].e <= intervals[t].s) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return ans;
}
int main(){
int n;
cin >> n;

vector<weighted_intervals> intervals(n);
vector<int> p(n);

for (int i = 0; i < n; i++)
{
    if (!(cin >> intervals[i].s >> intervals[i].e >> intervals[i].w))
    {
        cerr << "Invalid input at interval " << i << '\n';
        return 1;
    }
}

    sort(intervals.begin(), intervals.end(), [](weighted_intervals a, weighted_intervals b){ return  a.e < b.e;});
    
    for (int i = 0; i < n; i++)
    {
        cout << intervals[i].s << " " << intervals[i].e <<" " << intervals[i].w << "\n";
    }
    

    for (int  i = 0; i < n; i++)
    {
       p[i] = compute_p(intervals, i);
    }
    cout << "\n";
    vector<int> dp(n+1);
    for (int  i = 1; i <= n; i++)// i = 4, 
    {
        dp[i] = max(intervals[i-1].w + dp[p[i-1]+1], dp[i-1]);
    }
    cout << dp[n] << "\n";


    



}