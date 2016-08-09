
// Subclassing : inherit fields from the parent 
class Shape {
public:
        int x, y;
};

class Circle : public Shape {
public:
        int radius;
};

int main() {
        Circle circle;
        circle.x = 5;
}
---------------------------------------
class Shape {
public:
        int x;
private:
        int y; // only accessible in Shape class 
};

void Circle::foo() {
        printf("%d" x);
        printf("%d",y); // compile error 
}

-----------------------------------------

class Shape {
public:
        int x;
protected:
        int y; // accessible in Shape class 'and' in subclasses
};

void Circle::foo() {
        printf("%d", x);
        printf("%d", y);
}

int main () {
        Circle circle;
        circle.x = 0; // compile error 
}

