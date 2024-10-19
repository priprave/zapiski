#include<stdio.h>

int main(){
    char a[50];
    scanf("%[^\n]%*c", a);
    printf("%s\n", a);
    return 0;
}
