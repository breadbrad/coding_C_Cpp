// slicing
struct Cow {
        void speak() {
                printf("Moo.\n");
                }
        };

struct Werecow : public Cow {
        bool transformed;
        void speak() {
                if (transformed)
                        printf("Aaoooh!\n");
                else 
                        printf("Moo.\n");
        }
};

Werecow wcow;
wcow.transformed = true;

Cow cows[2];
cows[0] = Cow();
cows[1] = wcow();

for (int i = 0; i < 2; i++)
        cows[i].speak();
wcow.speak();

// Output:
// Moo
// Moo
// Aaoooh

void poke(Cow cow){
        cow.speak();
}

Cow judy;
Werecow bev;
bev.transformed = true;

poke(judy);
poke(bev);
bev.speak();

// Output:
// Moo
// Moo
// Aaoooh! 
