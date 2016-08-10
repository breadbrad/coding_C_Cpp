class Shape {
public:
        void draw() { printf("shape\n"); }
};

class Circle : public Shape {
public:
        void draw() { printf ("circle\n"); }
};

Circle *circle = new Circle;
circle->draw(); // "circle" 

Shape *shape = new Circle;
shape->draw(); // "shape"

// draw() is non-virtual -> compiled like a C call

// Non-virtual functions are determined at compile-time

class Cat {
public:
        void yawn(int duration)
};

Cat cat, *pcat = new SuperCat;
cat.yawn(4);
pcat->yawn(4); 
// both use Cat::yawn because both have type Cat 
--------------------------------------------

//virtual functions are determined at run-time 
class Cat {
public:
        virtual void yawn(int duration) 
};

Cat cat, *pcat = new SuperCat;
cat.yawn(4);
pcat->yawn(4);

// pcat's type is checked every time it's called 













