struct ver2 {
        vec(float x, float y) : x(x), y(y) {} 
                float x, y;
};

int main () {
        vec2 a(1, 0);
        ver2 b(1, 3);
        ver2 c = a + b; // compile error 
================================================
vec2 vec2::add(const vec2 &o) {
        return vec2(x + o.x, y + o.y);
}

int main() {
        vec2 a(1, 0) , b(1, 3);
        vec2 c = a.add(b);
}
===============================================
vec2 vec2::operator+(const vec2 &o) {
        return vec2(x + o.x, y + o.y);
}

int main() {
        vec2 a(1, 0), b(1, 3);
        vec2 c = a + b;
        vec2 d = a.operator+(b)
} 
===============================================
vec operator +(vec2 &v, const vec2 &o) {
        return vec2(x + o.x, y + o.y);
}

int main () {
        vec2 a(1, 0), b(1, 3);
        vec2 c = a + b;
}

