#include <stdio.h>
#include <stdlib.h>
#include "proyectOne.h"




float precioBitcoin(float precio)
{
    float precioBitcoin;

    precioBitcoin = precio/4606954.55;

    return precioBitcoin;
}
float descuentoDebito(float precio)
{
    float descuentoDebito;

    descuentoDebito = precio-((precio*10)/100);

    return descuentoDebito;
}
float interesCredito(float precio)
{
    float interesCredito;

    interesCredito = precio+((precio*25)/100);

    return interesCredito;
}
float precioUnitario(float precio, float km)
{
    float precioUnitario;

    precioUnitario = precio/km;

    return precioUnitario;
}
float menuPrincipal(float km)
{
    int opcion;

    printf("-1 Ingrese kilometros");
    printf("-2 Ingrese precio de vuelos");
    printf("-3 Calcular todos los costos");
    printf("-4 Informar resultados");
    printf("-5 Carga forzada de datos");
    printf("-6 Salir");

    return opcion;
}
float validar()
{
    float km;
    int aux;
    printf("Ingrese los kilometros del vuelo:");
    aux = scanf("%f", &km);
    while(km <= 0 || aux == 0)
        {
            printf("Error, Reingrese los kilometros del vuelo:");
            scanf("%f", &km);
            aux = km;
        }

    return km;
}
float menuVuelos(float precioAero, float precioLatam)
{
    int opciones;

    printf("Ingresar precio de vuelos: Aerolineas Argentinas: $%.2f y Latam: $%.2f", precioAero, precioLatam);
    printf("-1 Precio vuelo Aerolineas");
    printf("-2 Precio vuelo Latam");
    scanf("%d", opciones);

    return opciones;
}
