#include <stdio.h>
#include <string.h>

struct book
{
    int year;
    char author[50];
    char title[50];
};

int main()
{
    struct book b;
    //Read the information of book
    printf("Enter the title of book: ");
    fgets(b.title, 50, stdin);
    printf("Enter the author of the book: ");
    fgets(b.author, 50, stdin);
    printf("Enter the published year: ");
    scanf("%d", &b.year);
    
    //displaying the information of the book
    printf("Title: %s", b.title);
    printf("author: %s", b.author);
    printf("Publish Year: %d", b.year);
    
    return 0;
}
