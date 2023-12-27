#include <time.h>
#include <stdio.h>  
#include <stdlib.h>

int main(void)
{
    time_t cur_time;         // 定義一個 time_t 型變數 cur_time 來存儲當前時間。
    char* cur_t_string;      // 定義一個指向字符的指針 cur_t_string，用來存儲轉換後的時間字符串。

    cur_time = time(NULL);   // 使用 time 函數獲取當前時間，並將其存儲在 cur_time 變數中。

    if (cur_time == ((time_t)-1))
    {
        // 如果獲取當前時間失敗，輸出錯誤信息並以失敗的狀態退出程序。
        (void) fprintf(stderr, "無法獲取當前日期和時間。\n");
        exit(EXIT_FAILURE);
    }

    cur_t_string = ctime(&cur_time); // 將 cur_time 中的時間轉換為本地時間格式，並將結果存儲在 cur_t_string 中。

    if (cur_t_string == NULL)
    {
        // 如果轉換時間失敗，輸出錯誤信息並以失敗的狀態退出程序。
        (void) fprintf(stderr, "無法轉換當前日期和時間。\n");
        exit(EXIT_FAILURE);
    }

    // 通過 printf 函數輸出轉換後的時間字符串。
    (void) printf("\n當前時間為：%s\n", cur_t_string);

    // 退出程序，表示成功執行。
    exit(EXIT_SUCCESS);
}