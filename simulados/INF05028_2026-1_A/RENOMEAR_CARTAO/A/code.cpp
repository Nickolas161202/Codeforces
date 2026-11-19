#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Escreva uma função seguindo o paradigma de DIVISÃO E CONQUISTA e com
 * complexidade O(log n) que, dado um vetor de inteiros 'v' de tamanho n
 * onde os valores das POSIÇÕES PARES estão em ordem crescente devolve
 * o índice da POSIÇÃO PAR onde o valor 42 se encontra (zero é par), ou
 * -1 se o valor não se encontra nas posições pares, considerando os
 * limite inferior (inclusivo) 'a' e limite inferior (inclusivo) 'b'.
 *
 * Parâmetros (NÃO ALTERAR):
 * - v -- Vetor com os valores crescentes nas POSIÇÕES PARES.
 * - a -- limite inferior inclusivo (índice de posição).
 * - b -- limite superior inclusivo (índice de posição).
 *
 * Obs.: Não se pode fazer funções auxiliares, logo deve se chamar
 * recursivamente a solve mesmo.
 */
int solve(vector<int> &v, int a, int b) {
	//cout << "a: " << a << " b: " << b << " mid: " << "\n";

	if(a > b)
	return -1;
	if(a % 2 == 1)
	a++;

	if(b%2 == 1)
	b--;

	int mid =  (a  + (b-a) / 2) & ~1;
	//cout << "a: " << a << " b: " << b << " mid: " << mid << "\n";
	if(v[mid] ==  42)
	{
	return mid;
	}
	if(v[mid] < 42)
	{
	return solve(v, mid+1, b);
	}
	return solve(v, a, mid-1);
} // fechamento do solve

int main(void) {
	string line;
	vector<int> v;
	while (getline(cin, line)) {
		stringstream linestream(line);
		int x;
		while (linestream >> x) {
			v.push_back(x);
		}

		//cout << "DEBUG: ";
		//for (auto a : v) {
		//	cout << a << " ";
		//}
		//cout << endl;
		int r = solve(v, 0, v.size() - 1);
		cout << r << endl;
		v.clear();
	}
}

