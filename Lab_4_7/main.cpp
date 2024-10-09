
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double xp, xk, dx, x, eps, a, R = 0, S = 0;
    int n;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "----------------------------------" << endl;
    cout << "|" << setw(7) << "x|"
         << setw(11) << "e^(x^2)|"
         << setw(11) << "Sum|"
         << setw(4) << "n|" << endl;
    cout << "----------------------------------" << endl;

    for (x = xp; x <= xk; x += dx)
    {
        n = 0;
        a = 1.0;
        S = a;
        do
        {
            n++;
            R = (x * x) / n;
            a *= R;
            S += a;
        } while (abs(a) >= eps);

        cout << "|" << setw(6) << setprecision(2) << x << "|"
             << setw(10) << setprecision(3) << exp(x * x) << "|"
             << setw(10) << setprecision(3) << S << "|"
             << setw(3) << n << "|" << endl;
    }
    cout << "----------------------------------" << endl;
    return 0;
}
