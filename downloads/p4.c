#include <stdio.h>

#include <string.h>

#include <ctype.h>

// 移除字串中的空白字符，同時使用回調函數進行額外的修改
void remove_whitespace(char *str, void (*modify)(char *)) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            str[j] = str[i];
            j++;
        } else {
            modify(&str[i]);
        }
    }
    str[j] = '\0';
}

// 將空白字符替換為 '\0' 的回調函數
void remove_space(char *ch) {
    *ch = '\0';
}

int main() {
    char str[100];
    printf("輸入一個字串：");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // 移除換行符號
    printf("原始字串：%s\n", str);

    // 使用回調函數移除空白字符
    remove_whitespace(str, remove_space);

    printf("沒有空白字符的字串：%s\n", str);

    return 0;
}