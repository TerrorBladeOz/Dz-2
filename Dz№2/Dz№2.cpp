#include <iostream>

using namespace std;

void a1()
{
    setlocale(LC_ALL, "ru");

    double a, b, c, v;

    cout << "Введите певрое сопротивление, R1: "; cin >> a ;
    cout << "Введите второе сопротивление, R2: "; cin >> b;
    cout << "Введите третье сопротивление, R3: "; cin >> c;
    v = 1 / a + 1 / b + 1 / c;
    v = 1 / v;
    cout << "Нулевое сопротивление равно, R0: " << v << endl;

}
void a2()
{
    setlocale(LC_ALL, "ru");
    double  s, l, r;
    const double p = 3.14;

    cout << "Введите длину окружности: "; cin >> l ;
    cout << "Длина окружности находятся по формуле L = 2 * PI * R,\n а R мы найдем по формуле R = L / (2 * PI)\n";
    r = l / (2 * p);
    cout << "Радиус равен: " << r << "\n";
    s = p * r * r;
    cout << "Площадь вычислим по формуле S = PI * R * 2 и она равна: " << s << endl;

}

void a3()
{
    setlocale(LC_ALL, "ru");
    double  v, t, a, s;
    cout << "Введите скорость, V: "; cin >> v;
    cout << "Введите время, T: "; cin >> t;
    cout << "Введите ускорение, A: "; cin >> a;
    s = v * t + (a * t * t) / 2;
    cout << "Пройденное расстояние при прямолинейном равноускоренном движении равно = " << s << endl;
}

void main()
{
    setlocale(LC_ALL, "ru");
    int f;
    do {
        cout << "\nВведите номер задания от 1 до 3, чтобы закончить работу напишите ноль >>> "; cin >> f; cout << "\n";
        switch (f)
        {
        case 0:
            cout << "\nВы вышли из программы!\n";
            break;
        case 1:
            a1();
            break;
        case 2:
            a2();
            break;
        case 3:
            a3();
            break;
        default:
            cout << "Попробуйте еще раз!!\n";
            break;
        }
    } while (f != 0);
}