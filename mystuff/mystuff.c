#include <stdio.h>
#include <stdlib.h>

typedef struct MyStruct MyStruct;

struct MyStruct {
  int N;
  float F;
};

MyStruct* createThing() {
  MyStruct* s = (MyStruct*) malloc(sizeof(struct MyStruct));
  s->N = 0;
  s->F = 0.f;
  return s;
}

void updateThing(MyStruct* s, int newN, float newFloat)
{
  s->N = newN;
  s->F = newFloat;
}

void printThing(MyStruct* s) {
  printf("s->N: %d\n", s->N);
  printf("s->F: %f\n", (double) s->F);
}
