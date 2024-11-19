#include <stdio.h>

int main(){
    int a,b;
    char op;
    printf("\nnhap vao so nguyen a =");
    scanf("%d",&a);
    printf("nhap vao so nguyen b =");
    scanf("%d",&b);
    printf("Nhap vao phep toan +,-,*,/")
    scanf("%c",&op);
    switch(op){
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        default:
            printf("INVALID INPUT");
    }
}
