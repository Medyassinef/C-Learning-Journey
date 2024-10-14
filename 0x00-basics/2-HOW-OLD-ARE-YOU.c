#include <stdio.h>

int main() {
    const int Thisyear = 2024;
    int Yearofbirth;
    printf("Enter the year of birth: ");
    scanf("%d",&Yearofbirth);
    while (Yearofbirth < 1940){
        printf("You are dead!!!\nEnter your right year of birth!\n");
        scanf("%d",&Yearofbirth);
    }
    printf("You are %d years old!",Thisyear-Yearofbirth);
    return 0;
}
