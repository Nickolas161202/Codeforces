//judge.beecrowd.com/pt/problems/view/1838

#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
template <typename T>


void  readVector(const vector<T>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
struct job{
    int start;
    int end;
}

vector<job> getVectorFromInput(int size){
    string input;
    vector <job> vec;
    getline(cin, input);
    for (int i = 0; i < size; i++)
    {
        string aux;
        getline(cin, aux);
        stringstream ss(aux);
        job aux2;
        ss >> aux2.start >> aux2.end;
        vec.push_back(aux2);
    }

    return vec;
}
//p(j) =  maior índice i < j tal que a tarefa i não se sobrepõe com a tarefa j
//opt(j) = max(p(j) + j, p(j-1))
int main()
{
    int n;
    cin >> n;
    cin.ignore(1);
    vector <job> v = getVectorFromInput(n);
    vector<int>dp(n);
    for (int i = 0; i < n; i++)
    {
        dp[i] = max(v[i] + 1, )
    }
    

        
    
}


