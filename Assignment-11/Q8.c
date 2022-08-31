#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // This header file is included for the system("cls") statement.
void pascalTriangle(int);
int comb(int, int);
int fact(int);
int main(){
    int a;
    system("cls");
    printf("Printing pascal triangle\n");
    printf("Enter a number");
    scanf("%d",&a);
    pascalTriangle(a);
    return 0;
}



int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

void pascalTriangle(int n){
    int i,j,k,f=1;
    for(i=0;i<=n;i++){
        k=0;
        f=1;
        for(j=0;j<=n*n;j++){
            if(j>=n-i && j<=n+i){
                if(f){
                    if(comb(i,k)>9){
                        printf("%d",comb(i,k++));
                    }
                    else{
                        printf("%d ",comb(i,k++));
                    }
                    
                    f=0;
                }
                else{
                    printf("  ");
                    f=1;
                }

            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

int comb(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}



// void printPascal(int n){
//     int i,j,c,f=1;
//     for(i=1;i<=n;i++){
//         c=1;
//         f=1;
//         for(j=1;j<=n*n-1;j++){
//             if((j>=(n+1)-i) && (j<=(n-1)+i)){
//                 if(c<=i && f==1){
//                     printf("%d ",c++);
//                 }
//                 else{
//                     if(f==1){
//                         c--;
//                         f=0;
//                     }
                    
//                     printf("%d ",--c);
//                 }
                    
//             }
//             else
//                 printf("  ");
                
//         }
//         printf("\n");
//     }
// }