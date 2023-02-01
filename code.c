#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void fullName(char firstName[], char middleName[], char lastName[]) {

    //char fullname[100] = { firstName };

    printf("%s, %s %s", lastName, firstName, middleName);

}

void checkPass(char password[]) {

    bool lower = false;
    bool upper = false;
    bool digit = false;
    bool symbol = false;

    long unsigned int passSize = 0;

    passSize = strlen(password);

    if (passSize <= 6) {

        printf("Password too short\n");

    }

    else if (passSize >= 14) {

        printf("Password too long\n");

    }

    for (long unsigned int i = 0; i < passSize; i++) {

        if (islower(password[i])) {

            lower = true;

        }


        if (isupper(password[i])) {

            upper = true;

        }

        if (isdigit(password[i])) {

            digit = true;

        }

        if (ispunct(password[i])) {

            symbol = true;

        }
    }



    if (lower == false) {

        printf("Password missing lowercase letter \n");

    }

    if (upper == false) {

        printf("Password missing uppercase letter\n");

    }

    if (digit == false) {

        printf("Password missing digit\n");

    }

    if (symbol == false) {

        printf("Password missing punctuation\n");

    }

    else if ((symbol != false) && (digit != false) && (upper != false) && (lower != false))

        printf("Password is valid\n");


}

int main()
{
    char firstName[10];
    char middleName[10];
    char lastName[10];

    char password[20];

    int num = 0;

    printf("Menu\n");
    printf("1 - name function\n");
    printf("2 - password function\n");

    scanf("%i", &num);


    if (num == 1) {

        printf("Enter fullName\n");

        scanf("%s", firstName);
        scanf("%s", middleName);
        scanf("%s", lastName);

        fullName(firstName, middleName, lastName);

    }

    if (num == 2) {

        printf("Enter a valid password\n");
        scanf("%s", password);

        checkPass(password);


    }


}

