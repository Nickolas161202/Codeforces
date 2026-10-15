#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
# include <string>
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
    string input;
    int  n, k;
    getline(cin, input);
    stringstream ss(input);
    ss >> n >> k; // 59, 4
    int i  = 0;
    int sum = 0;
    int v = 0;
    while(sum < n){
        
        sum += v / pow(k, i);
        i++; 
    }

    cout << lines;
}

