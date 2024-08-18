# Makefile

all:	main.exe

main.exe:	ModifTableau.o main.o
			g++ ModifTableau.cpp main.cpp -o main.exe

ModifTableau.o:	ModifTableau.cpp
		g++ -c ModifTableau.cpp
		echo "Processing ModifTableau.cpp"

main.o:	main.cpp
		g++ -c main.cpp
		echo "Processing main.cpp"

print:	$(wildcard *.cpp)
		dir $?

clean:	
	del *.o