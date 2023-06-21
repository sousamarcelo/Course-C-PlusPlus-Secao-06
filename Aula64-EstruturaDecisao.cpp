#include <iostream>
#include <string>

int main() {
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
		system("PAUSE");
	}
	else {
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0);
	}

	
}