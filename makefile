# makefile do projeto corrida de sapos
project_name = ex

# Arquivos .o
o_archives = main.o Sapo.o Corrida_Sapos.o

# Compilador
cc=g++

# flags/ etiquetas para o Compilador
CC_FLAGS=-O0         \
         -Wall      \
         -g      \
         -std=c++11

text = 	"Como executar o programa: ./ex"

#Os objetivos all, main.o e Sapo.o são para a compilação
all: $(project_name)
	@echo $(text)

$(project_name): $(o_archives)
	$(cc) $(CC_FLAGS) $(o_archives) -o $(project_name)

Corrida_Sapos.o: Corrida_Sapos.cpp
	$(cc) $(CC_FLAGS) Corrida_Sapos.cpp -c

main.o: main.cpp
	$(cc) $(CC_FLAGS) main.cpp -c

Sapo.o: Sapo.cpp
	$(cc) $(CC_FLAGS) Sapo.cpp -c


#Remove os arquivos .o da pasta
clean:
	rm -rf *.o