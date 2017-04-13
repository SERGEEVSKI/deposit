.PHONY: all clean test

all: depcalc deposit-calc-test

depcalc: build/src/main.o build/src/Deposit.o
	gcc build/src/main.o build/src/Deposit.o -o bin/depcalc

build/src/Deposit.o : src/Deposit.c
	gcc -Wall -Werror -c src/Deposit.c -o build/src/Deposit.o

build/src/main.o : src/Lab2.c
	gcc -Wall -Werror -c src/Lab2.c -o build/src/main.o

test:deposit-calc-test

deposit-calc-test:build/test/main.o build/test/deposit_test.o build/src/Deposit.o
	gcc build/test/main.o build/test/deposit_test.o build/src/Deposit.o -o bin/deposit-calc-test	

build/test/deposit_test.o: test/deposit_test.c
	gcc -I thirdparty -I src -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o: test/main.c
	gcc -I src -I thirdparty -Wall -Werror -c test/main.c -o build/test/main.o

clean:
	rm -rf build/src/*.o build/test/*.o bin/* 
