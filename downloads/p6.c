#include <stdio.h>

int main()
{
   int j, i, n;

   // 提示用戶輸入表格範圍的最後一個數字
   printf("輸入要顯示的乘法表範圍（起始數字為1）：");
   scanf("%d", &n);

   // 顯示從1到n的乘法表
   printf("1 到 %d 的乘法表：\n", n);

   // 雙層循環用於產生乘法表
   for (i = 1; i <= 10; i++)
   {
      for (j = 1; j <= n; j++)
      {
         // 顯示每個乘法表運算式及結果
         printf("%dx%d = %d, ", j, i, i * j);
      }
      printf("\n"); // 換行以顯示下一個數字的乘法表
   }

   return 0;
}