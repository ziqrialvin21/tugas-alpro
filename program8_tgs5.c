#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

double gaussian(double x, double center, double height, double width) {
    return height * exp(-pow(x - center, 2) / (2 * width * width));
}

int main() {
    FILE *fp = fopen("raw_xrd.dat", "w");

    fprintf(fp, "Instrument: Diffractometer - X2000\n");
    fprintf(fp, "Date: 2023-10-27\n");
    fprintf(fp, "Sample: Silicon Powder\n");
    fprintf(fp, "Mode: Continuous Scan\n");
    fprintf(fp, "Angle (2 theta)\tIntensity (counts)\n");

    double theta, intensity;
    double noise;

    srand(time(0));

    for (theta = 10.0; theta <= 80.0; theta += 0.1) {
        intensity = 50.0;

        intensity += gaussian(theta, 28.4, 1000.0, 0.5);
        intensity += gaussian(theta, 47.3, 600.0, 0.6);
        intensity += gaussian(theta, 56.1, 400.0, 0.5);

        noise = (rand() % 20) - 10;
        intensity += noise;

        if (intensity < 0) intensity = 0;

        fprintf(fp, "%.2lf\t%.0lf\n", theta, intensity);
    }

    fclose(fp);
    printf("Data XRD simulasi telah dibuat: raw_xrd.dat\n");
    return 0;
}