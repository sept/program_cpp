/*使用C语言 将可执行文件 以html格式 在浏览器打开*/
#include <stdio.h>

int main(void)
{
    printf("Content-type:test/html\n\n");
    printf("<html>\n");
    printf("<head><title>welcome to c cgi</titile></head>\n<body>\n");
    printf("You are welcome!<br/>\n");
    printf("</body>\n</html>");

    return 0;
}
