#include <stdio.h>

int main()
{
    int num, digit, i;
    int frequency[10] = {0};
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        frequency[digit]++;
        printf("%d", digit);
        num /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("Frequency of digit %d: %d\n", i, frequency[i]);
    }

    return 0;
}
