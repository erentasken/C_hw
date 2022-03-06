#include <stdio.h>

int calculateEquation(int x, int c){
    return x * x + c; 
}


int readAndCalculate(void){
    int x, result, firstNum;
    scanf("%d", &x);
    firstNum = calculateEquation(2*x,3);
    result = calculateEquation(firstNum,5);
    printf("the result with x = %d is %d \n", x, result);
    return result;
}


void printX(int value){
    int mod = value % 10 ;
    printf("The value %d mapped to %d\n", value, mod);
    printf("%d  %d\n", mod, mod);
    printf("  %d  \n", mod);
    printf("%d  %d\n", mod, mod); 
}

int main(){
    int readandVal;
    readandVal = readAndCalculate();
    printX(readandVal);
    readandVal = readAndCalculate();
    printX(readandVal);
    return 0;

}