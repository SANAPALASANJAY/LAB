#include <stdio.h>

int main() 
{
    int n,v,c1=0,c2=0,c3=0,c4=0,c5=0,spoilt=0;
    printf("Enter number of total no.of votes:");
    scanf("%d",&n);
    int votes[n];
    int cand[6] = {c1,c2,c3,c4,c5,spoilt};
    printf("vote number is respective number of candidate number 1 to 5\n");
    for(int i = 0;i<n;i++)
    {
        printf("Enter your vote: ");
        scanf("%d",&votes[i]);
        switch(votes[i])
        {
            case 1: cand[0]++;
                    break;
            case 2: cand[1]++;
                    break;
            case 3: cand[2]++;
                    break;
            case 4: cand[3]++;
                    break;
            case 5: cand[4]++;
                    break;
            default: cand[5]++;
        }
    }
    printf("candidate 1:%d\n",cand[0]);
    printf("candidate 2:%d\n",cand[1]);
    printf("candidate 3:%d\n",cand[2]);
    printf("candidate 4:%d\n",cand[3]);
    printf("candidate 5:%d\n",cand[4]);
    printf("spoilt ballots:%d",cand[5]);
    return 0;
}
