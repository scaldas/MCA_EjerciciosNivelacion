#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirColumnas(int num_intervals, double delta_t, double *x, double *v);

int main() {

  double delta_t;
  double num_intervals;
  double *x;
  double *v;

  int i;

  delta_t = 0.001;
  num_intervals = (2.0 * M_PI) / delta_t;
  x = malloc(num_intervals*sizeof(double));
  v = malloc(num_intervals*sizeof(double));

  x[0] = 1;
  v[0] = 0;

  for(i = 0 ; i < num_intervals ; i++) {
    x[i+1] = x[i] + delta_t*v[i];
    v[i+1] = v[i] - delta_t*x[i];
  }

  imprimirColumnas(num_intervals, delta_t, x, v);

  free(x);
  free(v);
  return 0;
}

void imprimirColumnas(int num_intervals, double delta_t, double *x, double *v) {
  int i;
  for(i = 0; i < num_intervals; i++) {
    printf("%f\t%f\t%f\n", i*delta_t, x[i], v[i]); 
  }
}
