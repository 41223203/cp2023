#include <stdio.h>  // 包含標準輸入/輸出的標頭文件。

int main()  
{  
    int sidea, sideb, sidec; // 宣告三角形的三邊的變數。

    /* 
     * 讀取三角形的三邊長
     */  
    printf("輸入三角形的三邊長: ");  // 提示使用者輸入。
    scanf("%d %d %d", &sidea, &sideb, &sidec);  // 讀取並儲存三角形的三邊。

    if (sidea == sideb && sideb == sidec) // 檢查是否所有邊都相等。  
    {  
        printf("這是一個等邊三角形。\n");  // 印出等邊三角形的訊息。
    }  
    else if (sidea == sideb || sidea == sidec || sideb == sidec) // 檢查是否有兩邊相等。  
    {  
        printf("這是一個等腰三角形。\n");  // 印出等腰三角形的訊息。
    }  
    else // 如果沒有邊相等。  
    {  
        printf("這是一個不等邊三角形。\n");  // 印出不等邊三角形的訊息。
    }  

    return 0;  
}