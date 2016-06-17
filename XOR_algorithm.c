/* XOR algorithm explanation 
basic 
X ← X XOR Y
Y ← X XOR Y
X ← X XOR Y
*/

/* typical swap algorithm */
int A = 5;
int B = 23;
int temp; // the declaration of a variable temp costs 4 bytes of memory

temp = A;
A = B;
B = temp;


/* code below doesn't use extra memory */

int A = 5;
int B = 23;

A = A ^ B;
B = A ^ B;
A = A ^ B;


// how does it work?? 

int A = 5;
int B = 23;

A = A ^ B;
B = A ^ B;
A = A ^ B;


// more specific 

int A = 5;           00000101
int B = 23;         00010111

A = A ^ B;         (00000101) XOR (00010111) = 00010010
B = A ^ B;         (00010010) XOR (00010111) = 00000101
A = A ^ B;         (00000101) XOR (00010010) = 00010111


/* this algorithm has side effects  
   1. code becomes hard to understand 
   2. if the memory location of two variables is same, it doesn't work. */



// one more example 

char* reverseString(char* s) 
{
      char *p1, *p2;

      if (! s || ! *s)
            return s;
      for (p1 = s, p2 = s + strlen(s) - 1; p2 > p1; ++p1, --p2) {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return s;
}
