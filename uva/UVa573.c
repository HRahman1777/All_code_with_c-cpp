#include <stdio.h>
int main()
{
    int hightW, slide, fatigueF;
    float climb, fatg;
    while(scanf("%d %f %d %d", &hightW, &climb, &slide, &fatigueF) == 4)
    {
        if(hightW == 0)
            break;
        int day = 1;
        float res = 0;
        fatg = (fatigueF*climb)/100;
        while(1)
        {
            res = res + climb;
            if(climb > 0)
                climb = climb - fatg;
            if(res > hightW)
                break;
            res = res - slide;
            if(res < 0)
                break;
            day++;
        }
        if(res > hightW)
            printf("success on day %d\n", day);
        else if(res < 0)
            printf("failure on day %d\n", day);
    }
    return 0;
}
