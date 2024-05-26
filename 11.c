// Design a program to manage contacts. Each contact should have attributes like name,
// phone number, and email address. Implement functions to add new contacts, search for
// contacts by name or phone number, and display all contacts. and save them is separate file
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define max 100
typedef struct contacts
{
    char name[100];
    long long phone;
    char email[100];
} con;
void add_contact(con arr[100], int n)
{
    if (n > 50)
    {
        printf("limit over -------");
        exit(0);
    }
    int f = 1;
    while (getchar() != '\n')
        ;
    for (int i = 0; i < n; i++)
    {
        printf("+++++++%d++++++\n", f);
        f++;
        printf("enter name : ");
        scanf("%[^\n]s", arr[i].name);
        printf("\nenter contact number : ");
        scanf("%lld", &arr[i].phone);
        while (getchar() != '\n')
            ;
        printf("enter gmail ID : ");
        fgets(arr[i].email, 100, stdin);
    }
    return;
}
void searchByName(con *arr, int n)
{
    char name[100];
    printf("Enter name of the contact: ");
    scanf(" %[^\n]s", name);
    int found = 0;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(name, (arr + i)->name) == 0)
        {
            printf("name is : %s", (arr + i)->name);
            printf("\nnumber is : %lld", (arr + i)->phone);
            printf("\nemail is : %s", (arr + i)->email);
            found = 1;
            index = i;
            break;
        }
    }
    FILE *ptr = fopen("searchByName.txt", "w");
    if (found == 1)
    {
        if (ptr == NULL)
        {
            printf("sorry txt file not form");
            exit(0);
        }
        fprintf(ptr, "%s", arr[index].name);
        fprintf(ptr, "%lld", arr[index].phone);
        fprintf(ptr, "%s", arr[index].email);
    }
    if (!found)
    {
        printf("No match found for the given name.\n");
    }
}
void searchByNumber(con *arr, int n)
{
    long long number;
    int found = 0;
    int index;
    printf("enter number : ");
    scanf("%lld", &number);
    for (int i = 0; i < n; i++)
    {
        if (number == (arr + i)->phone)
        {
            printf("name is : %s", (arr + i)->name);
            printf("\nnumber is : %lld", (arr + i)->phone);
            printf("\nemail is : %s", (arr + i)->email);
            found = 1;
            index = i;
            break;
        }
    }
    FILE *ptr = fopen("searchByNumber.txt", "w");
    if (found == 1)
    {
        if (ptr == NULL)
        {
            printf("soory txt file not form");
            exit(0);
        }
        fprintf(ptr, "%s", arr[index].name);
        fprintf(ptr, "%lld", arr[index].phone);
        fprintf(ptr, "%s", arr[index].email);
    }
    if (!found)
    {
        printf("No match found for the given name.\n");
    }
}
int main()
{
    con arr[100];
    int n;
    printf("enter number of candidates : ");
    scanf("%d", &n);
    add_contact(arr, n);
    printf("for sreach by number press N/n \n and by name press M/m\n and E/e to exit search : ");
    char ch;
    do
    {
        printf("\nenter choice : ");
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'M':
        case 'm':
            searchByName(arr, n);
            break;
        case 'N':
        case 'n':
            searchByNumber(arr, n);
            break;
        case 'E':
        case 'e':
            printf("Exiting search.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (ch != 'e' && ch != 'E');
}
