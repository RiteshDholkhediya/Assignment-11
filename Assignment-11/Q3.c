#include<stdio.h>
#include<conio.h>
int isPrime(int);

int main(){
    int a;
    printf("Enter a numbers ");
    scanf("%d",&a);
    if(isPrime(a))
        printf("%d is prime number",a);
    else
        printf("%d is not prime number",a);
    getch();
    return 0;
}

int isPrime(int n){
    int i=2,f=1;
    while(i<=n/2){
        if(n%i==0){
            f=0;
            break;
        }
        i++;
    }
    if(n==1)
        f=0;
    return f;
}