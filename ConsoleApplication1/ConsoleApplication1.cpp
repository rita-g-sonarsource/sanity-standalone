#include<memory>

int* f1(void) {
    int local_auto;
    return &local_auto; // 946 Noncompliant, returning address of an object allocated on the stack.
}

using namespace std;

class S {
public:
    explicit S(int a, int b);
};

void g(shared_ptr<S> p1, shared_ptr<S> p2);

void f() {
    g(shared_ptr<S>(new S(1, 2)), shared_ptr<S>(new S(3, 4))); // 5502 Noncompliant: 2 resources are allocated in the same expression statement
}