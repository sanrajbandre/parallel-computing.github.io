// BASIC C APP

// DEFINE HEADER FILE IN APPLICATION
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <getopt.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>

// DEFINE COLOR CODE
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int main()
{
        int  cnt,cpuCnt=8;
        struct timeval  tv1, tv2;
        
        gettimeofday(&tv1, NULL);
        
        for (cnt=0;cnt<cpuCnt;cnt++)
        {
        printf (GRN"[ CPU ] Executing Statement ...! \n"RESET);
        }
        
        gettimeofday(&tv2, NULL);
        printf (CYN"CPU EXECUTION TIME : %f (Microseconds)\n",
        (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
        (double) (tv2.tv_sec - tv1.tv_sec));

return 0;
}
