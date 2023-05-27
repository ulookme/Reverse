#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void ok(void) {
    puts("Good job.");
    return;
}

void no(void) {
    puts("Nope.");
    exit(1);
}

int main(void) {
    int local_10;
    int local_14;
    size_t local_18;
    char user_input[24];
    char local_21[9];
    char local_3d;
    char local_3c;
    char local_3b;

    printf("Please enter key: ");
    local_10 = scanf("%23s", user_input);
    if (local_10 != 1) {
        no();
    }

    // Patching the input directly to the correct input
    strcpy(user_input, "00101108097098101114101");

    memset(local_21, 0, 9);
    local_21[0] = 'd';
    local_18 = 2;
    local_14 = 1;

    while (true) {
        if (strlen(local_21) >= 8 || local_18 >= strlen(user_input)) {
            break;
        }
        local_3d = user_input[local_18];
        local_3c = user_input[local_18 + 1];
        local_3b = user_input[local_18 + 2];

        // Creating a string to be able to use atoi
        char str[4] = { local_3d, local_3c, local_3b, '\0' };

        int number = atoi(str);
        local_21[local_14] = (char)number;
        local_18 = local_18 + 3;
        local_14 = local_14 + 1;
    }
    local_21[local_14] = '\0';

    if (strcmp(local_21,"delabere") == 0) {
        ok();
    }
    else {
        no();
    }
    return 0;
}