# Makefile

all:	main.exe

main.exe:	Comptablilite.o VerifyInput.o main.o
			g++ Comptablilite.cpp VerifyInput.cpp main.cpp -o main.exe

Comptablilite.o:	Comptablilite.cpp
		g++ -c Comptablilite.cpp
		echo "Processing Comptablilite.cpp"

VerifyInput.o :	VerifyInput.cpp
		g++ -c VerifyInput.cpp
		echo "Processing VerifyInput.cpp"

main.o:	main.cpp
		g++ -c main.cpp
		echo "Processing main.cpp"

print:	$(wildcard *.cpp)
		dir $?

clean:	
	del *.o