#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct player{
char lastName[50];
int jerseyNumber;
int gamesPlayed;
int goalsScored;
} Player;
Player GetMostGames(Player players[], int numPlayers);
Player GetBestAverage(Player players[], int numPlayers);
int main()
{
    char file[100];
    printf("What is the name of the file?\n");
    scanf("%s",file);
    FILE *f;
    f = fopen(file,"r");
    int numPlayers;
    fscanf(f,"%d",&numPlayers);
    Player players[numPlayers];
    for(int i=0;i<numPlayers;i++){
        fscanf(f,"%s %d %d %d",players[i].lastName,&players[i].jerseyNumber,&players[i].gamesPlayed,&players[i].goalsScored);
    }
    Player mostGames = GetMostGames(players, numPlayers);
    Player bestAverage = GetBestAverage(players,numPlayers);
    printf("The player who played the most games is %s %d with %d games played\n",mostGames.lastName,mostGames.jerseyNumber,mostGames.gamesPlayed);
    printf("The player who had the best goal average is %s %d with an average of %.2lf",bestAverage.lastName,bestAverage.jerseyNumber,(double)bestAverage.goalsScored/(double)bestAverage.gamesPlayed);
}
Player GetMostGames(Player players[], int numPlayers){
    int best = players[0].gamesPlayed;
    int best2 = 0;
    for(int i=1;i<numPlayers;i++){
        if(players[i].gamesPlayed > best){
            best = players[i].gamesPlayed;
            best2 = i;
        }
    }
    return players[best2];
}
Player GetBestAverage(Player players[], int numPlayers){
    double best = (double)players[0].goalsScored/(double)players[0].gamesPlayed;
    int best2 = 0;
    for(int i=1;i<numPlayers;i++){
        if((double)players[i].goalsScored/(double)players[i].gamesPlayed > best){
            best = (double)players[i].goalsScored / players[i].gamesPlayed;
            best2 = i;
        }
    }
    return players[best2];
}
