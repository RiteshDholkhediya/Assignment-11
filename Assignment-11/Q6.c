#include<stdio.h>
#include<conio.h>
int isPrime(int);
void primeBetweenTwoNUmbers(int x, int y);
int main(){
    int a,b;
    printf("Prime numbers between two numbers\n");
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    primeBetweenTwoNUmbers(a,b);
    getch();
    return 0;
}

void primeBetweenTwoNUmbers(int x, int y){
        int i;
        x++;
        for(i=x;i<y;i++){
            if(isPrime(i))
                printf("%d ",i);
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