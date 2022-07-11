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
		cout << "1 - SOMA\n2 - SUBTRAÇÃO\n3 - DIVISÃO\n4 - MULTIPLICAÇÃO\n";
		cout << "Por favor dígite o valor da opcao escolhida: ";

		cin >> op;

		switch (op)
		{
		case 1:
			system("cls");
			cout << "======ADIÇÃO======\n";
			cout << "Dígite o primeiro número: ";
			cin >> a;
			cout << "Dígite o segundo número: ";
			cin >> b;
			resultado = Adicao(a, b);
			cout << "\nResultado: " << resultado << "\n";
			break;

		case 2:
			system("cls");
			cout << "======SUBTRAÇÃO======\n";
			cout << "Dígite o primeiro número: ";
			cin >> a;
			cout << "Dígite o segundo número: ";
			cin >> b;
			resultado = Subtracao(a, b);
			cout << "\nResultado: " << resultado << "\n";
			break;

		case 3:
			system("cls");
			cout << "======DIVISÃO======\n";
			cout << "Dígite o primeiro número: ";
			cin >> a;
			cout << "Dígite o segundo número: ";
			cin >> b;
			resultado = Divisao(a, b);
			cout << "\nResultado: " << resultado << "\n";
			break;

		case 4:
			system("cls");
			cout << "======MULTIPLICAÇÃO======\n";
			cout << "Dígite o primeiro número: ";
			cin >> a;
			cout << "Dígite o segundo número: ";
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
				cout << "OPÇÃO INVÁLIDA!\n";
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

