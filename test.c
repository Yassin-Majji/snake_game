#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
int main(){
    int p = 'd';
    printf("%i\n", p);
    int b[1];
    open(0, O_RDONLY);
    read(0, b, 1);
    printf("%i\n", b[0]);
    if (b[0] == p)
    {
        printf("hello");
    }

}