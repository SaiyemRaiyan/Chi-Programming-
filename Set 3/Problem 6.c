#include<stdio.h>
#include<string.h>

         //Structure
struct BarcelonaPlayer
{
    char name[20];
    int age;
    char country[20];
    char position[20];
    double salary;
    double rating;
};

     //Find the highest-paid player and save to a file
void highestPaidPlayer(struct BarcelonaPlayer *pl, int size)
{
    int maxIndex = 0;

    for(int i=1; i<size; i++)
    {
        if(pl[i].salary > pl[maxIndex].salary)
        {
           maxIndex = i;
        }
    }

    printf("\nHighest Paid Player: %s (Salary: %.3lf)\n", pl[maxIndex].name, pl[maxIndex].salary);

    FILE *file = fopen("Highest_Paid_Player.txt", "w");

    fprintf(file, "Highest Paid Player:\nName: %s\nAge: %d\nCountry: %s\nPosition: %s\nSalary: %.3lf\nRating: %.3lf\n",
            pl[maxIndex].name, pl[maxIndex].age, pl[maxIndex].country, pl[maxIndex].position,
            pl[maxIndex].salary, pl[maxIndex].rating);

      fclose(file);
    printf("Information saved to 'Highest_Paid_Player.txt'.\n");
}

        //Find players from Argentina
void findPlayers(struct BarcelonaPlayer *pl, int size)
{
        printf("\nPlayers from Argentina:\n");
    int found = 0;

    for(int i=0; i < size; i++)
    {
        if (strcmp(pl[i].country, "Argentina") == 0)
        {
            printf("Name: %s, Position: %s, Salary: %.3lf, Rating: %.3lf\n",
                   pl[i].name, pl[i].position, pl[i].salary, pl[i].rating);
            found = 1;
        }
    }

    if(!found)
    {
       printf("No players found from Argentina.\n");
    }
}

int main()
{
    struct BarcelonaPlayer pl[50];
    int size;

    printf("--------------------- Player Information ------------------------\n\n");
    printf("Enter the number of players: ");
    scanf("%d", &size);

    for(int i=0; i<size; i++)
    {
        printf("\nEnter details for player %d:\n", i+1);

        printf("Name: ");
        scanf("%s", pl[i].name);

        printf("Age: ");
        scanf("%d", &pl[i].age);

        printf("Country: ");
        scanf("%s", pl[i].country);

        printf("Position: ");
        scanf("%s", pl[i].position);

        printf("Salary: ");
        scanf("%lf", &pl[i].salary);

        printf("Rating: ");
        scanf("%lf", &pl[i].rating);
    }

       highestPaidPlayer(pl, size);
      findPlayers(pl, size);

  return 0;
}
