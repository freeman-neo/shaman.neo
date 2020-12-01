#pragma once

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h> 

FILE *FileOpen(const char *name) ; 

bool FileWriteString(FILE *stream, const char *value) ; 
bool FileWriteInt(FILE *stream, int value) ; 
bool FileWriteFloat(FILE *stream, float value) ; 
bool FileWriteChar(FILE *stream, char value) ; 
bool FileWriteBool(FILE *stream, bool value) ; 

bool FileCopy(const char *FileName1, const char *FileName2) ; 

void FileClose(FILE *stream) ; 




