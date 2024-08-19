# Makefile

all:	main.exe

main.exe:	math.o main.o
			g++ math.cpp main.cpp -o main.exe

math.o:	math.cpp
		g++ -c math.cpp
		echo "Processing math.cpp"

main.o:	main.cpp
		g++ -c main.cpp
		echo "Processing main.cpp"

print:	$(wildcard *.cpp)
		dir $?

clean:	
	del *.o