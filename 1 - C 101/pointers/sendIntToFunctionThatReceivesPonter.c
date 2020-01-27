#include <stdio.h>
#include <stdlib.h>

void f(int * x){
  *x = 5;
}

int main(){

  int a = 0;

  f(&a);
  printf("%d",a);

  return 0;

}
