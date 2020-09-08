#include<iostream>  

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    double h, imt, m;

    cout << "Возраст: " << endl;
    cin >> a;
    cout << "Масса тела (кг): " << endl;
    cin >> m;
    cout << "Рост (м): " << endl;
    cin >> h;
    imt = m / (h * h);

    if (a > 18 && a < 30)
    {
        if (imt < 19.5) cout << "Дефицит массы тела.";
        else if (imt > 19.5 && imt < 22.9) cout << "Норма.";
        else cout << "Избыток массы тела.";
    }
    else
    {
        if (imt < 20) cout << "Дефицит массы тела.";
        else if (imt > 20 && imt < 25.9) cout << "Норма.";
        else cout << "Избыток массы тела.";
    }
    return 0;
}