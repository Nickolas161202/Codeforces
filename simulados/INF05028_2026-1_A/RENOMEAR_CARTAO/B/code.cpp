#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

/*
 * Escreva uma função seguindo o paradigma de PROGRAMAÇÃO DINÂMICA e
 * com complexidade O(nT) que, dado um número-alvo T e um vetor
 * numérico 'v' de tamanho n, devolva o MAIOR número MENOR-OU-IGUAL a
 * T que pode ser construído somando qualquer número de cópias de
 * quaisquer números de v.
 *
 * Dica: só é necessário alocar um vetor de tamanho T + 1.
 *
 * Obs: no arquivo de texto, o primeiro valor da linha é T, e o resto
 * sãos os valores presentes em v.
 *
 * Parâmetros (NÃO ALTERAR):
 * - v -- vetor de valores positivos menores-ou-iguais a T.
 * - n -- quantidade de elementos dentro de v.
 * - T -- valor limite para maximização da combinação linear de v.
 *
 */

 template <typename T>
void readVector(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int solve(const vector<int> &v, int n, int T) {
	vector<int> dp(T+1);

	for (int i = 0; i < n; i++)
	{	
		for (int j = 1; j <= T+1; j++)
		{
			if (v[i] <= j)
		{
			dp[j] = max(dp[j], v[i] + dp[j-v[i]]);
		}
		
			
		}
		
		
	}
	
	return dp[T];
} // fechamento do solve

int main(void) {
	string line;
	vector<int> v;
	while (getline(cin, line)) {
		stringstream linestream(line);
		int T;
		linestream >> T;
		int x;
		while (linestream >> x) {
			v.push_back(x);
		}

		//cout << "DEBUG: ";
		//cout << "T: " << T << endl;
		//for (auto a : v) {
		//	cout << a << " ";
		//}
		//cout << endl;
		int r = solve(v, v.size(), T);
		cout << r << endl;
		v.clear();
	}
}

