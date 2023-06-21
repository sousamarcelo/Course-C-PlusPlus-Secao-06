#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	bool bFezSol;
	bool bCarroPronto;
	bool bSalarioDepositado;
	bool bAcesso;

	std::string SenhadeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	if (SenhadeAcesso == SenhaDigitada)
	{
		std::cout << "\nAcesso Permitido" << "\n";
		bAcesso = true;
		//system("PAUSE");
	}
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0);
	}
	bFezSol = false;
	bCarroPronto = false;
	bSalarioDepositado = false;

	if (bAcesso)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\nVai dar Praia!!!" << std::endl;
		}
		else if (!bSalarioDepositado)
		{
			std::cout << "Não vai dar Praia, mas o salario foi depositado" << "\n";
		}
	}

	system("PAUSE");

}