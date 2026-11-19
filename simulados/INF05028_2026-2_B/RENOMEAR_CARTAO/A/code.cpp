#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

/*
 * Escreva uma função seguindo o paradigma de DIVISÃO E CONQUISTA e com
 * complexidade O(n log n) que, dado um vetor de inteiros 'v' de tamanho n
 * ordena o mesmo por ordem DECRESCENTE da casa da CENTENA, em caso de
 * empate da casa da centena ordena por ordem CRESCENTE da DEZENA,
 * e no caso de empate de casa da dezena, mantém a ordem original entre
 * os dois números (i.e., ignora a unidade e age como um algoritmo de
 * ordenação ESTÁVEL).
 *
 * O vetor está sendo passado por referência (do C++) então alterações
 * nos valores do vetor serão refletidas nas demais chamadas e nos
 * valores do vetor após a chamada original retornar.
 *
 * Parâmetros (não alterar nomes e ordem, nem adicionar/remover):
 * - v -- Vetor com inteiros não-negativos entre 0 e 999.
 * - a -- limite inferior inclusivo (índice de posição).
 * - b -- limite superior inclusivo (índice de posição).
 * - u -- Vetor de mesmo tamanho que v, que pode ser usado como
 *        auxiliar. Começa com lixo, e seus valores não são verificados.
 *
 * Obs.: NÃO é recomendado fazer funções auxiliares (o código pode ser
 * todo escrito direto na solve), e a única função recursiva deve ser a
 * 'solve'.
 */
void solve(vector<int> &v, int a, int b, vector<int> &u) {
	

	return;
} // fechamento do solve

int main(void) {
	string line;
	vector<int> v;
	vector<int> u;
	while (getline(cin, line)) {
		stringstream linestream(line);
		int x;
		while (linestream >> x) {
			v.push_back(x);
			u.push_back(-1);
		}

		//cout << "DEBUG: ";
		//for (auto a : v) {
		//	cout << a << " ";
		//}
		//cout << endl;
		solve(v, 0, v.size() - 1, u);
		for (auto e : v) {
			cout << e << " ";
		}
		cout << endl;
		v.clear();
		u.clear();
	}
}

