Overview
This Contact Management System is a simple C program that allows users to manage their contacts efficiently. The program provides functionalities to add new contacts, search for contacts by name or phone number, and display all contacts. It also saves the search results to separate files for easy access.

Features
Add New Contacts: Input the name, phone number, and email address of a new contact.
Search Contacts:
By Name: Find a contact by entering the name.
By Phone Number: Find a contact by entering the phone number.
Display All Contacts: View all the contacts stored in the system.
Save Search Results: Save the search results to separate text files (searchByName.txt and searchByNumber.txt).
Program Structure
Data Structure
The program uses a struct to define a contact:
/*
typedef struct contacts
{
    char name[100];
    long long phone;
    char email[100];
} con;
*/
Functions
void add_contact(con arr[], int n): Adds new contacts to the array.
void searchByName(con *arr, int n): Searches for a contact by name and saves the result to searchByName.txt.
void searchByNumber(con *arr, int n): Searches for a contact by phone number and saves the result to searchByNumber.txt.
Main Function
The main function initializes the contact array, gets the number of contacts from the user, and provides a menu for searching contacts:

Contact Management System in C
Overview
This Contact Management System is a simple C program that allows users to manage their contacts efficiently. The program provides functionalities to add new contacts, search for contacts by name or phone number, and display all contacts. It also saves the search results to separate files for easy access.

Features
Add New Contacts: Input the name, phone number, and email address of a new contact.
Search Contacts:
By Name: Find a contact by entering the name.
By Phone Number: Find a contact by entering the phone number.
Display All Contacts: View all the contacts stored in the system.
Save Search Results: Save the search results to separate text files (searchByName.txt and searchByNumber.txt).
Program Structure
Data Structure
The program uses a struct to define a contact:

c
Copy code
typedef struct contacts
{
    char name[100];
    long long phone;
    char email[100];
} con;
Functions
void add_contact(con arr[], int n): Adds new contacts to the array.
void searchByName(con *arr, int n): Searches for a contact by name and saves the result to searchByName.txt.
void searchByNumber(con *arr, int n): Searches for a contact by phone number and saves the result to searchByNumber.txt.
Main Function
The main function initializes the contact array, gets the number of contacts from the user, and provides a menu for searching contacts:
/*
int main()
{
    con arr[100];
    int n;
    printf("Enter number of candidates: ");
    scanf("%d", &n);
    add_contact(arr, n);
    printf("For search by number press N/n \n and by name press M/m\n and E/e to exit search: ");
    char ch;
    do
    {
        printf("\nEnter choice: ");
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
*/
Usage
Compile the Program: Use a C compiler to compile the program.

sh
Copy code
gcc -o contact_management contact_management.c
Run the Program:

sh
Copy code
./contact_management
Input Contacts: Enter the number of contacts and provide their details when prompted.

Search Contacts: Follow the on-screen instructions to search for contacts by name or phone number.

File Structure
contact_management.c: The main source file containing the program code.
searchByName.txt: The file where search results by name are saved.
searchByNumber.txt: The file where search results by phone number are saved.
Limitations
The maximum number of contacts is limited to 100.
The program does not currently support editing or deleting contacts.
Future Improvements
Add functionality to edit and delete contacts.
Improve user interface and input validation.
Implement dynamic memory allocation to handle a larger number of contacts.
Contributing
Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.

