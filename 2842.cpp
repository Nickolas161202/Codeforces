#include <bits/stdc++.h>
using namespace std;

vector<char> getVectorFromInput() {
    vector<char> vec;
    string line;
    char c;

    getline(cin, line);
    stringstream ss(line);

    while (ss >> c) {
        vec.push_back(c);
    }

    return vec;
}

int main() {
    vector<char> A = getVectorFromInput();
    vector<char> B = getVectorFromInput();
    int gap, mismatch, match;
    vector<vector<int>> dp(
        A.size() + 1,
        vector<int>(B.size() + 1, 0)
    );
    for (int i = 0; i <= A.size(); i++)
    dp[i][0] = i;

    for (int j = 0; j <= B.size(); j++)
    dp[0][j] = j;

    for (int i = 1; i <= A.size();  i++)
    {
        for(int j = 1; j <= B.size(); j++){
            if(A[i-1] == B[j-1]){
            dp[i][j] = 1+  dp[i-1][j-1];    
            }
            else{

            gap =  dp[i-1][j] + 1;
            mismatch = dp[i][j-1] + 1;
            dp[i][j] = min({gap, mismatch});
            }
        }
    }

    cout << dp[A.size()][B.size()] << "\n";
//    if(A.size() > B.size())
 //   cout << dp[A.size()][B.size()] +  B.size();
  //  else
    //cout << dp[A.size()][B.size()] +  A.size();

}