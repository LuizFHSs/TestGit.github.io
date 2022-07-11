#include <Windows.h>
#include <iostream>

using namespace std;

int Adicao(int, int);
int Subtracao(int, int);
int Divisao(int, int);
int Multiplicacao(int, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int a, b, op, resultado=0;
	do {
		cout << "***CALCULADORA SIMPLES***";
		cout << "\nQual das operacoes abaixo, voce gostaria de fazer?\n";
		cout << "1 - SOMA\n2 - SUBTRA��O\n3 - DIVIS�O\n4 - MULTIPLICA��O\n";
		cout << "Por favor d�gite o valor da opcao escolhida: ";

		cin >> op;

		switch (op)
		{
		case 1:
			system("cls");
			cout << "======ADI��O======\n";
			cout << "D�gite o primeiro n�mero: ";
			cin >> a;
			cout << "D�gite o segundo n�mero: ";
			cin >> b;
			resultado = Adicao(a, b);
			cout << "\nResultado: " << resultado << "\n";
			break;

		case 2:
			system("cls");
			cout << "======SUBTRA��O======\n";
			cout << "D�gite o primeiro n�mero: ";
			cin >> a;
			cout << "D�gite o segundo n�mero: ";
			cin >> b;
			resultado = Subtracao(a, b);
			cout << "\nResultado: " << resultado << "\n";
			break;

		case 3:
			system("cls");
			cout << "======DIVIS�O======\n";
			cout << "D�gite o primeiro n�mero: ";
			cin >> a;
			cout << "D�gite o segundo n�mero: ";
			cin >> b;
			resultado = Divisao(a, b);
			cout << "\nResultado: " << resultado << "\n";
			break;

		case 4:
			system("cls");
			cout << "======MULTIPLICA��O======\n";
			cout << "D�gite o primeiro n�mero: ";
			cin >> a;
			cout << "D�gite o segundo n�mero: ";
			cin >> b;
			resultado = Multiplicacao(a, b);
			cout << "\nResultado: " << resultado << "\n";
			break;
		default:
			if (op == 0)
			{
				cout << "SAINDO DA CALCULADORA";
				Sleep(1000);
			}
			else {
				cout << "OP��O INV�LIDA!\n";
			}
		}
	}while(op!=0);
}

int Adicao(int num, int num2)
{
	int A, B, soma = 0;

	A = num;
	B = num2;

	soma = A + B;

	return soma;
}

int Subtracao(int num, int num2)
{
	int A, B, sub = 0;

	A = num;
	B = num2;

	sub = A - B;

	return sub;
}

int Divisao(int num, int num2)
{
	int A, B, div = 0;

	A = num;
	B = num2;

	div = A / B;

	return div;
}

int Multiplicacao(int num, int num2)
{
	int A, B, mult = 0;

	A = num;
	B = num2;

	mult = A * B;

	return mult;
}

