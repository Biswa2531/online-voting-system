#include <stdio.h>
#include <string.h>

#define MAX_VOTERS 5
#define MAX_CANDIDATES 3

struct voter {
    char voterID[3];
    int hasVoted;
};

int main()
{
    struct voter voters[MAX_VOTERS];
    int votes[MAX_CANDIDATES];
    int choice, voteChoice, i, j, found;

    char id[3];

    FILE *fvoters, *fvotes;

    char candidates[MAX_CANDIDATES][20] =
    {
        "Candidate A",
        "Candidate B",
        "Candidate C"
    };

    fvoters = fopen("voters.dat","rb");
    fvotes = fopen("votes.dat","rb"); 

    if(fvoters && fvotes)
    {
        fread(voters,sizeof(voters),1,fvoters);
        fread(votes,sizeof(votes),1,fvotes);
        fclose(fvoters);
        fclose(fvotes);
    }
    else
    {
        for(i=0;i<MAX_VOTERS;i++)
        {
            sprintf(voters[i].voterID,"%02d",i+1);
            voters[i].hasVoted = 0;
        }

        for(i=0;i<MAX_CANDIDATES;i++)
            votes[i]=0;
    }

    do
    {
        printf("\n===== ONLINE VOTING SYSTEM =====");
        printf("\n1. Vote");
        printf("\n2. Display Results");
        printf("\n3. Search Voter");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Voter ID (01-%02d): ",MAX_VOTERS);
                scanf("%s",id);

                found = 0;

                for(i=0;i<MAX_VOTERS;i++)
                {
                    if(strcmp(voters[i].voterID,id)==0)
                    {
                        found = 1;

                        if(voters[i].hasVoted)
                        {
                            printf("\nAlready Voted!");
                            break;
                        }

                        for(j=0;j<MAX_CANDIDATES;j++)
                            printf("\n%d. %s",j+1,candidates[j]);

                        printf("\nEnter Vote: ");
                        scanf("%d",&voteChoice);

                        if(voteChoice>=1 && voteChoice<=MAX_CANDIDATES)
                        {
                            votes[voteChoice-1]++;
                            voters[i].hasVoted = 1;

                            fvoters = fopen("voters.dat","wb");
                            fvotes = fopen("votes.dat","wb");

                            fwrite(voters,sizeof(voters),1,fvoters);
                            fwrite(votes,sizeof(votes),1,fvotes);

                            fclose(fvoters);
                            fclose(fvotes);

                            printf("\nVote Cast Successfully!");
                        }
                        else
                            printf("\nInvalid Choice!");

                        break;
                    }
                }

                if(!found)
                    printf("\nInvalid Voter ID!");

                break;

            case 2:
                for(i=0;i<MAX_CANDIDATES;i++)
                    printf("\n%s : %d",candidates[i],votes[i]);
                break;

            case 3:
                printf("\nEnter Voter ID to Search: ");
                scanf("%s",id);

                found = 0;

                for(i=0;i<MAX_VOTERS;i++)
                {
                    if(strcmp(voters[i].voterID,id)==0)
                    {
                        found=1;
                        printf("\nVoter ID: %s",voters[i].voterID);

                        if(voters[i].hasVoted)
                            printf("\nStatus: VOTED");
                        else
                            printf("\nStatus: NOT VOTED");
                        break;
                    }
                }

                if(!found)
                    printf("\nVoter Not Found!");

                break;

            case 4:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid Option!");
        }

    }while(choice!=4);

    return 0;
}