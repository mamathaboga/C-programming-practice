/*//arithmetic operators
#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%%b=%d\n",a%b);
    return 0;
}*/
//increment and decrement operators
/*#include<stdio.h>
int main(){
    int a=4,b=3;
    printf("%d\n",a+++b);
    printf("%d\n",a+ ++b);
    return 0;
}*/
//relational and logical operators
/*#include<stdio.h>
int main(){
    int a=5;
    if(a==5&&a!=6&&a<=56&&a>4)
    {
        printf("welcome to the boolean world of operators\n");
    }

}*/
//bitwise operators
/*#include<stdio.h>
int main(){
    char x=1,y=2;
    if(x&y)
    printf("the result of x&y is 1\n");
    if(x&&y)
    printf("the result of x&&y is1\n");
    return 0;

}*/
//left shift and right shift operator
/*#include<stdio.h>
int main(){
    char var=3;
    printf("%d\n",var<<1);
    printf("%d",var>>1);
    return 0;
}*/
//bitwise operators
/*#include<stdio.h>
int main(){
    int a=4,b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after XOR,a=%d and b=%d\n",a,b);
    return 0;
}*/
//conditional operators
#include<stdio.h>
int main(){
    char result;
    int marks;
    printf("enter marks\n");
    scanf("%d",&marks);
    result=(marks>33)?'p':'f';
    printf("%c",result);
    return 0;
}
