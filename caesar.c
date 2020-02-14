#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2) // This entire thing just checks if my arguments are valid
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]))
            {

            }

            else
            {
                printf("./caesar key\n");
                return 1;
            }


        }

        printf("Success!\n");
        printf("%s\n", argv[1]);
    }
    else
    {
        printf("./caesar key\n");
        return 1;
    }

    int k = atoi(argv[1]); // convert argument character into integer

    string p = get_string("Plaintext: \n"); // get plaintext
    printf("ciphertext: ");

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (isalpha(p[i])) // check if alphabet
        {
            if (isupper(p[i])) // check if uppercase
            {
                int x = (int)p[i] - 65; // convert to integer
                int y = (x + k) % 26;
                int c = 65 + y; // ASCII value for cyphertext
                printf("%c", c);
            }

            else if (islower(p[i]))
            {
                int x = (int)p[i] - 97; // convert to integer
                int y = (x + k) % 26;
                int c = 97 + y; // ASCII value for cyphertext
                printf("%c", c);
            }


        }

        else
            {
                printf("%c", p[i]);
            }
    }
    printf("\n");
}
