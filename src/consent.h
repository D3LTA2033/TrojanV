#include <stdio.h>
#include <string.h>
#include "consent.h"

int get_user_consent(void) {
    char input[16];
    printf("Warning: You are about to run Trojan V.\n");
    printf("This software is for EDUCATIONAL USE ONLY and should be run in an isolated VM.\n");
    printf("Do you wish to proceed? (yes/no): ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 0;
    }
    // Remove newline character if present
    input[strcspn(input, "\n")] = 0;
    if (strcmp(input, "yes") == 0) {
        return 1;
    }
    return 0;
}
