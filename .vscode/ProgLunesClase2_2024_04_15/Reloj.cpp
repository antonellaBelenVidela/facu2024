#include <iostream>
int main()
{   std::string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio","Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int minuto,segundo, hora, dia,dia_final,indice;
    for (indice = 0 ;indice <=11;indice++)
    {
        dia_final = dias_por_mes[indice];
        for (dia =1; dia <=  dia_final ;dia=dia+1)
        {
            for (hora =0; hora <=23;hora=hora+1)
            {
                for (minuto =0; minuto <=59;minuto=minuto+1)
                {
                    for (segundo =0; segundo <=59;segundo=segundo+1)
                    {
                        std::cout << "mes: "<< meses[indice] << " ";
                        std::cout << "-"<< indice+1 << " ";
                        std::cout << "dia: "<< dia << " ";
                        std::cout << "hora: "<< hora << " ";
                        std::cout << "minuto: "<< minuto << " ";
                        std::cout << "segundo: "<< segundo << "\n";
                    }
                }
            }
        }
    }
    return 0;
}

