#include <stdio.h>

int main(){
    //declare the variable 
    int x=0;
    //print the size using sizeof operator 
    printf("size of int is:%ld\n",sizeof x);
    
    char y='0';
    printf("size of char is:%ld\n", sizeof y);
    
    float f=0;
    printf("size of float is:%ld\n",sizeof f);
    
    double d=0;
    printf("size of double is:%ld\n",sizeof d);
    
    
    return 0;
    
}