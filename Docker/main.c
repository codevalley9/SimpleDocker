#include "fcgi_stdio.h"
#include <stdlib.h>

void main(void)
{
    while(FCGI_Accept() >= 0)
        printf("Content-type: text/html\r\n"
               "\r\n"
               "<title>Hello world!</title>"
               "<h1>Hello world!</h1>");
}
