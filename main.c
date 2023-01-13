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
    
    return 0;
}
void suma (double a,double b){
    double s=a+b;
    printf("La suma es: %lf",s);
}
void resta (double a,double b){
    double s=a-b;
    printf("La resta es: %lf",s);
}
void multiplicacion (double a,double b){
    double s=a*b;
    printf("La multiplicacion es: %lf",s);
}
void division (double a,double b){
    double s=a/b;
    printf("La division es: %lf",s);
}
