#include <stdio.h>
#define COINS 4
#define MAX 20

// All denominations of Indian Currency
int coins[COINS] = { 10, 20, 25, 60};

void findMin(int cost)
{
    int coinList[MAX] = { 0 };
    int i, k = 0;

    for (i = COINS - 1; i >= 0; i--) {
        while (cost >= coins[i]) {
            cost -= coins[i];
            coinList[k++] = coins[i]; // add coin in the list
        }
    }

    for (i = 0; i < k; i++) {
        printf("%d ", coinList[i]); // print
    }
    return;
}

int main(void)
{
    int n = 100; // input value

    printf("Following is minimal number of change for %d: \n", n);
    findMin(n);
    return 0;
}
