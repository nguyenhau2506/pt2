#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Hay nhap he so a: ";
    cin >> a;
    cout << "Hay nhap he so b: ";
    cin >> b;
    cout << "Hay nhap he so c: ";
    cin >> c;
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
                cout << "Phuong trinh co vo so nghiem";
            else 
                cout << "Phuong trinh vo nghiem";
        }
        else
            cout << "Phuong trinh co nghiem x = " << -c/b;
    }
    else
    {
        double x, delta;
        delta = pow(b,2)-4*a*c;
        x = -b/(2*a);
        if (delta < 0)
            cout << "Phuong trinh vo nghiem";
        if (delta == 0)
            cout << "Phuong trinh co 1 nghiem kep x = " << x;
        if (delta > 0)
        {
            double x1, x2;
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            cout << "Phuong trinh co 2 nghiem x1 = " << x1 << " va x2 = " << x2;
        }
    }
    return 0;    
}