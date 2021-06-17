#ifndef __FOO
#define __FOO

class foo {
public:
    void call();
    int push();
    int pull();
};

extern "C" void f(int);

#endif