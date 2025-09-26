#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    float L; 
    int r2; int r1; int x0; int y0; int x; int y;

    cout << "Введите две координаты(x0, y0) для центры окружности: "; cin >> x0 >> y0;
    cout << "Введите радиус кольца(r1, r2): "; cin >> r1 >> r2;
    cout << "Введите координаты точки(x, y): "; cin >> x >> y;
    
    L = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    
    if (L <= r2 && L >= r1) {
        cout << "Точка L прнинадлежит кольцу";
    }
    else {
        cout << "Точка L не прнинадлежит кольцу";
    }

    return 0;
}

