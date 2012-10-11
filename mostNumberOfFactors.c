/*
 * File: mostNumberOfFactors.c
 *
 * Description: Given an upper range, this pogram finds 
 * then number within that range that has the most factors. This
 * is my solution to a problem in Project Euler.
 *
 * Author: Sam Alves
 *
 * gcc -Wall -std=c99 mostNumberOfFactors.c -o mostNumberOfFactors
 *
 */

#include <stdio.h>
#include <stdlib.h>


int 
getNumFactorsFor (int testNum){

	int numFactors = 0;
	
	// Get count of factors. 
	for (int i = 1; i <= testNum; i++) {
		if (!(testNum % i)) { 
			numFactors++;
		}
	}
	
	return numFactors;
}

int 
findNumWithMostFactorsUnder (int limit) {

	int numFactors = 0;
	int numWithMostFactors = 0;
	int previousNumFactors = 0;	
	
	for (int i = 1; i < limit; i++) {
		
		numFactors = getNumFactorsFor(i);
		
		if (numFactors > previousNumFactors){
			previousNumFactors = numFactors;
			numWithMostFactors = i;
		}
	}
	
	return numWithMostFactors;
}

int 
main (int argc, char *argv[]) {

	if (argc != 2) {
		printf("Usage: ./%s <aNumber>\n", argv[0]);
		return (-1);
	}
	
	int usersInput = atoi(argv[1]);
	
	int mostFactors = findNumWithMostFactorsUnder(usersInput);
	int numOfFactors = getNumFactorsFor(mostFactors);
	
	printf("Out of the digits between 1 and %d\n", usersInput);
	printf("the number %d has the most factors with %d factors.\n", mostFactors, numOfFactors); 

	return 0;
}


