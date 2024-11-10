#include <stdio.h>
#include <string.h>

int main() 
{
    int t; // no.of test cases
    scanf("%d",&t);
    char w[t][100],s[t][100];
    //w is for storing string and s is for storing lexograpgically next string
    for(int i = 0; i < t; i++)
    {
        scanf("%s",w[i]);
    }
    // loop for every test case
    for (int i = 0; i < t; i++)
    {
        int equal = 1;// assuming default equal as true ... turns false if below conditions satisties even once 
        int x = strlen(w[i]);
        int point = x;//
        int op = 1;
        for (int h = 0; h < x; h++)
        {
            int k = 0;// checks characters from last (k is the key) for decrement
            for (int j = 1; j < point; j++)
            {
                k++;
                if ((w[i][x - j] > w[i][x - j - 1]) && (op == 1))//first operation is to swap the highest index element which is lower than its next
                {
                    char temp = w[i][x - k];
                    w[i][x - k] = w[i][x - k - 1];
                    w[i][x - k - 1] = temp;
                    strcpy(s[i],w[i]);
                    equal = 0;op =0;
                    point = j;//the point where last op is done should be the end point for sorting again 
                    break;
                }
                
                if ((w[i][x - j] < w[i][x - j - 1]) && (op != 1))
                {
                    char temp = w[i][x - k];//after first operation the elemetns after the point before should be sorted small
                    w[i][x - k] = w[i][x - k - 1];
                    w[i][x - k - 1] = temp;
                    strcpy(s[i],w[i]);
                    point = j;
                    break;
                }
            }
        }
        
        if (equal)
        {
            printf("no answer\n");
        }
        else
        {
            puts(s[i]);
        }
    }
    return 0;
}
