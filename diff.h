#ifndef DIFF
#define DIFF

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double D0 = 7*1E-13; // Коэффициент диффузии см^2 / c
const double T = 3*3600;  // Время диффузии (c)
const double Nd = 1E16;  // Концентрация доноров в исходном материале (см^-3)
const double C0 = 1E18; // Поверхностная концентрация диффундирующей примеси (cм^-3)

void fdm(vector <vector <double>> &c, double h, double tau, int size);
void writeFile(vector <vector <double>> &c, double h, int size);

#endif