// multiple inheritance 
class Color {
public: virtual void print();
};

class Mood {
public: virtual void print();
};

class Blue : public Color, public Mood{
public:
        virtual void print() {
                this->Color::print();
                this->Mood::print();
        }
};
