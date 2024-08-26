# Makefile

all:	main.exe

main.exe:	Salutation.o main.o
			g++ Salutation.cpp main.cpp -o main.exe

ModifTableau.o:	Salutation.cpp
		g++ -c Salutation.cpp
		echo "Processing Salutation.cpp"

main.o:	main.cpp
		g++ -c main.cpp
		echo "Processing main.cpp"

print:	$(wildcard *.cpp)
		dir $?

clean:	
	del *.o