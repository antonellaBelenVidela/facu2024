#include <iostream>
using namespace std;

struct Alumno
{
    int legajo;
    string apellidoNombre;
    int nota;
};

void leer(string mensaje, int &valor)
{
    cout << mensaje;
    cin >> valor;
    return;
}

int buscarBinaria(int vec[], int cant, int valor)
{
    // Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int fin = cant - 1;
    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (vec[mitad] == valor)
            return mitad;
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (vec[mitad] > valor)
        {
            fin = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}

int buscarBinaria(Alumno vec[], int cant, int legajo)
{
        // Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int fin = cant - 1;
    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (vec[mitad].legajo == legajo)
            return mitad;
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (vec[mitad].legajo > legajo)
        {
            fin = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}

void imprimir(Alumno alumno)
{
    cout << "Legajo:" << alumno.legajo << endl;
    cout << "Apellido Nombre:" << alumno.apellidoNombre << endl;
    cout << "Nota:" << alumno.nota << endl;
}

void imprimir(Alumno alumnos[], int cant)
{
    for (size_t i = 0; i < cant; i++)
    {
        imprimir(alumnos[i]);
    }
}


int main()
{
    int vector[] = {-1, -28, -23, -20, 0, 1, 4, 6, 7, 9, 10};

    int dato = 6;
    int resultado = buscarBinaria(vector, 11, dato);
    if (resultado >= 0)
    {
        cout << "El valor " << vector[resultado] << " esta en el vector en la posicion " << resultado << endl;
    }
    else
    {
        cout << "El valor " << dato << " no esta en el conjunto" << endl;
    }

    Alumno alumnos[5] = {{10800, "Pepe", 9}, {10900, "Juan", 9}, {12323, "Laura", 7}, {1114444, "Veronica", 5}, {1114467, "Martin", 9}};
    // imprimir(alumnos, 5);
    int legajo;
    leer("Ingrese el legajo que esta buscando:", legajo);
    int posLegajo = buscarBinaria(alumnos, 5, legajo);
    if (posLegajo >= 0)
    {
        imprimir(alumnos[posLegajo]);
        int nota;
        leer("Ingrese la nueva nota:", nota);
        alumnos[posLegajo].nota = nota;
    }
    else
    {
        cout << "No esta cargado el alumno con legajo " << legajo << endl;
    }

    cout << "Alumnos actualizados!" << endl;
    imprimir(alumnos, 5);

    system("pause");
    return 0;
}