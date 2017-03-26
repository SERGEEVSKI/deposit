#ifndef DEPOSIT_H
#define DEPOSIT_H

typedef struct {
	size_t sum;
	size_t days;
} Deposit;

#endif

Deposit * int_dep_new(size_t initial_size);
int data_checking(Deposit *dep);
int calculation_of_contribution(Deposit *dep);

