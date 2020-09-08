#include<iostream>  

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;

    cout << "Год рождения: " << endl;
    cin >> a;
    cout << "Тебе " << 2020 - a << ".";

    return 0;
}