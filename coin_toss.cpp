#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int toss();
int main() {
    int f;
    int head = 0;
    int tail = 0;

    printf("Welcome to Coin Flip Simulator!\n");
    printf("H-Represent Head And T-Represent Tails\n");
    printf("Enter the number of times you want to flip the coin : ");
    scanf("%d",&f);
    srand(time(NULL));
    for(int i=1;i<=f;i++){
        if(toss() == 0)
            head++;
        else
            tail++;
        if(i%10==0)
            printf("\n");
    }

    printf("\nHeads comes out %d times \n",head);
    printf("Tails comes out %d times",tail);
    return 0;
}

int toss() {
    if(rand()%2 == 0){
        printf(" H ");
        return 0;
    }
    else {
        printf(" T ");
        return 1;
    }
}

