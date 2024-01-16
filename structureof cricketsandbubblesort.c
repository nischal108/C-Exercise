// write a c program to store the players name ,runs scored , wiclets taken  of 20 cricketers using structuresalong with poiinters than arrange  the players in the order of maximum wickets taken  to minimum wickets they that taken .




#include <stdio.h>
#include <string.h>

// Define structure to store player information
struct Player
{
    char name[50];
    int runsScored;
    int wicketsTaken;
};

// Function to swap two players
void swapPlayers(struct Player *a, struct Player *b)
{
    struct Player temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on players based on wickets taken
void sortPlayers(struct Player *players, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (players[j].wicketsTaken < players[j + 1].wicketsTaken)
            {
                swapPlayers(&players[j], &players[j + 1]);
            }
        }
    }
}

int main()
{
    // Declare an array of 20 players
    struct Player players[20];

    // Input player information
    for (int i = 0; i < 20; i++)
    {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Runs Scored: ");
        scanf("%d", &players[i].runsScored);
        printf("Wickets Taken: ");
        scanf("%d", &players[i].wicketsTaken);
    }

    // Sort players based on wickets taken
    sortPlayers(players, 20);

    // Display sorted player information
    printf("\nPlayers arranged in order of maximum wickets taken to minimum wickets taken:\n");
    printf("%-20s %-15s %-15s\n", "Name", "Runs Scored", "Wickets Taken");
    for (int i = 0; i < 20; i++)
    {
        printf("%-20s %-15d %-15d\n", players[i].name, players[i].runsScored, players[i].wicketsTaken);
    }

    return 0;
}
