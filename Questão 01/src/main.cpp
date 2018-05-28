#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;
	
	ifstream frutas;
	frutas.open("frutas.dat");
	if(frutas.bad())
	{
		std::cerr << "O arquivo não abriu corretamente." << std::endl;
	}
	while(!frutas.eof())
	{
		std::string cod;
		std::string nome;
		std::string preco;
		std::string data;
		std::string validade;
		std::getline(frutas, cod, ',');
		std::getline(frutas, nome, ',');
		std::getline(frutas, preco, ',');
		std::getline(frutas, data, ',');
		std::getline(frutas, validade, ',');
		short _preco = std::atoi(preco.c_str());
		short _validade = std::atoi(validade.c_str());
		lista.push_back(make_shared<Fruta>(cod, nome, _preco, data, _validade));

	}

	
	ifstream roupas;
	roupas.open("roupas.dat");
	if(!roupas)
	{
		std::cerr << "O arquivo não abriu corretamente." << std::endl;
	}
	while(!roupas.eof())
	{
		std::string cod;
		std::string nome;
		std::string preco;
		std::string marca;
		std::string sexo;
		std::string tamanho;
		std::getline(roupas, cod, ',');
		std::getline(roupas, nome, ',');
		std::getline(roupas, preco, ',');
		std::getline(roupas, marca, ',');
		std::getline(roupas, sexo, ',');
		std::getline(roupas, tamanho, ',');
		short _preco = std::atoi(preco.c_str());
		short _tamanho = std::atoi(tamanho.c_str());
		lista.push_back(make_shared<Roupa>(cod, nome, _preco, marca, sexo, _tamanho));

	}
	
	ifstream bebidas;
	bebidas.open("bebidas.dat");
	if(bebidas.is_open() == 0)
	{
		std::cerr << "O arquivo não abriu corretamente." << std::endl;
	}
	while(!bebidas.eof())
	{
		std::string cod;
		std::string nome;
		std::string preco;
		std::string teor_alcoolico;
		std::getline(bebidas, cod, ',');
		std::getline(bebidas, nome, ',');
		std::getline(bebidas, preco, ',');
		std::getline(bebidas, teor_alcoolico, ',');
		short _preco = std::atoi(preco.c_str());
		short _teor_alcoolico = std::atoi(teor_alcoolico.c_str());
		lista.push_back(make_shared<Bebida>(cod, nome, _preco, _teor_alcoolico));

	}

	for(auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;
	}

	std::cout << "Preço de uma laranja + uma saia: " << *lista[1] + *lista[6] << std::endl;

	std::cout << "Preço de uma tequila - uma calça: " <<  *lista[9] - *lista[5] << std::endl;

	std::cout << "Análise se o produto 2 é o mesmo do produto 4(0/1): " << (*lista[2] == *lista[4]) << std::endl;

	frutas.close();
	roupas.close();
	bebidas.close();
	return 0;
}