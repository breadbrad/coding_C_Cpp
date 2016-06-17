#include <stdio.h>
void call_by_ref(int *a);
void call_by_value(int a);
void what_if(int *a);


int main(int argc, char *argv[])
{
	 int a = 10;
	 int b = 10;
	 int c = 10;
	 
	 call_by_ref(&a); // call by reference 
	 printf("%d\n", a);
	 call_by_value(b); // call by value 
	 printf("%d\n", b);
	 what_if(&c);
	 printf("%d\n", c);
}

void call_by_ref(int *a){
 *a += 10;
}

void call_by_value(int a) {
 a += 10;
}

void what_if(int *a){
	a += 10;
}