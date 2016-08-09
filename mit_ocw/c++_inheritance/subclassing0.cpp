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

