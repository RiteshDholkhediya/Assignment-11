#include<stdio.h>
#include<conio.h>
int isPrime(int);
void nPrime(int);
int main(){
    int a;
    printf("Enter a numbers ");
    scanf("%d",&a);
    nPrime(a);
    getch();
    return 0;
}

void nPrime(int n){
    int i=2,j=1;
    while(1){
        if(isPrime(i)){
            printf("%d ",i);
            if(j==n)
                break;
            j++;
        }
        i++;    
        
    }
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