.PHONY: all clean

all: depcalc

depcalc: build/main.o build/Deposit.o
	gcc build/main.o build/Deposit.o -o bin/depcalc

build/Deposit.o : src/Deposit.c
	gcc -Wall -Werror -c src/Deposit.c -o build/Deposit.o

build/main.o : src/Lab2.c
	gcc -Wall -Werror -c src/Lab2.c -o build/main.o

clean:
	rm -rf build/*.o bin/depcalc
