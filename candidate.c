#include <cs50.h>
#include <stdio.h>

typedef struct{
    string name;
    int votes;
}
candidate;
 int main(void)
 {
    const int num_candidates = 3;
    candidate candidates[num_candidates];

    candidates[0].name = "Parker";
    candidates[0].votes = 200;

    candidates[1].name = "Zenke";
    candidates[1].votes = 250;

    candidates[2].name = "Doug";
    candidates[2].votes = 350;

    int highest_votes = 0;
    for (int i = 0; i < num_candidates; i++)
    {

        if (candidates[i].votes > highest_votes)
        {
            highest_votes = candidates[i].votes;
        }

    }
    printf("Maximum number of votes  : %i\n", highest_votes);
    
    for (int i = 0; i<num_candidates; i++)
    {
        if (candidates[i].votes == highest_votes)
        {
            printf("Highest number of votes obtained by: %s\n", candidates[i].name);
        }
    }

 }
