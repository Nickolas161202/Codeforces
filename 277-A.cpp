#include <bits/stdc++.h>
using namespace std;


struct node{
    int id;
    vector <int> neighbors;
};

int main()
{
    int n , m;
    cin >> n >> m;
    vector <string> employees;
    vector <bool> visited;
    vector <node> graph;

    for (int   i = 0; i < n; i++)
    {   string aux;
        getline(cin, aux);
        node aux2;
        aux2.id =  i;
        graph.push_back(aux2);
        employees.push_back(aux);
        visited.push_back(0);
    }
    for (int i = 0; i < employees.size(); i++)
    {
        stringstream ss(employees[i]);
        int num;
        ss >> num;
        if(num > 1){
            while (ss >> num)
            {
                graph[i].neighbors.push_back(num);
            }
        }
       
       
    }
    

    cout << "n e m : " << n << m << "\n";
    queue <string> empq;
    empq.push(employees[0]);
    visited[0] =  true;
    while (!empq.empty())
    {
        string aux =  empq.front();
        empq.pop();

        stringstream ss(aux);
        

    }
    





    
    
  

    
    
    
}
