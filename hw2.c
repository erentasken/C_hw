#include <stdio.h>
double interest_a();
double interest_b();
double interest_c();
int main(){
    int amount;
    char type;
    double result;
    printf("Please enter the amount and type: ");
    scanf("%d %c", &amount, &type);
    if(type == 'a'){
        result = interest_a(amount);
    }
    else if(type == 'b'){
        result = interest_b(amount);
    }
    else if(type == 'c'){
        result = interest_c(amount);
    }
    printf("%lf\n", result);
    return 0;
}
double interest_a(int amount){
    if(amount < 1000.0){
        return amount/10.0;
    }
    else{
        return (amount*15)/100.0;
    }
}
double interest_b(int amount){
    if(amount < 1000){
        return amount/5.0;
    }
    else if(amount >= 1000 && amount < 2000){
        return (amount*25)/100.0;
    }
    else{
        return (amount*30)/100.0;
    }
}
double interest_c(int amount){
    if(amount < 1000){
        return amount/5.0 + 100.0;
    }
    else if(amount >= 1000 && amount < 2000){
        return (amount*30)/100.0;
    }
    else{
        return (amount*40)/100.0;}
}