# Makefile

run:	main.exe
		.\main.exe

main.exe:	math.o InfoUtilisateur.o main.o
			g++ math.cpp InfoUtilisateur.cpp main.cpp -o main.exe

math.o:	math.cpp
		g++ -c math.cpp
		echo "Processing math.cpp"

InfoUtilisateur.o:	InfoUtilisateur.cpp
					g++ -c InfoUtilisateur.cpp
					echo "Processing InfoUtilisateur.cpp"

main.o:	main.cpp
		g++ -c main.cpp
		echo "Processing main.cpp"

print:	$(wildcard *.cpp)
		dir $?

clean:	
	del *.o