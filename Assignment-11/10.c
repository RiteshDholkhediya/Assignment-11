#include<stdio.h>
#include<conio.h>

int sumFactorial(int);
int fact(int);
int main(){
    int a;
    printf("print sum of this series  :- 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5\n");
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Sum of the factorial series is %d",sumFactorial(a));
    return 0;
}

int sumFactorial(int n){
    int i,sum=0;
    for(i=1; i<=n; i++){
        sum = sum + fact(i)/i;
    }
    return sum;
}

int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
