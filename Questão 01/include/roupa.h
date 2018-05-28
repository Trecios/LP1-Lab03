/**
* @file roupa.h
* @brief Implementação da classe roupa
* @author Trecios
* @since 28/05/2018
* @sa http://www.google.com/
*/
#ifndef ROUPA_H
#define ROUPA_H

#include "produto.h"

class Roupa : public Produto
{
public:
	/** @brief Construtor, construtor parametrizado e destrutor */
	Roupa();
	Roupa(std::string _codigo, std::string _descricao, short _preco, 
			std::string _marca, std::string _sexo, short _tamanho);
	~Roupa();
private:
	/** @brief Variáveis adicionais para melhor implementação da classe */
	std::string m_marca;
	std::string m_sexo;
	short m_tamanho;
public:
	/** @brief Retorna a marca da roupa */
	std::string getMarca();
	/** @brief Retorna o sexo alvo da roupa */
	std::string getSexo();
	/** @brief Retorna o tamanho da roupa */
	short getTamanho();
	/** @brief Muda a marca da roupa */
	void setMarca(std::string _marca);
	/** @brief Muda o sexo alvo da roupa */
	void setSexo(std::string _sexo);
	/** @brief Muda o tamanho da roupa */
	void setTamanho(short _tamanho);
private:
	/** @brief Permite imprimir dados do produto */
	std::ostream& print(std::ostream&o) const;
};

#endif