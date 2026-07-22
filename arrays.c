//accessing array elements
/*#include<stdio.h>
int main(){
    int marks[5]={80,85,90,95,100};
    printf("%d",marks[2]);
    return 0;
}*/
//without macro
/*#include<stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<10;i++){
        printf("enter the input for the index %d:\n",i);
        scanf("%d",&a[i]);
    }
    printf("Array elements are as follows\n");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}*/
//with macro
/*#include<stdio.h>
#define N 10
int main(){
    int a[N],i;
    for(i=0;i<N;i++){
        printf("enter the input for the index %d:\n",i);
        scanf("%d",&a[i]);
    }
    printf("array elements are as follows\n");
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    return 0;
}*/
// WAP to print the numbers in reverse order 34 56 54 32 67 89 90 32 21
/*#include<stdio.h>
int main(){
    int a[9]={34,56,54,32,67,89,90,32,21};
    int i;
    for(i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("after reversing\n");
    for(i=8;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}*/
//WAP to check whether a digit in a number appears morethan once
/*#include<stdio.h>
int main(){
    int seen[10]={0};
    int N;
    printf("enter the number\n");
    scanf("%d",&N);
    int rem;
    while(N>0){
        rem=N%10;
        if(seen[rem]==1)
        break;
        seen[rem]=1;
        N=N/10;
    }
    if(N>0)
    printf("Yes");
    else
    printf("No");
    return 0;
}*/
//multidimensional array
//2D array(printing array elements)
/*#include<stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
    }
}*/
//3D arrays
/*#include<stdio.h>
int main(){
int a[2][2][3]={
    {{1,2,3},{4,5,6}},
    {{7,8,9},{10,11,12}}};
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf("%d ",a[i][j][k]);

            }
        }
    }
    return 0;
}*/
//printing sum of the row and column of an array
/*#include<stdio.h>
int main(){
    int a[5][5]={
        {8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}
    };
    int i,j;
    int sum=0;
    printf("Row total:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            sum+=a[i][j];
        }
        printf("sum=%d ",sum);
        sum=0;
    }
    printf("\ncolumn total:\n");
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
            sum+=a[i][j];
        }
        printf("sum=%d ",sum);
        sum=0;
    }
    return 0;
}*/
//matrix multiplication
/*#include<stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;
    printf("enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &arows, &acolumns);
    printf("enter the elements of matrix a:\n");
    for(i=0;i<arows;i++){
        for(j=0;j<acolumns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the rows and columns of matrix B:\n");
    scanf("%d %d",&brows,&bcolumns);
    if (brows!=acolumns){
        printf("sorry! we cant multiply");
    }
    else{
    printf("enter the elements of matrix B:\n ");
    for(i=0;i<brows;i++){
        for(j=0;j<bcolumns;j++){
            scanf("%d",&b[i][j]);
        }
    }
}
printf("\n");
for(i=0;i<arows;i++){
    for(j=0;j<bcolumns;j++){
        for(k=0;k<brows;k++){
            sum+=a[i][k]*b[k][j];
            product[i][j]=sum;
        }
        sum=0;

    }
}
printf("\nthe resultant matrix is:\n");
for(i=0;i<arows;i++){
    for(j=0;j<bcolumns;j++){
        printf("%d ",product[i][j]);
    }
    printf("\n");
}
return 0;
}*/
//variable length arrays
#include<stdio.h>
int main(){
    int n,i;
    printf("enter how many values you want to reverse\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("elements in reverse order are:\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
