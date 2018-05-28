/**
* @file fruta.h
* @brief Implementação da classe fruta
* @author Trecios
* @since 28/05/2018
* @sa http://www.google.com/
*/
#ifndef _FRUTA_H_
#define _FRUTA_H_

#include "produto.h"

class Fruta : public Produto
{
public:
	/** @brief Construtor, construtor parametrizado e destrutor */
	Fruta();
	Fruta(std::string _codigo, std::string _descricao, short _preco, 
			std::string _data, short _validade);
	~Fruta();
private:
	/** @brief Variáveis adicionais para melhor implementação da classe */
	std::string m_data_lote;
	short m_validade;
public:
	// getters
	/** @brief Retorna a data do lote da fruta */
	std::string getDataLote();
	/** @brief Retorna a validade da fruta */
	short getValidade();
	// setters
	/** @brief Muda a data do lote da fruta */
	void setDataLote(std::string _data);
	/** @brief Muda a validade da fruta */
	void setValidade(short _validade);
private:
	/** @brief Permite imprimir dados do produto */
	std::ostream& print(std::ostream &o) const;
};

#endif