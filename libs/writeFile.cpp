#include "diff.h"

// Функция записи в файл
void writeFile(vector <vector <double>> &c, double h, int size) {
    FILE *fp1 = fopen("output_C2h.dat","w");
    double x = 0;
    
    for (int i = 0; i < size; i++) {
        fprintf(fp1,"%f\t%f\n", x, c[0][i]*1E-16);
        x += h;
    }
    
    fclose(fp1);
}