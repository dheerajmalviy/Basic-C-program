#include <stdio.h>
int main() {
    char c;
    printf("Enter u to display uppercase alphabets.\n");
    printf("Enter l to display lowercase alphabets. \n");
    scanf("%c", &c);

    if (c == 'U' || c == 'u') {
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    } else if (c == 'L' || c == 'l') {
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
    } else {
        printf("Error! You entered an invalid character.");
    }

    return 0;
}



// Output

// Enter u to display uppercase alphabets. 
// Enter l to display lowercase alphabets. l
// a b c d e f g h i j k l m n o p q r s t u v w x y z
