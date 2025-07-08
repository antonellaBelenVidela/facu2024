#include <iostream>
using namespace std;

struct Alumno
{
    int legajo;
    string apellidoNombre;
    int nota;
};

void leer(string mensaje, int &valor) {
    cout << mensaje;
    cin >> valor;
    return;
}

int buscarSecuencial(int vec[], int cant, int valor)
{
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == valor)
        {
            return i;
        }
    }
    // Si no salio todavia, es que no estaba en el vector
    return -1;
}

int buscarSecuencial(Alumno vec[], int cant, int legajo)
{
    for (int i = 0; i < cant; i++)
    {
        if (vec[i].legajo == legajo)
        {
            return i;
        }
    }
    // Si no salio todavia, es que no estaba en el vector
    return -1;
}

void imprimir(Alumno alumno) {
    cout << "Legajo:" << alumno.legajo << endl;
    cout << "Apellido Nombre:" << alumno.apellidoNombre << endl;
    cout << "Nota:" << alumno.nota << endl;
}

void imprimir(Alumno alumnos[], int cant) {
    for (size_t i = 0; i < cant; i++)
    {
        imprimir(alumnos[i]);
    }
}

int main()
{
    int vector[] = {11, -1, -23, 0, 1, 4, 5, -23, 7, 9, 10};

    int dato = -100;
    int resultado = buscarSecuencial(vector, 11, dato);
    if (resultado >= 0)
    {
        cout << "El valor " << vector[resultado] << " esta en el vector en la posicion " << resultado << endl;
    }
    else
    {
        cout << "El valor " << dato << " no esta en el conjunto" << endl;
    }

    Alumno alumnos[5] = {{117090, "Pepe", 9}, {10900, "Juan", 9}, {12323, "Laura", 7}, {1114444, "Veronica", 5}, {23233, "Martin", 9}};
    //imprimir(alumnos, 5);
    int legajo;
    leer("Ingrese el legajo que esta buscando:", legajo);
    int posLegajo = buscarSecuencial(alumnos, 5, legajo);
    if(posLegajo >= 0) {
        imprimir(alumnos[posLegajo]);
        int nota;
        leer("Ingrese la nueva nota:", nota);
        alumnos[posLegajo].nota = nota;
    } else {
        cout << "No esta cargado el alumno con legajo " << legajo << endl;
    }

    cout << "Alumnos actualizados!" << endl;
    imprimir(alumnos, 5);
    

    system("pause");
    return 0;
}