#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(){
  struct schedule s = example();
  print(s);
  modify(&s, "SoftDev", 11);
  print(s);
  return 0;
}
