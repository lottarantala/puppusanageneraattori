#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char verbit[5][101];
    char substantiivit[5][101];
    char substantiivi1[101] = {0};
    int maara, lause;
    srand(time(NULL));

    for(int i = 0; i < 5; i++){
        printf("Anna substantiivi (max 100 merkkia) >\n");
        scanf("%s", substantiivit[i]);
        printf("Anna verbi (max 100 merkkia) >\n");
        scanf("%s", verbit[i]);
    }
    printf("Montako puppulausetta generoidaan >\n");
    scanf("%d", &maara);
    for(int i = 0; i < maara; i++){
        lause = rand() % 3 + 1;
        switch (lause){
            case 1:
                strcat(substantiivi1, substantiivit[rand() % 5]);
                printf("%c%s %s tai %s %s.\n", toupper(substantiivi1[0]), substantiivi1+1, verbit[rand() % 5], substantiivit[rand() % 5], verbit[rand() % 5]);
                break;
            case 2:
                printf("Jos %s %s, niin %s %s.\n", substantiivit[rand() % 5], verbit[rand() % 5], substantiivit[rand() % 5], verbit[rand() % 5]);
                break;
            case 3:
                strcat(substantiivi1, substantiivit[rand() % 5]);
                printf("%c%s %s.\n", toupper(substantiivi1[0]), substantiivi1+1, verbit[rand() % 5]);
                break;
            case 4:
                strcat(substantiivi1, substantiivit[rand() % 5]);
                printf("%c%s %s ja %s %s.\n", toupper(substantiivi1[0]), substantiivi1+1, verbit[rand() % 5], substantiivit[rand() % 5], verbit[rand() % 5]);
                break;
        }
        memset(substantiivi1, 0, 100);
    }
    return 0;
}