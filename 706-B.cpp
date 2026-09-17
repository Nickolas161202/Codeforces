#include <bits/stdc++.h>
using namespace std;
template <typename T>
void  readVector(const vector<T>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int binarySearch(const vector<int>& shops, int target) {
    int left = 0, right = shops.size();
    while(left < right) {
        int mid = (left + right) / 2;
        if(shops[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }
    return left; // count of values ≤ target
}


int main()
{
    int n , q;
    string shopsInput;
    vector <int> days;
    vector <int> shops;
    cin >> n;
    cin.ignore(1);
    getline(cin, shopsInput);
    cin >> q;
    int aux;
    for (int i = 0; i < q; i++)
    {   cin >> aux;
        days.push_back(aux);
    }


    stringstream ss(shopsInput);
    while (ss >> aux)
    {   
        shops.push_back(aux);
    }
    sort(shops.begin(), shops.end());

    for(int i = 0; i < days.size(); i++){

    cout << binarySearch(shops, days[i]) << "\n";
    }
    
    
}


