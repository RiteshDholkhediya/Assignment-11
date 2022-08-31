#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // This header file is included for the system("cls") statement.
int square(int);
int main(){
    int a;
    system("cls");
    printf("Print square of a number\n");
    printf("Enter a number");
    scanf("%d",&a);
    printf("Square of %d is %d",a,square(a));
    return 0;
}

int square(int n){
    return n*n;
}