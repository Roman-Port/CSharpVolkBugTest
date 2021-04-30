#include "test.h"
#include <stdio.h>

void TestB() {
    //This represents the post-initialization kernel code
    printf("TestB called");
}

static inline void TestA() {
    //This represents the initialization code that is only called on first run to pick the best implementation
    //Pretend there's some important step here of figuring out what implementation to use. Instead, we're going to assign it
    Test = &TestB;
}

p_test Test = &TestA;

