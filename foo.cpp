#include "foo.h"

void foo::call() {
    return;
}

int foo::pull() {
    return 1;
}

int foo::push() {
    return 0;
}

void f(int i)
{
    auto m = foo();
    m.call();
    m.push();
}