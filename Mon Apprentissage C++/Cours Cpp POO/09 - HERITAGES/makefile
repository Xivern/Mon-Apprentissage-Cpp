# Makefile

# $@ represents the list of targets
# $ˆ represents the list of dependencies
# $< represents the file name without a suffix
# $* represents the list of dependencies
# $? represents the list of dependencies more recent than the target

# We can now write $(CC) instead of gcc
CC=g++
# Contains compilation options
CFLAGS=-W -Wall -ansi -pedantic -g
# will include the headers used by our .cpp files
INC=-I Headers/
# contains the path to the source files (sans "/")
SRC=Sources
# executable name
EXEC=main
 
all: $(EXEC)																	#We execute line 17 of our makefile

main: 	$(SRC)/main.cpp $(SRC)/Personnage.o	$(SRC)/Guerrier.o $(SRC)/Mage.o		#creation of the main file + .o files
	$(CC) $(INC) -o $(EXEC) $^ $(CFLAGS)

$(SRC)/%.o : $(SRC)/%.cpp														#Can be translated as : gcc -I include/ -o ChainList.o -c ChainList.c -W -Wall...
	$(CC) $(INC) -o $@ -c $< $(CFLAGS) 

launch:																			#make launch execute the program
	.\$(EXEC).exe

clean:																			#make clean deletes all .o files
	del $(SRC)\*.o