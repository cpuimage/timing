#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "timing.h"

#ifdef _WIN32

#include <Windows.h>

#else
#include <unistd.h>
#endif

int main(int argc, char *argv[]) {
    printf("a timing demo\n");
    printf("blog:http://cpuimage.cnblogs.com/\n");

    double startTime = now();
    int delay = 100;
#ifdef _WIN32
    Sleep(delay);
#else
    usleep(delay*1000);  // sleep for 100 milliSeconds
#endif
    double time_interval = calcElapsed(startTime, now());

    printf("time interval: %d ms\n ", (int) (time_interval * 1000));
    printf("press any key to exit.\n");
    getchar();
    return 0;
}
