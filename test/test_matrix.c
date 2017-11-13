#include <stdio.h>
#include "../src/matrix/matrix.h"

int main(void) {

  // Construct new 3x6 matrix
  MATRIX a = new_matrix(3,6);
  MATRIX b;

  puts("Initial matrix:");
  print_matrix(&a);

  puts("Modified matrix:");
  mset(&a, 0, 0, 10.0);
  mset(&a, 1, 1, 20.0);
  mset(&a, 2, 2, 30.0);
  mset(&a, 2, 3, 40.0);
  mset(&a, 1, 4, 50.0);
  mset(&a, 0, 5, 60.0);
    
   
  print_matrix(&a);

  puts("Element a(0,0):");
  print_value(mget(&a, 0, 0));
  puts("");
  puts("Element a(1,1):");
  print_value(mget(&a, 1, 1));
  puts("");

  puts("Adding a to itself:");
  b = add_matrix(&a, &a);
  print_matrix(&b);

  // Destruct matrices when done
  delete_matrix(a);
  delete_matrix(b);

  return 0;
}
