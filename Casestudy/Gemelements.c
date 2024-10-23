#include<stdio.h>
#include<string.h>
int cnt(char c,int n,int l,char arr[][100]);

int main(){
    int n;//n = no of stones
    float cmn = 0.0;//cmn is no.of common elements
    scanf("%d",&n);
    char stone[n][100];//taking input stones
    for(int i = 0; i<n; i++){
        scanf("%s",stone[i]);
    }
    //finding length of first stone as reference 
    int s1len = strlen(stone[0]);
    
    for(int i = 0;i < s1len;i++){
        // reference element to check in other stones
        char ele = stone[0][i];
        // finding no of time is repeated as the element will repeat again as reference element
        int elecnt = cnt(ele,0,s1len,stone);
        //initialsing wordcount as 1 
        int wcnt = 1;
        //checking if the element is present other stones 
        for(int j = 1;j < n; j++){
            //length of the stone being checked
            int slen = strlen(stone[j]);
            //no.of times referenec element is present
            int tcnt = cnt(ele,j,slen,stone);
            //if reference element is not found 
            if(tcnt == 0){
                wcnt = 0;
                break;
            }
            //if found it will continue
        }
        //adding wcnt/elecnt as if the element is repeated n times it will count to n so to solve it (1/n)* n = 1 it will be 1.
        cmn = cmn + ((float) wcnt/elecnt);
    }
    //as the number will be integer 
    printf("%0.f",cmn);
    return 0;
}

int cnt(char c,int n,int l,char arr[][100])
{
    int count = 0;
    //counting no.of times character is presnt
    for(int i = 0;i < l;i++){
        if(arr[n][i] == c){
            count++;
        }
    }
    return count;
}
