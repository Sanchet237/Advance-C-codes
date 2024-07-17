/* 4. Write a C Program to store n Player details ( ID, Name, Number of Runs, Number of Wickets, Average ) 
and Display Player Name scoring Maximum Number of Runs */

#include <stdio.h>
struct p
{
    int id;
    char name[50];
    int runs;
    int wickets;
    float avg;
} p[10];

int main()
{
    int n, i, max_runs = 0;

    printf("Enter the number of cricket players you want to enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter details for player %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &p[i].id);
        printf("Name: ");
        scanf("%s", p[i].name);
        printf("Runs Scored: ");
        scanf("%d", &p[i].runs);
        printf("Wickets Taken: ");
        scanf("%d", &p[i].wickets);

        p[i].avg = (float)p[i].runs / p[i].wickets;

        if (p[i].runs > max_runs)
            max_runs = p[i].runs;
    }

    printf("\nPlayers with Maximum Runs Scored:\n");
    for (i = 0; i < n; i++)
    {
        if (p[i].runs == max_runs)
        {
            printf("Player ID: %d\n", p[i].id);
            printf("Player Name: %s\n", p[i].name);
            printf("Runs Scored: %d\n", p[i].runs);
            printf("Wickets Taken: %d\n", p[i].wickets);
            printf("Average: %.2f\n", p[i].avg);
            printf("\n");
        }
    }

    return 0;
}

