//printing 1 to 10 numbers
/*#include<stdio.h>
int main(){
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
//printing numbers from 20 to 1
/*#include<stdio.h>
int main(){
    int i=20;
    while(i>0)
    {
        printf("%d\n",i);
        i--;
    }
return 0;
}*/
//printing even numbers
/*#include<stdio.h>
int main(){
    int i=0;
    while(i<=10)
    {
        printf("%d",i);
        i+=2;
    }
    return 0;
}*/
//sum of numbers from 1 to 100 using for loop
/*#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        sum+=i;
    }
    printf("the sum of numbers from 1 to 100 is %d\n",sum);
    return 0;

}*/
//printing numbers from 1 to 100 using while loop
/*#include<stdio.h>
int main(){
    int sum=0,i=1;
    while(i<=100)
    {
        sum+=i;
        i++;
    }
    printf("the sum of numbers from 1 to 100 is %d\n",sum);
    return 0;
}*/
//using while
/*#include<stdio.h>
int main(){
    int n;
    printf("enter an integer \n");
    scanf("%d",&n);
    while(n!=0){
        printf("enter an integer\n");
        scanf("%d",&n);
    }
    printf("out of the loop");
}*/
// using do while
/*#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter an integer\n");
        scanf("%d",&n);
    }
    while(n!=0);
    printf("you are out of the loop");  
    return 0;
}*/
//for loop
/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d",i);
    }
    return 0;
}*/
//5 table
/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("5*%d=%d\n",i,5*i);
    }
    return 0;
}*/
//squares fro 1 to 10
/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("square of %d is %d\n",i,i*i);
    }
    return 0;
}*/
//program that allow user to enter an integer until she enter 0 or negative number
/*#include<stdio.h>
int main(){
    int n;
    printf("enter an integer\n");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n<0)
        break;
        printf("enter an integer\n");
        scanf("%d",&n);
    }
    printf("out of the loop");
    return 0;
}*/
//printf all the odd numbers from 1 t0 20
/*#include<stdio.h>
int main(){
    int i,n=2;
    for(i=1;i<=20;i++){
        if(i==n){
            n=n+2;
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}*/
// 2x2 matrix
/*#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
//4x4 matrix
/*#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            printf("*");
        }
        printf("\n");
    }
}*/
//pyramid
/*#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if (j>=n-(i-1)&&j<=n+(i-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;

}*/
//right triangle pattern
/*#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
    printf("*");
    }
    printf("\n");
    
    }
    return 0;
}*/
//palindrome
/*#include<stdio.h>
int main(){
    int n,result=0,q,remainder;
    printf("enter a number\n");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        remainder=q%10;
        result=result*10+remainder;
        q=q/10;
    }
    if(result==n){
        printf("its a palindrome\n");
    }
    else{
        printf("its not a palindrome");
    }
    return 0;
}*/
//reverse of a string
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,length;
    printf("enter a string\n");
    scanf("%s",str);
    length=strlen(str);
    printf("Reversed string:");
    for(i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}*/
//Armstrong number
/*#include<stdio.h>
int main(){
int number,count=0,cnt,rem,mul=1,result=0;
    printf("enter a number\n");
    scanf("%d",&number);
    int q=number;
    while(q!=0){
        q=q/10;
        count++;
    }
    cnt=count;
    q=number;
    while(q!=0){
        rem=q%10;
        while(cnt!=0){
            mul=mul*rem;
            cnt--;
        }
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;
    }
    if(result==number){
        printf("the number is a armstrong number");
    }
    else
    printf("its is not a armstrong number");
    return 0;
}*/
//to check prime number or not
/*#include<stdio.h>
#include<math.h>
int main(){
    int x;
    int i,val1,val2,count=0;
    printf("enter a number\n");
    scanf("%d",&x);
    val1=ceil(sqrt(x));
    val2=x;
    for(i=2;i<=val1;i++){
        if(val2%i==0)
        count=1;
    }
    if((count==0&&val2!=1)||val2==2||val2==3)
    printf("%d is a prime number",val2);
    else 
    printf("%d is not a prime number",val2);
    return 0;
}*/
//sum of two numbers without using '+' operator
/*#include<stdio.h>
int main(){
    int x,y;
    printf("enter the values of x and y\n");
    scanf("%d %d",&x,&y);
    while(y!=0){
        x++;
        y--;
    }
    printf("the sum of the two numbers is %d",x);
    return 0; 
}*/
//fibonacci series
/*#include<stdio.h>
int main(){
    int a=0,b=1,i,result,n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        result=a+b;
        a=b;
       b=result;
    }
    return 0;
}*/
//check leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if(year%400==0)
    printf("it is a leap year");
    else if(year%100==0)
    printf("it is not a leap year");
    else if(year%4==0)
    printf("it is a leap year");
    else 
    printf("it is not a leap year");
    return 0;
}


