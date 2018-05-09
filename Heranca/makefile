#Makefile for "prog" C++ application
#Created by Hand 08/05/2018

PROG = bin/prog
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11 -Iinclude
OBJS = main.o produto.o produto_derivado.o produtos_duraveis.o produtos_nao_duraveis.o deposito.o menu.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : 
	$(CC) $(CPPFLAGS) -c src/main.cpp

produto.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produto.cpp

produto_derivado.o : include/produto_derivado.hpp
	$(CC) $(CPPFLAGS) -c src/produto_derivado.cpp

produtos_duraveis.o : include/produtos_duraveis.hpp
	$(CC) $(CPPFLAGS) -c src/produtos_duraveis.cpp

produtos_nao_duraveis.o : include/produtos_nao_duraveis.hpp
	$(CC) $(CPPFLAGS) -c src/produtos_nao_duraveis.cpp

deposito.o : include/deposito.hpp
	$(CC) $(CPPFLAGS) -c src/deposito.cpp

menu.o : include/menu.hpp
	$(CC) $(CPPFLAGS) -c src/menu.cpp

clean:
	rm -f $(PROG) build/*.o

	