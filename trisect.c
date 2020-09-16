#include <math.h>
#include <stdio.h>

#define N_SEGMENTS 3

const double SMALL_C = 2.5;
const double BIG_C = 5.0;
const double LENGTH = 18.0;

double VOLUME;
double TAN_THETA;

static inline double pow2(double a) { return a * a; }

static inline double pow3(double a) { return a * a * a; }

static inline double frustum_volume(double h, double a, double b) {
    return h * (pow2(a) + a * b + pow2(b)) / (12 * M_PI);
}

static inline void get_length(double* l, double* c) {
    *(c + 1) =
        cbrt(24 * pow2(M_PI) * TAN_THETA * VOLUME / N_SEGMENTS + pow3(*c));
    *l = (*(c + 1) - *c) / (2 * M_PI * TAN_THETA);
}

int main(void) {
    double l[N_SEGMENTS] = {0};
    double c[N_SEGMENTS + 1] = {SMALL_C, 0};

    VOLUME = frustum_volume(LENGTH, SMALL_C, BIG_C);
    TAN_THETA = BIG_C / (2 * M_PI * LENGTH / (1 - SMALL_C / BIG_C));

    printf("Splitting log into %d segments with:\n", N_SEGMENTS);
    printf("    Small Circum. : %.5g\n", SMALL_C);
    printf("    Large Circum. : %.5g\n", BIG_C);
    printf("    Length        : %.5g\n", LENGTH);
    printf("    Volume        : %.5g\n\n", VOLUME);

    double sum_length = 0;
    double sum_volume = 0;

    for (size_t i = 0; i < N_SEGMENTS; i++) {
        get_length(l + i, c + i);
        printf("Length of segment %lu: %.5lf\n", i + 1, l[i]);

        sum_length += l[i];
        sum_volume += frustum_volume(l[i], c[i], c[i + 1]);
    }

    printf("%s", "\n");

    printf("Sum of segments: %g\n", sum_length);
    printf("Volume of segments: %g\n", sum_volume);

    return 0;
}
