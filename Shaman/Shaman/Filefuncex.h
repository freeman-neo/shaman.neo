#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

FILE *FileOpen(const char *name) ;
bool FileWriteString(const char *value) ;
bool FileWriteInt(int value) ;
bool FileWriteFloat(float value) ;
bool FileWriteChar(char value) ;
bool FileWriteBool(bool value) ;
void FileClose() ;



