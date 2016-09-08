/** \brief suma los 2 operandos.
 *
 * \param operando 1.
 * \param operando 2.
 * \return resultado de la suma total del operando 1 y operando 2.
 *
 */

float suma (float o1, float o2)
{
    float total;
    total= o1+o2;
    return total;
}
/** \brief resta los 2 operandos.
 *
 * \param operando 1.
 * \param operando 2.
 * \return resultado de la resta total del lo operando 1 y operando 2.
 *
 */

float resta(float o1, float o2)
{
float total;
total = o1-o2;
return total;
}
/** \brief multiplicacion de los operandos.
 *
 * \param operando 1.
 * \param operando 2.
 * \return resultado de la multiplicacion total de los operando 1 y operando 2.
 *
 */

float multiplicacion (float o1, float o2)
{
float total;
total = o1*o2;
return total;
}
/** \brief division de los operandos.
 *
 * \param operando 1.
 * \param operando 2.
 * \return resultado de la division entre el operando 1 y el operando 2.
 *
 */

float division(float o1, float o2)
{
    while(o2==0)
        {
    printf("Error. El 2do operando tiene que ser Mayor a 0.\nReingrese: ");
    scanf("%f",&o2);
    division(o1,o2);

        }
            return o1/o2;
}
/** \brief factorial del operando 1
 *
 * \param operando1
 * \param
 * \return devuelve el factorial
 *
 */

float factorial(float o1)
{
    float resultado=1;
    int i;
    if(o1!=0)
    {
        for(i = 1; i<=o1; i++)
        {
            resultado*=i;
        }
    }
    return resultado;
}



float todo (float o1, float o2)
    {
    float suma;
    float resta;
    float multiplicacion;
    float division;

    suma=o1+o2;
    printf("La suma de %.2f + %.2f = %.2f\n",o1,o2,suma);

    resta=o1-o2;
    printf("La resta de %.2f - %.2f = %.2f\n",o1,o2,resta);

    multiplicacion=o1*o2;
    printf("La multiplicacion de %.2f * %.2f = %.2f\n",o1,o2,multiplicacion);

    division=o1/o2;
    printf("El resultado de la division %.2f / %.2f = %.2f\n",o1,o2,division);
    }

