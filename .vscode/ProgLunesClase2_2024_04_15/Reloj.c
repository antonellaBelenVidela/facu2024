/*
 * Reloj.psc
 *
 * Copyright 2024 Cursos <Cursos.agt@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <stdio.h>

int main(int argc, char **argv)
{


    std::string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                           "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

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

