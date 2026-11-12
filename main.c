#include <stdio.h>

int main(void){
    int i;
    int grade[5];

    for (i=0;i<5;i++){
        printf("grade[%i] =",i);
        scanf("%d",&grade[i]);
    }
    
    int sum=0;

    for (i=0;i<5;i++){
        printf("grade[%i]=%i\n",i,*(grade+i));
        sum+=*(grade+i);
    }
    printf("Average : %i\n", sum/5);

    return 0;
}