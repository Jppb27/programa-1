#include <stdio.h>
void division (double a,double b);
void multiplicacion (double a,double b);
void resta (double a,double b);
void suma (double a,double b);
int main()
{
    double n1,n2;
    printf("Hola mundo\n\n");
    printf("INGRESE EL PRIMER NUMERO: ");
    scanf("%lf",&n1);
    printf("INGRESE EL SEGUNDO NUMERO: ");
    scanf("%lf",&n2);
    suma(n1,n2);
    resta(n1,n2);
    multiplicacion(n1,n2);
    division(n1,n2);

    return 0;
}
void suma (double a,double b){
    double s=a+b;
    printf("La suma es: %lf\n\n",s);
}
void resta (double a,double b){
    double s=a-b;
    printf("La resta es: %lf ",s);
}
void multiplicacion (double a,double b){
    double s=a*b;
    printf("La multiplicacion es: \n\n%lf",s);
}
void division (double a,double b){
    double s=a/b;
    printf("La division es: \n\n%lf",s);
}
