#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10
#define MIN_LENGTH 8

char characters[] = "name";

void generate_passwords(int length, char *password, FILE *f) {
    if (length == MAX_LENGTH) {
        return;
    }
    int i;
    for (i = 0; i < strlen(characters); i++) {
        password[length] = characters[i];
        if (length >= MIN_LENGTH) {
            fprintf(f, "%s\n", password);
        }
        generate_passwords(length + 1, password, f);
    }
}

int main() {
    FILE *f = fopen("passwords.txt", "w");
    char password[MAX_LENGTH + 1] = {0};
    generate_passwords(0, password, f);
    fclose(f);
    return 0;
}
