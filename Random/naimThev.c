#include<stdio.h>
#include<math.h>

float GetNetBenefit(float a, float b)
{
    return a-b;
}

float GetFutureValue(float r, float n,float p)
{
    float x, f;
    r = r/100;
    x = pow((1+r), n);
    f = p * x;
    return f;
}
float GetPresentValue(float r,float n,float f)
{
    float x, p;
    r = r/100;
    x = pow((1+r), n);
    p = f / x;
    return p;
}
float GetNetPresentValue(float r,float n,float f)
{
    float p, npv;
    p = GetPresentValue(r, n, f);
    n = GetNetBenefit(f, p);
    npv = ((n/p) * 100);
    return npv;
}

int main()
{

    printf("1.Net Benefits\n");
    printf("2.Present value\n");
    printf("3.Future Value\n");
    printf("4.Net Present Value\n");

    int eof=20;
    while(eof!=0)
    {


        printf("\nPlease select a number for calculation: ");

        int i;
        scanf("%d",&i);
        if(i==1)
        {
            float pv, fv, ans;
            printf("\nEnter Benefit: ");
            scanf("%f", &fv);
            printf("\nEnter Investment: ");
            scanf("%f", &pv);
            ans = GetNetBenefit(pv, fv);
            printf("\nNet Benefit is: %f", ans);
        }
        else if(i==2)
        {
            float fv, r, n, ans;
            printf("\nEnter Benefit: ");
            scanf("%f", &fv);
            printf("\nEnter Interest rate: ");
            scanf("%f", &r);
            printf("\nEnter Year: ");
            scanf("%f", &n);
            ans = GetPresentValue(r, n, fv);
            printf("\nPresent Value is: %f", ans);
        }
        else if(i==3)
        {
            float fv, r, n, ans;
            printf("\nEnter Benefit: ");
            scanf("%f", &fv);
            printf("\nEnter Interest rate: ");
            scanf("%f", &r);
            printf("\nEnter Year: ");
            scanf("%f", &n);
            ans = GetFutureValue(r, n, fv);
            printf("\nFuture Value is: %f", ans);
        }
        else if(i==4)
        {
            float fv, r, n, ans;
            printf("\nEnter Benefit: ");
            scanf("%f", &fv);
            printf("\nEnter Interest rate: ");
            scanf("%f", &r);
            printf("\nEnter Year: ");
            scanf("%f", &n);
            ans = GetNetPresentValue(r, n, fv);
            printf("\nNet Present Value is: %f", ans);
        }
        else
        {
            printf("Please choice the right number");
        }
        eof=i;
    }


    return 0;
}
