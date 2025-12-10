#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
double t, x;
double A = 1.0;
double gamma = 0.1;
double omega = 2.0 * M_PI;
double dt = 0.01;
double t_max = 5.0;

FILE * fp ;
fp = fopen ("damped_osc.dat", "w");


 if ( fp == NULL ) {
 printf (" Error : Tidak bisa membuat file .\n") ;
 exit (1) ;
}

fprintf ( fp , "# Waktu (s)\tPosisi (m)\n") ;
 
for ( t = 0; t <= t_max ; t += dt ) {
x = A * exp ( - gamma * t ) * cos ( omega * t ) ;

fprintf ( fp , "%.4lf\t%.4lf\n", t , x ) ;
}
 
fclose(fp);

printf("Data berhasil disimpan ke 'damped_osc.dat'.\n");

return 0;
}