#include <stdio.h>
#include <stdlib.h>

// Database structure
struct AUTH
{
    char username[50];
    char position[50];
    char password[50];
    char class[50];
    int id; // primary key
}auth;

struct STUDENT
{
    char name[50];
    char class[50];
    char div;
    int roll_no;
    int id; // primary key
};

void Authentication()
{
    printf("Enter Username= ");
    gets(auth.username);
    printf("Enter Password= ");
    gets(auth.password);
    printf("Enter the Position= ");
    gets(auth.position);
    
    auth.id=1;

    
}

int main(int argc, char const *argv[])
{
    
}
