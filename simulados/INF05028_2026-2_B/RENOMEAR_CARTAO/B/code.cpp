#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

/*
 * Escreva uma função seguindo o paradigma de PROGRAMAÇÃO DINÂMICA,
 * preenchendo um vetor SEM USAR RECURSÃO, e com complexidade O(n) que
 * dado duas listas BASE-1 (i.e., ignorar primeira posição) de n inteiros,
 * uma com o valor do compromisso, e outra com o índice do último
 * compromisso compatível antes desse (zero significa que
 * NÃO há compromisso anterior compatível, i.e., base 1),
 * retorna valor do subconjunto de compromissos compatíveis de maior
 * valor possível. Os compromissos já estão em ordem de ocorrência.
 *
 * Há um detalhe, entretanto, não realizar um compromisso
 * causa uma penalidade de -1 no valor POR COMPROMISSO NÃO REALIZADO.
 *
 * OBS: na entrada, cada linha é uma sequência de pares, VALOR e
 * ÚLTIMO-COMPATÍVEL.
 *
 * Parâmetros:
 * - n -- maior índice válido em 'v' e em 'a' (BASE 1).
 * - v -- valor obtido ao realizar o compromisso (BASE 1).
 * - a -- índice do último compromisso anterior compatível (BASE 1).
 *
 * Retorno:
 * - O valor somado do subconjunto dos compromissos compatíveis que
 *   maximiza o valor considerando que cada compromisso não selecionado
 *   causa uma penalidade de -1 (seja por escolha ou por incompatibilidade).
 */

 template <typename T>
void readVector(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}


int solve(const int n, const vector<int> &v, const vector<int> &a) {
	vector<int>dp(n+1, 0);
	for (int i = 1; i <= n; i++)	{
		//cout << dp[i-1] << " " << v[i] << " dp[a]: " << dp[a[i]] << "FIM \n";
		dp[i] = max(dp[i-1] -1, v[i] + dp[a[i]] - (i-1-a[i]));
	}
//	cout << "a" << "\n";
//	readVector(a);
//	cout << "V" << "\n";
//	readVector(v);
//	cout << "dp" << "\n";
//	readVector(dp);
	return dp[n];
} // fechamento do solve

int main(void) {
	string line;
	vector<int> v;
	vector<int> a;
	while (getline(cin, line)) {
		v.push_back(-10000);
		a.push_back(-10000);
		stringstream linestream(line);
		int x;
		while (linestream >> x) {
			v.push_back(x);
			linestream >> x;
			a.push_back(x);
		}

		//cout << "DEBUG: ";
		//cout << "T: " << T << endl;
		//for (auto a : v) {
		//	cout << a << " ";
		//}
		//cout << endl;
		int r = solve(v.size()-1, v, a);
		cout << r << endl;
		v.clear();
		a.clear();
	}
}

