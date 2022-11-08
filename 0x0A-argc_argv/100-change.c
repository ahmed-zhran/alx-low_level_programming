/*
 * File: 2-args.c
 * Auth: Zhran
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change for an amount of money.
 * @argc: var
 * @argv: var
 * Return: value
 */

int main(int argc, char *argv[])
{
	int no, sum = 0, tmp = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	no = atoi(argv[1]);
	if (no <= 0)
	{
		printf("0\n");
		return (0);
	}
	if (no >= 25){
        	tmp = no / 25;
	        sum += tmp;
        	no -= (tmp * 25);
    	}
    	if (no >= 10){
        	tmp = no / 10;
        	sum += tmp;
	        no -= (tmp * 10);
	}
	if (no >= 5){
	        tmp = no / 5;
	        sum += tmp;
	        no -= (tmp * 5);
	}
	if (no >= 2){
        	tmp = no / 2;
        	sum += tmp;
        	no -= (tmp * 2);
    	}
    	if (no >= 1){
        	tmp = no / 1;
        	sum += tmp;
        	no -= (tmp * 1);
    	}
	printf(sum);
	return (0);
}
