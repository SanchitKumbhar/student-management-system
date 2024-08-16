#include <stdio.h>
#include <stdlib.h>

// Database structure
struct AUTH
{
    // char username[50];
    // char position[50];
    // char password[50];
    // char class[50];
    int id; // primary key
};

struct STUDENT
{
    char name[50];
    char class[50];
    char div;
    int roll_no;
    int id; // primary key
};
void ReMemoryAllocationAuth()
{
    struct AUTH *auth = (struct AUTH *)malloc(2 * sizeof(struct AUTH));
    size_t n = 5 * sizeof(struct AUTH);

    struct AUTH *newauth = (struct AUTH *)realloc(auth, n);
    // auth[100].id=20;(
    printf("%d\n", sizeof(*newauth));
}

void ReMemoryAllocationStudent(size_t n)
{
    struct STUDENT *student = (struct STUDENT *)realloc(student, n * sizeof(struct STUDENT));
}

int main(int argc, char const *argv[])
{
    // int n = 0;
    // struct AUTH *auth = (struct AUTH *)malloc(2 * sizeof(struct AUTH));
    // struct STUDENT *student = (struct STUDENT *)malloc(n * sizeof(struct STUDENT));
    // ReMemoryAllocationAuth();
    // printf("%d",sizeof(auth));

    int *var = (int *)malloc(2 * sizeof(var));
    printf("%d\n", sizeof(var));

    size_t n = 5 * sizeof(var);

    var = (int *)realloc(var, n);
    var[90]=90;
    printf("%d\n", n);
    return 0;
}
