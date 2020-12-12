#include<stdio.h>
#include<stdlib.h>
void Reverse_String(char *string) {
        if (*string == '\0') {
                 return 0;
        }
        Reverse_String(string + 1);
        printf("%c", *string);
}
int main() {
        char *str = "qiufengyaju";
		printf("转换之前的字符串：%s\n", str);
        Reverse_String(str);
        return 0;
}