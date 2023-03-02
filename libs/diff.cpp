#include "diff.h"

void fdm(vector <vector <double>> &c, double h, double tau, int size) {
    for (int i = 1; i < size - 1; i++) {
        c[1][i] = ((D0*tau)/(h*h))*(c[0][i+1] - 2*c[0][i] + c[0][i-1]) + c[0][i];
    }

    for (int i = 1; i < size - 1; i++) {
        c[0][i] = c[1][i];
    }
}