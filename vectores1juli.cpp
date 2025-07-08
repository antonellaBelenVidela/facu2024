#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Ingrese el tamanio del vector menor a 25: ";
    cin >> n;

    int vector[n];

    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        vector[i] = cont;
        cont += 2;
    }

    for (int j = 0; j < n; j++)
    {
        cout << vector[j] << endl;
    }


    system("pause");
    return 0;
}