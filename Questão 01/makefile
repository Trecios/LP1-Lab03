PROG = compras

#Compilador
CC=g++

RM = rm -f core

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

#Variaveis para os subdiretorios
INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin

OBJ = ./build/main.o ./build/produto.o ./build/fruta.o ./build/bebida.o ./build/roupa.o

$(PROG) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$@ $^

$(OBJ_DIR)/main.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/main.cpp -o $@

$(OBJ_DIR)/produto.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/produto.cpp -o $@

$(OBJ_DIR)/fruta.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/fruta.cpp -o $@

$(OBJ_DIR)/bebida.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/bebida.cpp -o $@

$(OBJ_DIR)/roupa.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/roupa.cpp -o $@

clean:
	$(RM) $(BIN_DIR)/compras
	$(RM) $(OBJ_DIR)/*