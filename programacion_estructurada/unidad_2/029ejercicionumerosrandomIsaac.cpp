#include <iostream>
#include<cstdlib>
#include<ctime>
int main() {
    srand(time(0));
    int longArray=0;
    int minNum=5,maxNum=100;
    int i=0,random=0,counter=0;
    int result[5];

    //check the number of the array know a positive integer
    do{
        printf("Array Long: ");
        scanf("%d",&longArray);
        if (longArray<0){
            printf("Type a positive number\n");
        }
    }while (longArray<0);
    int numVector [longArray]={0};
    //check the variable minNum know shorter than maxNum
    do{
        printf("\nType the range of numbers for your array\n");
        printf("\nMin: ");
        scanf("%d",&minNum);
        printf("\nMax: ");
        scanf("%d",&maxNum);
        if (minNum>maxNum){
            printf("\nYour numbers are wrong, type the range right please");
        }
    }while (minNum>maxNum);
    printf("Random numbers\n");

    //random numbers
    while (counter!=(longArray)){
        random=minNum+rand()%(maxNum-minNum);
        for (i = 0; i < longArray; i++) {
            if (random==numVector[i]){
                break;
            }
        }
        if (i==(longArray)){
            result[counter]=random;
            counter++;
        }
    }
    for (int j = 0; j < longArray ; ++j) {
        printf("%d,",result[j]);

    }



    return 0;
}
