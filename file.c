#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{
    int *myfp;
    
    int myfd;
    myfd = open("/home/iter/2341019494_Ashish/PPWC_LAB/my.dat", O_RDONLY);

    // myfp = fopen("/home/iter/2341019494_Ashish/PPWC_LAB/my.dat", "w");
    // if (myfp == NULL)
    // {
    //     perror("Failed to open /home/iter/2341019494_Ashish/PPWC_LAB/my.dat");
        
    // }
    // write(myfp,"This is a test",15);
    // else
    // {
    //     // fprintf(myfp, "This is a test\n");
        
    //  }
    // int myfd;
    // myfd = open("/home/iter/2341019494_Ashish/PPWC_LAB/my.dat", O_RDONLY);
    // ssize_t write(int fildes, const void *buf, size_t nbyte);

    return 0;
}
