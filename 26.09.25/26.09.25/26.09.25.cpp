#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    /*
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
    */

    //Задача 1 "Допуск к экзамену"
    int gr1; int gr2; int gr3; int gr4; int gr5;
    
    cout << "Введите 5 оценок для студента: "; cin >> gr1 >> gr2 >> gr3 >> gr4 >> gr5;  
    
    int res =(gr1 + gr2 + gr3 + gr4+ gr5) / 5;
    
    cout << "Средний балл студента: " << res << "\n";
    
    switch (res) {
    case 4:
    case 5:
        cout << "Студент допущен\n";
        break;
    default:
        cout << "Студент не допущен\n";
        break;
    }
    
    //Задача 2 "Чёт/не чёт"
    int number;
    double Dnumber;
    cout << "Введите число: "; cin >> number;

    switch (number%2) {
    case 0:
        number *= 3;
        cout << "Число чётное, оно будет умножено на 3" << number << "\n";
        break;
    default:
        Dnumber = number / 2.0f;
        cout << "Число не чётное, оно будет поделено на 2: " << Dnumber << "\n";
        break;
    }

return 0;
}

