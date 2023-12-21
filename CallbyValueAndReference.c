#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//Call by reference
void set1(int *a)
{
    *a=0;
    printf("Set :In set function a = %d\n" ,*a); //OUTPUT = 0
}
//Call by value
void set2(int b)
{
    b=abs(b);
    printf("Set :In set function b = %d\n" ,b); //OUTPUT = 10

}


int main()
{
    //Call by reference 
    int a = 10;
    printf("Main Before calling set function a = %d\n",a); //OUTPUT = 10
    set1(&a);
    printf("After calling set function a = %d\n",a); //OUTPUT = 0
    
    //Call by value
    int b = -10;
    printf("Main Before calling set function b = %d\n",b); //OUTPUT = -10
    set2(b);
    printf("After calling set function b = %d\n",b); //OUTPUT = -10
}
//When used to call by value, The variable just change in the function However it doesn't change main and memory 
//But when used to call by reference , The variable changes everywhere




