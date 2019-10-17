#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

struct schedule example(){
  srand(time(NULL));
  struct schedule s;
  char* classes[] = {"APES", "Modern China", "AP Gov", "AP Calc", "Writing in the World", "Systems"};
  int periods[] = {3, 4, 5, 6, 7, 10};
  int x = rand() % 6;
  strcpy(s.class, classes[x]);
  s.period = periods[x];
  return s;
}

void print(struct schedule s){
  printf("Class: %s period: %d\n", s.class, s.period);
}

void modify(struct schedule *s, char *class, int period){
  strcpy(s->class, class);
  s->period = period;
}
