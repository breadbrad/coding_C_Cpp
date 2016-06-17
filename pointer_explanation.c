/* pointer : Since the variables declared in different functions have different memory space,
it's not able to use the variables directly. In this situation, pointers allow users to use the 
the address of variable value as a tool to control */

//example of memory allocation 

int a;
int *p;
p = (int *) malloc(sizeof(int));
free(p); // if you don't free p, it causes the dangling pointer problem 
p = (int *) malloc(20 * sizeof(int));
//  p can be used as an array like below 
//  p[i] = *(p + i) 
//  p[0], p[1], p[2] -> *p, *(p+1), *(p+2)

