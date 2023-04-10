#include <stdio.h>
#define COINS 5
#define MAX 20
 
int coins[COINS] = { 1, 2, 5, 10, 25 };
 
void findMin(int cost)
{
    int coin[MAX] = { 0 };
    int i, k = 0;
 
    for (i = COINS - 1; i >= 0; i--) {
        while (cost >= coins[i]) {
            cost -= coins[i];

            coin[k++] = coins[i];
        }
    }
 
    for (i = 0; i < k; i++) 
    {
        printf("%d ", coin[i]);
    }
    return;
}
 
int main(void)
{
    // input value
    int n = 93;
 
    printf("The minimum number of coins to"
           "make change for %d: ",
           n"\n");
    findMin(n);
    return 0;
}
