#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void) {
    int fd;

    fd = open("duptest.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
    
    printf("File descriptor: fd=%d\n", fd);
    dup(STDOUT_FILENO);
    close(1);
    dup(fd);
    close(fd);


    /* Redirect stdout to fd */

    write(STDOUT_FILENO, "USP\n", 4);
    write(STDOUT_FILENO, "DOS\n", 4);

    return 0;
}
