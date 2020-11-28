#pragma once

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h> 

FILE *FileOpen(char *name) ; 

bool FileWriteString(FILE *stream, const char *value) ; 
bool FileWriteInt(FILE *stream, int value) ; 

void FileClose(FILE *stream) ; 



