#include<iostream>  

using namespace std;


int main()
{

    int ans;

    cout << "How old are you? ";
    cin >> ans;
    cout << endl;

    if (ans > 21) cout << "Oh, you're older than me!";
    else if (ans == 21)  cout << "Oh, you're the same age as me!";
    else cout << "Oh, you're younger than me!";
    return 0;
}