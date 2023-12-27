#include <stdio.h>

double square(double num)
{
    return (num * num);
}

int main()
{
    int num;
    double n;

    printf("\n\n 函數：計算任意數的平方 :\n");
    printf("------------------------------------------------\n");   

    printf("輸入任意數以計算平方 : ");
    scanf("%d", &num);

    n = square(num);
    printf("%d 的平方是 : %.2f\n", num, n); 

    return 0;
}