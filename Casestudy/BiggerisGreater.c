#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d",&t);
    char w[t][100],s[t][100];
    
    for(int i = 0; i < t; i++)
    {
        scanf("%s",w[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        int equal = 1;
        int x = strlen(w[i]);
        int point = x;
        int op = 1;
        for (int h = 0; h < x; h++)
        {
            int k = 0;
            for (int j = 1; j < point; j++)
            {
                k++;
                if ((w[i][x - j] > w[i][x - j - 1]) && (op == 1))
                {
                    char temp = w[i][x - k];
                    w[i][x - k] = w[i][x - k - 1];
                    w[i][x - k - 1] = temp;
                    strcpy(s[i],w[i]);
                    equal = 0;op =0;
                    point = j;
                    break;
                }
                
                if ((w[i][x - j] < w[i][x - j - 1]) && (op != 1))
                {
                    char temp = w[i][x - k];
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
