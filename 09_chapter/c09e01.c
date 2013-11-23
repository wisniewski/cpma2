#include <stdio.h>

void enter_numbers(int t[], int num)
{
    printf("Enter %d numbers: ", num);
    for(int i=0; i<num; i++)
        scanf("%d", &t[i]);
}

void show_numbers(int t[], int num)
{
    for(int i=0; i<num; i++)
        printf("%d ", t[i]);
}

void selection_sort(int t[], int num)
{
    int low=0, high=0, j=0;

    high = t[0];
    for(int i=0; i<num; i++)
        if(high < t[i])
            high = t[i];

    for(j=0; j<num; j++)
        if(t[j] == high)
            break;

    low = t[num-1];
    t[num-1] = high;
    t[j] = low;

    if(num-1> 0)
        selection_sort(t, num-1);
}

int main(void)
{
    int n=0;
    printf("How many numbers you want in array? ");
    scanf("%d", &n);
    int tab[n];

    enter_numbers(tab, n);
    selection_sort(tab, n);
    show_numbers(tab, n);

    return 0;
}

