#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'a':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'b':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'c':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'd':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        case 'f':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades");
    }
    return 0;
}
/*Switch = A more efficient alternative to using man “else if” statements
allows a value to be tested for equality against many cases.
*/