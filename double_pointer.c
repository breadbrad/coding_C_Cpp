/* pointers */
#include <stdio.h>

int main(){
	int a = 10;
	int *p1; // int type pointer 
	int *p2; // int type double pointer 

	p1 = &a; // p1 references a
	p2 = &p1; // p2 references p1 

	printf("%d\n", *p1);
	printf("%d\n", **p2);
}

	// example below 

	char **sharedQueue = NULL;

	//Create an array of characters used as sharedQueue[queue_size][64]
	sharedQueue = (char **) malloc(queue_size * sizeof(char*));
	for(int i = 0; i< queue_size; i++)
		sharedQueue[i] = (char *) malloc(64 * sizeof(char));