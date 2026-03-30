#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    return 2 * pow(x, 2) - 2 * x + 5 / 2;
}
void MethodDihtomy(int a, int b, int l, double e)
{
    double a0 = a, b0 = b;
    int k = 0;
    double y, z, fy, fz;
    for (; (b0 - a0) > l; k++)
    {
        cout << "иру " << k << " L [" << a0 << " ; " << b0 << "]" << endl;
        y = (a0 + b0 - e) / 2;
        z = (a0 + b0 + e) / 2;
        cout << "y" << k << " = " << y << endl;
        cout << "z" << k << " = " << z << endl;
        fy = func(y);
        fz = func(z);
        cout << "f(y" << k << ") = " << fy << endl;
        cout << "f(z" << k << ") = " << fz << endl;
        if (fy <= fz) b0 = z;
        if (fy > fz) a0 = y;
    }
    cout << "L" << k << " = [" << a0 << "; " << b0 << "]" << endl;
    double x = (a0 + b0) / 2;
    double fx = func(x);
    cout << "x* = " << x << ", f(x*) = " << fx << endl;
}

int main()
{
    setlocale(LC_ALL, "RU");
    double a = -1, b = 9;
    double l = 1;
    double e = 0.1;
    MethodDihtomy(a, b, l, e);

}