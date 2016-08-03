/* templates are syntax for making code more flexible 
 * like Java's generic */
template <class typeParam> 
typeParam max(typeParam a, typeParam b) {
	return (a > b ? a : b);
}

int main () {
	int a = 3, b = 7;
	double c = 5.5, d = 1.5;
	printf("%d\n", max(a, b)); // 7
	printf("%f\n", max(c, d)); // 5.5 
}

