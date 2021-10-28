#include <stdio.h>
#include <math.h>

int main() {
    float acceleration; 
    float initialvelocity;
    float velocity;
    float timeroute;

    printf("Digite a aceleracao do veiculo(m/s2) : ");
    scanf("%f",&acceleration);
    printf("\nDigite a velocidade inicial(m/s) : ");
    scanf("%f",&initialvelocity);
    printf("\nDigite o tempo de percurso(s) : ");
    scanf("%f",&timeroute);

    velocity = initialvelocity + acceleration*timeroute;
    float ConvertedVelocity = velocity/3.6;

printf("A velocidade final do veiculo em e %.2f km/h",ConvertedVelocity);

if (ConvertedVelocity <= 40){
    printf ("\nVeiculo muito lento\n");
}
else if(ConvertedVelocity > 40 && ConvertedVelocity <= 60){
    printf ("\nVelocidade permitida\n");
}
else if (ConvertedVelocity > 60 && ConvertedVelocity <=80){
    printf ("\nVelocidade de cruzeiro\n");
}
else if (ConvertedVelocity > 80 && ConvertedVelocity<=120){
    printf ("\nVeiculo rápido\n");
}
else{
    printf ("\nVeiculo muito rapido\n");
}

return 0;
}