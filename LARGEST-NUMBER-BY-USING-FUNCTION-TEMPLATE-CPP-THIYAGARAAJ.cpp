// Header Files
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

// Template Declaration

template<class T>

// Template Function
T getMaximun(T x, T y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int a, b, i;
    float c, d, j;

    cout << "Function Template Programs : Get Maximum Number \n";
    cout << "Enter A,B values(integer):";
    cin >> a>>b;
    i = getMaximun<int>(a, b);
    cout << "Result Max Int : " << i;

    cout << "\n\nEnter C,D values(float):";
    cin >> c>>d;
    j = getMaximun<float>(c, d);
    cout << "Result Max Float : " << j;

    getch();
    return 0;
}