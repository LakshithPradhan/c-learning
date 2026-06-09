#include <stdio.h>
#include <string.h>

char task[10][50];
int priority[10];
int n = 0;

void add()
{
    int num, i;

    printf("How many tasks do you want to add? ");
    scanf("%d", &num);

    getchar();

    for(i = 0; i < num && n < 10; i++)
    {
        printf("\nEnter Task %d: ", i + 1);
        fgets(task[n], 50, stdin);

        printf("Enter Priority (1-High, 2-Medium, 3-Low): ");
        scanf("%d", &priority[n]);

        getchar();

        n++;
    }

    printf("\n%d Task(s) Added Successfully!\n", num);
}

void view()
{
    int i;

    if(n == 0)
    {
        printf("No Tasks Available!\n");
        return;
    }

    printf("\n--- Task List ---\n");

    for(i = 0; i < n; i++)
    {
        printf("%d. %s", i + 1, task[i]);

        if(priority[i] == 1)
            printf("Priority: High\n");
        else if(priority[i] == 2)
            printf("Priority: Medium\n");
        else
            printf("Priority: Low\n");
    }
}

void edit()
{
    int x;

    if(n == 0)
    {
        printf("No Tasks Available!\n");
        return;
    }

    view();

    printf("\nEnter Task Number to Edit: ");
    scanf("%d", &x);

    if(x < 1 || x > n)
    {
        printf("Invalid Task Number!\n");
        return;
    }

    getchar();

    printf("Enter New Task: ");
    fgets(task[x - 1], 50, stdin);

    printf("Enter New Priority (1-High, 2-Medium, 3-Low): ");
    scanf("%d", &priority[x - 1]);

    printf("\nTask Updated Successfully!\n");
}

void del()
{
    int x, i;

    if(n == 0)
    {
        printf("No Tasks Available!\n");
        return;
    }

    view();

    printf("\nEnter Task Number to Delete: ");
    scanf("%d", &x);

    if(x < 1 || x > n)
    {
        printf("Invalid Task Number!\n");
        return;
    }

    for(i = x - 1; i < n - 1; i++)
    {
        strcpy(task[i], task[i + 1]);
        priority[i] = priority[i + 1];
    }

    n--;

    printf("\nTask Deleted Successfully!\n");
}

int main()
{
    int ch;
    char cont;

    do
    {
        printf("\n===== TO DO LIST =====\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Edit Task\n");
        printf("4. Delete Task\n");

        printf("Enter Choice: ");
        scanf("%d", &ch);

        if(ch == 1)
            add();
        else if(ch == 2)
            view();
        else if(ch == 3)
            edit();
        else if(ch == 4)
            del();
        else
            printf("Invalid Choice!\n");

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);

    } while(cont == 'y' || cont == 'Y');

    printf("\nThank You!\n");

    return 0;
}