#include<stdio.h>
#include<conio.h>
int hcf(int, int);

int main(){
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);

    printf("HCf is %d",hcf(a,b));

}

int hcf(int x, int y){
    int hcf;
    while(1){
        if(x>y){
            if(x%y==0){
                hcf=y;
                break;
            }
            else{
                x=x%y;

            }
        }
        else{
            if(y%x==0){
                hcf=x;
                break;
            }
            else
                y=y%x;
        }
    }
    return hcf;
}