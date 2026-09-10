#include <bits/stdc++.h>
using namespace std;
#include <chrono>
#include <cmath>

double ns_to_ms(double ns) {
    return ns / 1e6;
}
int main(){
    vector <int> d;
    int limit = 536870913;
    double alocs = 0, non_alocs =0;
    double aloc_time = 0, non_aloc_time = 0;
    for(int i =0;i < limit;i++){
        if(d.capacity() == d.size()){
            alocs++;
            auto start_inner = chrono::steady_clock::now();
            d.push_back(i);
            auto end_inner = chrono::steady_clock::now();
            auto duration_inner =  chrono::duration_cast<chrono::nanoseconds>(end_inner - start_inner);
            aloc_time += duration_inner.count();
        }
        else{
            non_alocs++;
            auto start_non_aloc = chrono::steady_clock::now();
            d.push_back(i);
            auto end_non_aloc = chrono::steady_clock::now();
            auto duration_non_aloc =  chrono::duration_cast<chrono::nanoseconds>(end_non_aloc - start_non_aloc);
            non_aloc_time += duration_non_aloc.count();
        }    
    }
    double avg_aloc = aloc_time / alocs;
    double avg_non_aloc = non_aloc_time / non_alocs;
    double total_time = aloc_time + non_aloc_time;
    double amortized_factor =  total_time / (double)limit;
    cout << "Average Allocation Time: " << ns_to_ms(avg_aloc) << " ms" <<  "avg non allocation time" << avg_non_aloc <<"ns"<<  " Total Time: " << ns_to_ms(total_time) << " ms"<< " Amortized Factor: " << amortized_factor << " ns";
    return 0;
}