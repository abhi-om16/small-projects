#include <stdio.h>

void checkPassword(char p[])
{
    int i, len = 0;
    int upper = 0, lower = 0, digit = 0, special = 0;

    // Added '&& p[i] != '\n'' so the loop ignores the Enter key safely
    for(i = 0; p[i] != '\0' && p[i] != '\n'; i++)
    {
        len++;

        if(p[i] >= 'A' && p[i] <= 'Z')
            upper++;
        else if(p[i] >= 'a' && p[i] <= 'z')
            lower++;
        else if(p[i] >= '0' && p[i] <= '9')
            digit++;
        else
            special++;
    }

    printf("\n--- Analysis Results ---\n");
    printf("Length = %d\n", len);
    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d\n", special);
    printf("------------------------\n");

    if(len >= 8 && upper && lower && digit && special) {
        printf("Password Strength: Strong\n");
    }
    else if(len >= 6 && (lower || upper) && digit) {
        printf("Password Strength: Moderate\n");
    }
    else
    {
        printf("Password Strength: Weak\n");
        printf("Suggestions to fix your password:\n");
        
        // Targeted feedback for the user
        if(len < 8)
            printf(" -> Make it longer (at least 8 characters).\n");
        if(upper == 0)
            printf(" -> Add at least one uppercase letter (A-Z).\n");
        if(lower == 0)
            printf(" -> Add at least one lowercase letter (a-z).\n");
        if(digit == 0)
            printf(" -> Add at least one numerical digit (0-9).\n");
        if(special == 0)
            printf(" -> Add at least one special character (e.g., !, @, #).\n");
    }
}

int main()
{
    char password[100];

    printf("Enter Password: ");
    
    // Safely accepts spaces and limits input to 100 characters max
    fgets(password, sizeof(password), stdin);

    checkPassword(password);

    return 0;
}
