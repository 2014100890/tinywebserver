#include "../csapp.h"

int main(void) {
    char *buf, *p, *method;
    char arg1[MAXLINE], arg2[MAXLINE], content[MAXLINE];
    int n1 = 0, n2 = 0;

  
    n2 = atoi(arg2);
    
    method = getenv("REQUEST_METHOD");

    printf("111\n");
    // sprintf(content, "asdada Welcome to add.com: ");
    sprintf(content, "welcome to add.com \r\n<p>");
    sprintf(content, "coonnection : close: \r\n<p>");
    // sprintf(content, "%sThanks for visiting!\r\n", content);

    printf("Content-length: %d\r\n", (int)strlen(content));
    printf("Content-type: text/html\r\n\r\n");
    // printf("%s", content);

    if (strcasecmp(method, "HEAD")!= 0)
        printf("%s", content); 

    fflush(stdout);
    exit(0);
}