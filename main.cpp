#include "diff.h"

int main()
{
    // Входные данные
    double h = 1E-6; // Шаг по x(cм)
    double tau = 0.5; // Шаг по t(c)

    // Условие устойчивости
    if (tau > (h*h)/(2*D0)) {
        cout << "Numerical's unstability" << endl;
        return 1;
    }

    // Определение области решения
    // c учетом глубины диффузии
    double L = 10*sqrt(D0*T); // (см) 

    int ArrSize = round(L/h); // Кол-во узлов по оси x
    int M = round(T/tau); // Кол-во временных слоев

    vector <vector <double>> c(2, vector <double>(ArrSize, 0));

    // Граничные условия
    c[0][0] = C0; c[1][0] = C0;
    
    // Тело программы
    double j = 0;
    while (M >= j) {
        fdm(c, h, tau, ArrSize);
        j++;
    }

    
    writeFile(c, h*1E4, ArrSize);

    return 0;
}