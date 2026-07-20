//predefined functions
/*#include<stdio.h>
#include<math.h>
int main(){
    printf("the squareroot =%f\n",sqrt(5));
    printf("the power value=%d",pow(5,3));
    return 0;
}*/
//sum of two numbers using user defined functions
/*#include<stdio.h>
int sum(int,int);//fun declaration
int main(){
    int x,y,result;
    printf("enter the values for x and y:\n");
    scanf("%d %d",&x,&y);
    result=sum(x,y);//fun calling
    printf("the addition =%d",result);
}
int sum(int a,int b)//fun definition
{
    int c;//local variable declaration
    c=a+b;
    return c;
}*/
//fun with no arguments and no return value
/*#include<stdio.h>
void biggestNum();
int main(){
    biggestNum();
}
void biggestNum(){
    int a,b;
    printf("enter the values for a and b\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is big\n",a);
    else 
    printf("%d is big\n",b);
}*/
//fun with no arguments and with return value
/*#include<stdio.h>
int biggestNum();
int main(){
    int result;
    result=biggestNum();
    printf("the biggest number is %d\n",result);
}
int biggestNum(){
    int a,b,big;
    printf("enter the values for a and b\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    big=a;
    else
    big=b;
    return big;
}*/
//fun with arguments and with no return value
/*#include<stdio.h>
void biggestNum(int,int);
int main(){
    int x,y;
    printf("enter the values for x and y\n");
    scanf("%d %d",&x,&y);
    biggestNum(x,y);
}
void biggestNum(int a,int b){
    if(a>b)
    printf("%d is big\n",a);
    else
    printf("%d is big\n",b);  
}*/
//fun with arguments and return value
/*#include<stdio.h>
int biggestNum(int,int);
int main(){
    int x,y,result;
    printf("enter the values of x and y\n");
    scanf("%d %d",&x,&y);
    result=biggestNum(x,y);
    printf("the biggest number is %d\n",result);
}
int biggestNum(int a,int b){
    int big;
    if(a>b)
    big=a;
    else
    big=b;
    return big;
}*/
//parameter passing techniques
//call by value
/*#include<stdio.h>
int swap(int x,int y);
int main(){
    int a=10,b=20;
    printf("before swapping\n");
    printf("a=%d\t,b=%d\n",a,b);
    swap(a,b);
    printf("after swapping\n");
    printf("a=%d\t,b=%d\n",a,b);
}
int swap(int x ,int y){
    int t;
    t=x;
    x=y;
    y=t;
}*/
//call by referance
/*#include<stdio.h>
int swap(int*x,int*y);
int main(){
    int a=10,b=20;
    printf("before swapping:\n");
    printf("a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping\n");
    printf("a=%d\tb=%d\n",a,b);
}
int swap(int*x,int*y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}*/
//recursive functions
/*#include<stdio.h>
int fact(int);
int main(){
    int n,result;
    printf("enter the value of n\n");
    scanf("%d",&n);
    result=fact(n);
    printf("the factorial of %d is %d\n",n,result);
}
int fact(int n){
    if(n>1)
    return n*fact(n-1);
    else
    return 1;
}*/



