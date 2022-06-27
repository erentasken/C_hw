#include <stdio.h>
void arrange(int array[], int n){
    int temp;
    for(int i = 0; i+1 < n; i++){
        if(!(i % 2)){ // even 
            if(array[i]>array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        else{
            if(array[i]<array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}
void printArray(int array[], int size){
    for(int i = 0; i<size;i++) printf("%d ", array[i]);
}
int main(){
    int array[] = {6, 4, 2, 1, 8, 3};
    printf("The array given is: \n"); printArray(array, 6); printf("\n");
    arrange(array,6);
    printf("After arrangemenet: \n"); printArray(array,6);
    return 0;
}

// 0 1 2 3 4 5
// 6 4 2 1 8 3 ind = 0  
// 4 6 2 1 8 3 ind = 1
// 4 6 2 1 8 3 ind = 2
// 4 6 1 2 8 3 ind = 3
// 4 6 1 8 2 3 ind = 4