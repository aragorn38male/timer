#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

#include <stdlib.h>

#define SHELLSCRIPT "sh timer_run.sh"

int main(void)
{
    struct timeval start;
    struct timeval end;
    struct timeval total;

    gettimeofday(&start, NULL);
    system(SHELLSCRIPT);
    gettimeofday(&end, NULL);
    timersub(&end, &start, &total);

    printf("Time ellapsed: %ld.%06ld\n", total.tv_sec, total.tv_usec);
    return 0;
}
