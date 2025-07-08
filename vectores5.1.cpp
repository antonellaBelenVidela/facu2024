#include <iostream>
using namespace std;

int main () {
 
 int N = 0;

 cout << "N: ";
 cin >> N;

 int UNO[N];
 int DOS[N];
 int TRES[N];

cout << "Llene vec UNO: ";
for (int i = 0; i < N; i++)
{
    cout << "Ingrese valor: ";
    cin >> UNO[i];

    if (i % 2 == 0)
    {
        TRES[i] = UNO[i];
    }
}

cout << "Llene vec DOS: ";
for (int i = 1; i <= N; i++)
{
    cout << "Ingrese valor: ";
    cin >> DOS[i];

    if (i % 2 != 0)
    {
        TRES[i] = DOS[i];
    }
}

cout << "Muestro vec TRES: ";
for (int i = 0; i < N; i++)
{
    cout << TRES[i] << " - ";
}



system("pause");
 return 0;
}