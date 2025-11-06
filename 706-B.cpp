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


int binarySearch(vector<int>& shops, int target){
    int left =  0;
    int right = shops.size() -1;
    int mid; 
    while(left  < right){
        mid = (left + right) /2;

        if(target < shops[mid]){
            right =  mid;
        }
        else if(target > shops[mid]){
            left =  mid;
        }
        else{ return mid;}
    }
return left;
    
};

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
    int l =  1;
    readVector(shops); 
    cout << days[0] << "\n" ;

    for(int i = 0; i < days.size(); i++){

    cout << binarySearch(shops, days[i]);
    }
    
    


    






    
    
  

    
    
    
}
