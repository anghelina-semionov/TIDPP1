#include<iostream>  

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    double h, imt, m;

    cout << "�������: " << endl;
    cin >> a;
    cout << "����� ���� (��): " << endl;
    cin >> m;
    cout << "���� (�): " << endl;
    cin >> h;
    imt = m / (h * h);

    if (a > 18 && a < 30)
    {
        if (imt < 19.5) cout << "������� ����� ����.";
        else if (imt > 19.5 && imt < 22.9) cout << "�����.";
        else cout << "������� ����� ����.";
    }
    else
    {
        if (imt < 20) cout << "������� ����� ����.";
        else if (imt > 20 && imt < 25.9) cout << "�����.";
        else cout << "������� ����� ����.";
    }
    return 0;
}