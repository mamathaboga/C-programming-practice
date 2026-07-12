/*#include<stdio.h>
#include<limits.h>
int main(){
    int var1=INT_MIN;
    int var2=INT_MAX;
    unsigned int var3=0;
    unsigned int var4=UINT_MAX;
    printf("the range of signed integer is from :%d to %d\n",var1,var2);
    printf("the range of unsigned int is from is from %u to %u",var3,var4);
    return 0;

}*/
#include<stdio.h>
#include<limits.h>
int main(){
    short int var1=SHRT_MIN;
    short int var2=SHRT_MAX;
   unsigned short int var3=0;
    unsigned short int var4=USHRT_MAX;
    long int var5=LONG_MIN;
    long int var6=LONG_MAX;
    unsigned long int var7=0;
    unsigned long int var8=ULONG_MAX;
    printf("the range of short int is %d to %d\n",var1,var2);
    printf("the range of unsigned short int is %u to %u\n",var3,var4);
    printf("the range of long int is %d to %d\n",var5,var6);
    printf("the rangr of unsigned long int is from %u to %u\n",var7,var8);
    return 0;
}
    


