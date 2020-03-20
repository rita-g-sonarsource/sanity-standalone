#include<memory>

int* f1(void) {
    int local_auto;
    return &local_auto; // 946 Noncompliant, returning address of an object allocated on the stack.
}

static const char str[] = "(Date should be in the form ??-??-??)"; // Noncompliant. Evaluates to "(Date should be in the form ~~]"