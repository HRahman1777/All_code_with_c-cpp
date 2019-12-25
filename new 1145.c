int main()
{
    int c, n, i, k;
    k = 0;
    scanf("%d%d", &c, &n);
    for(i = 1; i <= n; i++)
    {
        k++;
        if(k == c)
            printf("%d", i);
        else
            printf("%d ", i);
        if(k == c)
        {
            k = 0;
            printf("\n");
        }
    }
    return 0;
}

