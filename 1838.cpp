#include <bits/stdc++.h>
using namespace std;

template <typename T>
void readVector(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

struct job {
    int start;
    int end;
    int weight;
};

vector<job> getVectorFromInput(int size) {
    string input;
    vector<job> vec;
    for (int i = 0; i < size; i++) {
        string aux;
        getline(cin, aux);
        stringstream ss(aux);
        job aux2;
        ss >> aux2.start >> aux2.end;
        aux2.weight = aux2.end - aux2.start;
        vec.push_back(aux2);
    }

    return vec;
}

// p(j) = maior índice i < j tal que a tarefa i não se sobrepõe com a tarefa j

int p(job j, vector<job> jobs, int n){
    int start =  0;
    int  end =  n;
    int mid;
    while (start != end)
    {
        int mid = n/2;cle
        if(jobs[mid].end > j.start){
            end  = mid;
            cout << jobs[end].start;
        }
        else{
            start =  mid;
            cout << jobs[start].start;
        }
    }
    return start;



    

    
}
// opt(j) = max(p(j) + j, p(j-1))

int main() {
    int n;
    cin >> n;
    cin.ignore(1);

    vector<job> v = getVectorFromInput(n);
    vector<int> dp(n+1);
    vector<int> pi(n);
    sort(v.begin(), v.end(), [](const job& a, const job& b){return a.end < b.end;});

    for (int i = 0; i < n; i++)
    {
        pi[i] = p(v[i], v, n);
    };

    int incluir, excluir;
    for (int i = 1; i <= n; i++)
    {   incluir =  v[i-1].weight + dp[pi[i-1]+1];
        excluir = dp[i-1];
        dp[i] =  max(incluir, excluir);
    };



    cout << dp[dp.size()-1] << "\n";
    
    
}