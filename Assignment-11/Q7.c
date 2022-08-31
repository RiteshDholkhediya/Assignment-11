#include<stdio.h>
#include<conio.h>
void fibo(int);
int main(){
    int a;
    printf("Printing n numbers of fibonacci series\n");
    printf("Enter a number");
    scanf("%d",&a);
    fibo(a);
    getch();
    return 0;
}

void fibo(int n){
    int a=-1, b=1,c;
    while(n--){
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}