#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    double avrg1, avrg2;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    avrg1 = ((a*2) + (b*3) + (c*4) + (d*1)) / 10;
    printf("Media: %.1lf\n", avrg1);
    if(avrg1 < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avrg1 >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);
        avrg2 = (avrg1+e) / 2;
        if(avrg2 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", avrg2);
    }
    return 0;
}
