# makefile do projeto corrida de sapos
project_name = ex

VPATH = src:build

# Arquivos .o
o_archives = build/Sapo.o build/Corrida_Sapos.o build/main.o

# Arquivos .cpp

# flags/ etiquetas para o Compilador
CXXFLAGS =-O0         \
         -Wall      \
         -std=c++11  \
         -I include   \
         -o

CPPFLAGS =-O0         \
         -Wall      \
         -std=c++11  \
         -I include   

text = 	"Como executar o programa: ./ex"



#Os objetivos all, main.o e Sapo.o são para a compilação
all: $(project_name)
	@echo $(text)

vpath
$(project_name): $(o_archives)
	$(CXX) $(CPPFLAGS) $(o_archives) -o $(project_name)

vpath %.o build

build/main.o: main.cpp

build/Sapo.o: Sapo.cpp

build/Corrida_Sapos.o: Corrida_Sapos.cpp


#Remove os arquivos .o da pasta
clean:
	rm -rf *.o
	rm -rf src/*.o
	rm -rf build/*.o