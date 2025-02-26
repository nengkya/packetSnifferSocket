#include "stdio.h" /* FILE * */


FILE * logFile;


int main() {


	// FILE * fopen(const char * filename, const char * mode);
	logFile = fopen("log.txt", "w");

	/*
	the return value of the fopen(); is pointer to FILE structure if the file opens successfully,
	NULL pointer if the file opening fails
	*/
	if (0 == logFile) printf("Unable to create file !");

	printf("Create a raw socket that shall sniff ...\n");



}
