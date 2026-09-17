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

vector<int> getVectorFromInput(int size){
    string input;
    vector <int> vec;
    getline(cin, input);
    int aux;
    stringstream ss(input);
    while (ss >> aux)
    {   
        vec.push_back(aux);
    }
    return vec;
}

int main()
{
    int a_size, b_size;
    
    string input;

    vector <int> a;
    vector <int> b;
    getline(cin, input);
    a_size  = input[0];
    b_size =  input[2];
    
    a = getVectorFromInput(a_size);

    b = getVectorFromInput(b_size);
    sort(a.begin(), a.end());

    vector <int> result;
    for(int i =0; i < b.size();i++){
        auto it = upper_bound(a.begin(), a.end(), b[i]) -  a.begin();
        result.push_back(it);
    }
    readVector(result);
    
    
}


