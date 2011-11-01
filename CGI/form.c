/*将输入在网页存储的信息返回 并以html格式在网页上打开*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *data;
    data = getenv("QUERY_STRING");   /*用定义指针 指向 环境变量*/
    printf("Content-type: test/html\n\n");  /*使用html格式 输出*/

    printf("<html>\n");
    printf("<head><title>An html page from agi</title></head>");
    printf("<body bgcolor=\"#666666\"> %s </body>", data);
    printf("</html>\n");

    fflush(stdout);                /*刷新输出缓存区*/

    return 0;
}
