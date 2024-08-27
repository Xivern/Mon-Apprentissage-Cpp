# Makefile

all:	main.exe

main.exe:	Geometrie.o main.o
			g++ Geometrie.cpp main.cpp -o main.exe

ModifTableau.o:	Geometrie.cpp
		g++ -c Geometrie.cpp
		echo "Processing Geometrie.cpp"

main.o:	main.cpp
		g++ -c main.cpp
		echo "Processing main.cpp"

print:	$(wildcard *.cpp)
		dir $?

clean:	
	del *.o