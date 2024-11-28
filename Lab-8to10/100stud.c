#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* file;
    
    file = fopen("LNMIITSTUDENT.TXT", "w");

    struct students {
        char f_name[20];
        char l_name[20];
        int roll;
        float marks;
    };
    
    int n;
    struct students* st;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    st = malloc(n * sizeof(struct students));

    
    printf("Enter the details in the format\nROLL_NO FirstName LastName Marks\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %s %s %f", &st[i].roll, st[i].f_name, st[i].l_name, &st[i].marks);
    }
    fprintf(file, "ROLL_NO\tSTUDENT_NAME\tMARKS\n");
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\t\t%s %s\t\t%.2f\n", 
                st[i].roll, st[i].f_name, st[i].l_name, st[i].marks);
    }

    free(st);
    fclose(file);
    
    return 0;
}
