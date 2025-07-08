#include <iostream>
#include <string>

using namespace std;
int main()
{
int i =0, j=0;
int ps_matriz [7][6] = { {1, 2, 3, 4, 5, 6},
                    {7, 8, 9, 10, 11, 12 },
                    {1, 2, 4, 4, 21, 6},
                    {7, 4, 5, 10, 12, 12 },
                    {1, 5, 6, 4, 25, 6},
                    {7, 6, 7, 10, 31, 12 },
                    {7, 8, 9, 10, 11, 12 },
                  };

int cajaDiaria [6]={0,0,0,0,0,0};
int cajaSemanal=0;
for (j = 0 ; j < 7;j++)
{
    for (i = 0 ; i < 6;i++)
    {
        cajaDiaria[j]+=ps_matriz [j][i];
    }
    cajaSemanal+=cajaDiaria[j];

    cout << "cajaDiaria : dia "<< j <<"de la semana se facturo :"<< cajaDiaria[j] << endl;
}
cout << "cajaSemanal : " << cajaSemanal << endl;
return 0;
}
