/*: Una aplicación para descargas de Series posee la información en un conjunto de datos Episodios,
con un registro por cada episodio, ordenado ascendente por Id_Serie y Número de temporada, con el
siguiente diseño:
1) Id_Serie ( 9 dígitos )
3) Número de temporada (1..12)
5) Cantidad de descargas (long)
2) Título del episodio (cadena)
4) Número de episodio (int)
6) Fecha de última descarga (aaaammdd)
Se pide desarrollar la metodología necesaria para escribir un algoritmo emita el siguiente listado:*/

#include <iostream>
using namespace std;

struct Episodio {
    int idSerie;
    int nroTemporada;
    long cantDescargas;
    string titulo;
    int nroEpisodio;
    int fechaUltimaDescarga;
};

int main () {
    int tamanio=10;
    Episodio episodios[tamanio]{
        {123456781, 1,10, "La venganza", 1, 20230613}, 
        {123456781, 1,20, "La furia", 2, 20230613}, 
        {123456781, 1,15, "La esperanza", 3, 20230613}, 
        {123456781, 1,8, "La tristeza", 4, 20230613},
        {123456781, 2,11, "La armonia", 1, 20230613}, 
        {123456781, 2,12, "La muerte", 2, 20230613}, 
        {123456781, 2,13, "La vida", 3, 20230613}, 
        {123456782, 1,7, "El apocalipsis", 1, 20230613}, 
        {123456782, 1,5, "El trueno", 2, 20230613}, 
        {123456782, 1,6, "La lluvia", 3, 20230613}, 
    };

    int i=0;

    cout << "Listado de descargas de series" << endl;
    int cantSeries=0;
    while(i<tamanio) {
        int key=episodios[i].idSerie;
        int cantEpisodiosSerie=0, totalDescargasSerie=0;
        cout << "Serie: " << key << endl;
        while (i<tamanio && key==episodios[i].idSerie) {
            int key2=episodios[i].nroTemporada;
            int cantEpisodiosTemporada=0, totalDescargasTemporada=0;
            cout << "Temporada: " << key2 << endl;
            cout << "N. episodio   Titulo    cant descargas    fecha" << endl;
            while (i<tamanio && key==episodios[i].idSerie && key2==episodios[i].nroTemporada) {
                cout << episodios[i].nroEpisodio << "   " << episodios[i].titulo << "    "
                << episodios[i].cantDescargas << "   " << episodios[i].fechaUltimaDescarga << endl;
                cantEpisodiosTemporada++;
                totalDescargasTemporada+=episodios[i].cantDescargas;
                i++;
            }
            cout << "Cantidad de episodios de la temporada: " << cantEpisodiosTemporada << endl;
            cout << "Cantidad de descargas de la temporada: " << totalDescargasTemporada << endl;
            cantEpisodiosSerie+=cantEpisodiosTemporada;
            totalDescargasSerie+=totalDescargasTemporada;
        }
        cout << "Cantidad de episodios de la serie: " << cantEpisodiosSerie << endl;
        cout << "Cantidad de descargas de la serie: " << totalDescargasSerie << endl;
        cantSeries++;
    }

    cout << "Cantidad de series: " << cantSeries << endl;
    return 0;
}