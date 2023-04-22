#include <stdio.h>
#include <string.h>

int main() {
    char question[] = "How many days are in a year?";
    char answer[] = "365";

    char user_answer[100];
    printf("%s\n", question);
    scanf("%99s", user_answer);

    if (strcmp(user_answer, answer) == 0) {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is %s.\n", answer);
    }

    return 0;
}
