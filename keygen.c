// Tim Kelly
// CS344 - Assignment 4
// 3/7/2019
// This program creates a key file of specified length. Characters will
// be any of 27 characters (26 capital letters and space characters)

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// define total characters allowed
#define CHAR_SIZE 27 

int main(int argc, char *argv[]) {
	// create key array holding characters
	char keyArr[] = "ABCDEFGHIJKLMNOPQESTUVWXYZ "; 
	srand(time(NULL)); 
	
	// create key size int
	int size; 
	// creates with enough space with newline
	char key[size + 1]; 

	// take length of input
	size = atoi(argv[1]); 

	int i; 
	for (i = 0; i < size; i++) { 
		int randomKey; 
		randomKey = rand() % CHAR_SIZE; 
		key[i] = keyArr[randomKey];
	} 

	// add NULL terminator to key
	key[size] = '\0'; 
	
	printf("%s", key); 
	return 0; 

}
