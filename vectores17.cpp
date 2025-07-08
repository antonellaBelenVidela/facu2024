/*Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes de
una matriz MATRIZA de M filas y N columnas. Desarrollar un programa que:
a) Imprima la matriz MATRIZA por columnas.
b) Calcule e imprima el valor promedio de los componentes de la matriz.
c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna
homóloga.
d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada
fila.*/

#include <iostream>
using namespace std;

int main () {
    
    int M, N;
    cout << "Ingrese las filas: ";
    cin >> M;
    cout << "Ingrese las columnas: ";
    cin >> N;

    int MATRIZA[M][N];

    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++) {
            cout << "Ingrese un numero: ";
            cin >> MATRIZA[i][j];
        }
    }

    // por filas
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            cout << MATRIZA[i][j] << " ";
        }
        cout << endl;
    }

    // por columna
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << MATRIZA[j][i] << " ";
        }
        cout << endl;
    }

    // b
    float acumulador=0, contador=0;

    for (int i = 0; i<M; i++) {
        for (int j=0; j<N; j++) {
            acumulador+=MATRIZA[i][j];
            contador++;
        }
    }

    cout << "El promedio de los componentes de la matriz es: " << acumulador/contador << endl;

    // c
    int VECSUMCOL[N]={0};

    for (int j=0;j<N; j++) {
        for (int i=0;i<M;i++){
            VECSUMCOL[j]+=MATRIZA[i][j];
        }
    }
    

    for (int i=0;i<N;i++) {
        cout << VECSUMCOL[i] << endl;
    }

    // d
    int VECMAXFIL[M];
    int maximo;

    for (int f=0; f<M; f++) {
        for (int c=0; c<N; c++) {
            if (MATRIZA[f][c]>maximo || c==0) {
                maximo=MATRIZA[f][c];
            }
        }
        VECMAXFIL[f]=maximo;
    }

    for (int i=0;i<N;i++) {
        cout << VECMAXFIL[i] << endl;
    }

    return 0;
}