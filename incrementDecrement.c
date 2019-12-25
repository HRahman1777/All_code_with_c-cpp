 #include<stdio.h>

int main()
{
    int i = 0, j, k, l, m;
    j = ++i;
    k = j++;
    l = ++k;
    m = l++;
    printf("%d %d %d %d %d", i, j, k, l, m);
    return 0;
}
