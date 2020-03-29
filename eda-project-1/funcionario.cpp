#include "funcionario.h"
#include "dinheiro.h"
#include "slot.h"
#include<iostream>
using namespace std;

void menu_funcionario(slot* maquina)
{
	bool sair = false;
	while (!sair) {
		int escolha_funcionario;
		cout << "\n******* Bem-Vindo Funcion�rio *******" << endl;
		cout << "1. Limpar slots" << endl;
		cout << "2. Limpar m�quina" << endl;
		cout << "3. Adicionar produto" << endl;
		cout << "4. Alterar pre�o" << endl;
		cout << "5. Adicionar slot" << endl;
		cout << "6. Carregar moedas" << endl;
		cout << "7. Imprimir produtos" << endl;
		cout << "8. Gravar m�quina" << endl;
		cout << "9. Carregar m�quina" << endl;
		cout << "10. Remover trocos" << endl;
		cout << "0. Voltar" << endl;
		cout << "Digite a sua op��o: " << endl;

		cin >> escolha_funcionario;

		if (escolha_funcionario == 1) {
			cout << "Escolheu limpar os slots! " << endl;
			//Qualquer coisa para limpar stock;
		}
		else if (escolha_funcionario == 2) {
			cout << "Escolheu limpar a m�quina! " << endl;
			//Qualquer coisa para limpar m�quina;
		}
		else if (escolha_funcionario == 3) {
			cout << "Escolheu adicionar produto! " << endl;
			//Qualquer coisa para adicionar produto;
		}
		else if (escolha_funcionario == 4) {
			cout << "Escolheu alterar pre�o(s)! " << endl;
			//Qualquer coisa para alterar pre�o(s);
		}
		else if (escolha_funcionario == 5) {
			cout << "Escolheu adicionar slots! " << endl;
			//Qualquer coisa para adicionar slots;
		}
		else if (escolha_funcionario == 6) {
			cout << "Escolheu carregar moedas! " << endl;
			//Qualquer coisa para carregar moedas;
		}
		else if (escolha_funcionario == 7) {
			cout << "Escolheu imprimir produtos! " << endl;
			//Qualquer coisa para imprimir produtos;
		}
		else if (escolha_funcionario == 8) {
			cout << "Escolheu gravar m�quina" << endl;
			//Qualquer coisa para gravar m�quina;
		}
		else if (escolha_funcionario == 9) {
			cout << "Escolheu carregar m�quina! " << endl;
			//Qualquer coisa para carregar m�quina;
		}
		else if (escolha_funcionario == 10) {
			cout << "Escolheu remover os trocos! " << endl;
			//Qualquer coisa para remover trocos;
		}
		else if (escolha_funcionario == 0) {
			cout << "Escolheu Voltar! " << endl;
			sair = true;
		}
		else
			cout << "Por favor digite uma op��o v�lida!";
	}
}