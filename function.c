#include<stdio.h>
int add(int num1,int num2);
int main(){
    int x;
    x = add(5,6);
    printf("%d",x);
    return 0;
}
int add(int num1,int num2){
    int sum;
    sum = num1+num2;
    return sum;
}