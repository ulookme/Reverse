#include <stdio.h>
#include <string.h>

int main(void) {
    char key[100];
    char correct_key[] = "__stack_check";

    printf("Please enter key: ");
    scanf("%99s", key);

    if (strcmp(key, correct_key) == 0) {
        printf("Good job.\n");
    } else {
        printf("Nope.\n");
    }

    return 0;
}
