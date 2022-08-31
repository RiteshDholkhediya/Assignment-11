#include<stdio.h>
#include<conio.h>

int lcm(int, int);
int main(){
    int a,b;
    printf("ENter two numbers");
    scanf("%d%d",&a,&b);
    printf("LCM of two numbers are %d",lcm(a,b));
    getch();
    return 0;
}

int lcm(int n,int m){
    int lcm=1,i=2;
    while(1){
        while(n%i==0 && m%i==0){
            n=n/i;
            m=m/i;
            lcm=lcm*i;
        
        }
        while(n%i==0 && m%i!=0){
            n=n/i;
            lcm=lcm*i;
            
        }

        while(n%i!=0 && m%i==0){
            m=m/i;
            lcm=lcm*i;
        }
        if(n==1 && m==1)
            break;
        i++;
    }
    return lcm;
}