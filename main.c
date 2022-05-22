#include <stdio.h>
#include <stdlib.h>
#include "proyectOne.h"

int main()
{
    int opcion, flagKm=0;
    float km = 0, precioLatamDebi, precioLatamCredi, precioLatamBit, precioLatamUni, precioAeroDebi, precioAeroCredi, precioAeroBit, precioAeroUni, difePrecio;
    char salir;

    do{
        opcion = menuPrincipal(km);

            switch(opcion){
            case 1:
                km = validar();
                flagKm = 1;
                system("pause");
            break;
            }
    }while(exit != 's');


    return 0;
}
