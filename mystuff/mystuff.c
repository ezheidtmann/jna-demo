#include <stdio.h>
#include <stdlib.h>

typedef struct MyStruct MyStruct;

struct MyStruct {
  int N;
  float F;
  int size;
  float *A;
};

MyStruct* createThing(int size) {
  MyStruct* s = (MyStruct*) malloc(sizeof(struct MyStruct));
  s->N = 0;
  s->F = 0.f;
  s->size = size;

  s->A = (float*) malloc(sizeof(int) * size);

  for (int i = 0; i < size; ++i) {
    s->A[i] = 0.f;
  }

  return s;
}

void updateThing(MyStruct* s, int newN, float newFloat, float* values)
{
  s->N = newN;
  s->F = newFloat;

  for (int i = 0; i < s->size; ++i) {
    s->A[i] = values[i];
  }
}

void printThing(MyStruct* s) {
  printf("s->N: %d\n", s->N);
  printf("s->F: %f\n", (double) s->F);

  for (int i = 0; i < s->size; ++i) {
    printf("s->A[%d]: %f\n", i, (double) s->A[i]);
  }
}
