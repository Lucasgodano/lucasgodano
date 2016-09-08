#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float cargaoperando();
int menu(float o1, float o2, int band1, int band2);

int main()
{
    float o1;
    float o2;
    int band1=0;
    int band2=0;
    int opcion;
    float resultado;

do
    {
        switch(menu(o1,o2,band1,band2))
        {
            case 1:
                band1=1;
                o1 = cargaoperando();
                break;
            case 2:
                band2=1;
                o2 = cargaoperando();
                break;
            case 3:
                if (band1==1 && band2==1)
                    {
                        resultado=suma(o1,o2);
                        printf("El Resultado es : %.2f",resultado);
                        system("pause");
                       }
                else
                    {
                    printf("\nError. \n\nDebe ingresar previamente los operandos para realizar una operacion.\n");
                    system("pause");
                       }

                break;
            case 4:
                if (band1==1 && band2==1)
                    {
                        resultado=resta(o1,o2);
                        printf("El Resultado es : %.2f",resultado);
                        system("pause");
                       }
                else
                    {
                    printf("\nError. \n\nDebe ingresar previamente los operandos para realizar una operacion.\n");
                    system("pause");
                       }
                break;
            case 5:
                if (band1==1 && band2==1)
                    {
                        resultado=division(o1,o2);
                        printf("El Resultado es : %.2f",resultado);
                        system("pause");
                       }
                else
                    {
                    printf("\nError. \n\nDebe ingresar previamente los operandos para realizar una operacion.\n");
                    system("pause");
                       }
                break;
            case 6:
                if (band1==1 && band2==1)
                    {
                        resultado=multiplicacion(o1,o2);
                        printf("El Resultado es : %.2f",resultado);
                        system("pause");
                       }
                else
                    {
                    printf("\nError. \n\nDebe ingresar previamente los operandos para realizar una operacion.\n");
                    system("pause");
                       }
                break;
            case 7:
                if (band1==1 && band2==1)
                    {
                        resultado=factorial(o1);
                        printf("El Resultado es : %.2f",resultado);
                        system("pause");
                       }
                else
                    {
                    printf("\nError. \n\nDebe ingresar previamente los operandos para realizar una operacion.\n");
                    system("pause");
                       }
                break;
            case 8:
                if (band1==1 && band2==1)
                    {
                        resultado=suma(o1,o2);
                        printf("\n\nsuma : %.2f\n\n",resultado);
                        resultado=resta(o1,o2);
                        printf("\n\nresta : %.2f\n\n",resultado);
                        resultado=division(o1,o2);
                        printf("\n\ndivision : %.2f\n\n",resultado);
                        resultado=multiplicacion(o1,o2);
                        printf("\n\nmultiplicaciòn es : %.2f\n\n",resultado);
                        resultado=factorial(o1);
                        printf("\n\nFactorial es : %.2f\n\n",resultado);
                        system("pause");
                       }
                else
                    {
                    printf("\nError. \n\nDebe ingresar previamente los operandos para realizar una operacion.\n");
                    system("pause");
                       }
                break;
                case 9:
                    opcion=9;
                    break;

        }

}
while (opcion!=9);
    return 0;

}





float cargaoperando()
{
    float op;
    system("cls");
    printf("Ingrese operando: ");
    scanf("%f",&op);

    return op;
}

int menu(float o1, float o2, int band1, int band2)
{
   int opcion;

        system("cls");
        printf("Menu de Opciones\n\n");
        if(band1==0){
            printf("1- Ingresar 1er operando (A=o1)\n");
        }
        else{
            printf("1- Ingresar 1er operando (A=%.2f)\n",o1);
        }

        if(band2==0){
            printf("2- Ingresar 2do operando (B=o2)\n");
        }
        else{
            printf("2- Ingresar 2do operando (B=%.2f)\n",o2);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("\n\nIngrese opcion: ");
        scanf("%d",&opcion);
         while(opcion<1||opcion>9){
            printf("\n\nOpcion invalida , la opcion tiene que ser entre 1 y 9.\n\nIngrese opcion:");
            scanf("%d",&opcion);
        }
        return opcion;
}

