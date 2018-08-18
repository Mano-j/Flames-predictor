#include<stdio.h>
#include<ctype.h>

int a, b, d, n, i;
char name1[30], name2[30], e;

char toLower(char str[]) { // Function to convert a string to all lowercase.
    i = 0;
    while (str[i]) {
        e = str[i];
        str[i] = tolower(e); // Converts each char to lowercase.
        i++;
    }
    return str;
}

int main() {
    // Enter the names without any spaces.

    // Get the names and convert all the characters to lowercase for comparison.
    printf("Enter your name: "); // Get first name
    gets(name1);
    toLower(name1);

    printf("\n Enter your dream partner's name: "); // Get second name
    gets(name2);
    toLower(name2);

    // Calculating the length of the names.
    a = strlen(name1);
    b = strlen(name2);
    n = a + b;

    // Flames Calculation
    for (i = 0; i < a; i++) {
        e = name1[i];
        for (d = 0; d < b; d++) {
            if (e == name2[d]) {
                n = n - 2;
                break;
            }
        }
    }

    // Print the result.
    printf("\n Number of letters remaining is : %d ", n);
    printf("\n The almighty Flames calculator has predicted that %s and you are ", name2);

    if (n == 3 || n == 5 || n == 14 || n == 16 || n == 18)
        printf("Best Friends");
    else if (n == 10 || n == 19)
        printf("in Love");
    else if (n == 8 || n == 12 || n == 13 || n == 17)
        printf("Affectionate");
    else if (n == 6 || n == 11 || n == 15)
        printf("going to get Married");
    else if (n == 2 || n == 4 || n == 7 || n == 9 || n == 20)
        printf("Enemies");
    else
        printf("Sisters/Brothers");
    printf("\n");
    return 0;
}
