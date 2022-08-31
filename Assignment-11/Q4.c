#include<stdio.h>
#include<conio.h>
int isPrime(int);
int nextPrime(int);
int main(){
    int a;
    printf("Enter a numbers ");
    scanf("%d",&a);
    printf("Next prime number is %d",nextPrime(a));
    getch();
    return 0;
}

int nextPrime(int n){
    int i=1,p;
    while(1){
        if(isPrime(n+i)){
            p=n+i;
            break;
        }
        i++;        
    }
    return p;
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