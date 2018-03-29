
#include <stdio.h>
#include <stdarg.h>

#define LOG_FILE "mosh.log"

void LOG(const char *str, ...){
    va_list ap;
 
    FILE *fh = NULL;
 
    if(fh = fopen(LOG_FILE, "a"))
    {
        va_start(ap, str);
        vfprintf(fh, str, ap);
        fprintf(fh, "\n");
        va_end(ap); 
        fclose(fh);
        fh = NULL;
    }
    else{
        printf("open log file fail\n");
    }
}

