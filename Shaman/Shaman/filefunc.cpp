#include "filefunc.h"

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void FileOpen()
{
    FILE *stream = nullptr ;
    stream = fopen("C:\\Users\\shaman\\Documents\\shaman.neo\\hello.txt", "r+") ;

    char s[128] ;
    fread(s, 128, 1, stream) ;
    s[0] = 'A' ;
    fwrite(s, 13, 1, stream) ;
    fclose(stream) ;
}