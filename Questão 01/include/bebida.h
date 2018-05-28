/**
* @file bebida.h
* @brief Implementação da classe bebida
* @author Trecios
* @since 28/05/2018
* @sa http://www.google.com/
*/
#ifndef BEBIDA_H
#define BEBIDA_H

#include "produto.h"

class Bebida : public Produto
{
public:
	/** @brief Construtor, construtor parametrizado e destrutor */
	Bebida();
	Bebida(std::string _codigo, std::string _descricao, short _preco, 
			short _teor_alcoolico);
	~Bebida();
private:
	/** @brief Variável adicional para melhor implementação da classe */
	short m_teor_alcoolico;
public:
	/** @brief Retorna o teor alcoólico da bebida */
	short getTeorAlcoolico();
	/** @brief Muda o teor alcoólico da bebida */
	void setTeorAlcoolico(short _teor_alcoolico);
private:
	/** @brief Permite imprimir dados do produto */
	std::ostream& print(std::ostream&o) const;
};

#endif