#pragma once

const char *StringCopy(const char *s, const int Length) ;

const int StringLength(const char *s) ;

const char *StringAppend(const char *s, const char *s1);

const char *StringReverse(const char *s) ; 

const char *StringLeft(const char *s) ; 

const char *StringRight(const char *s) ; 

bool StringCompare(char *FirString, char *SecString) ; 

char *StringUpper(char *s) ;

char *StringLower(char *s) ; 

bool StringCompareI(char *FirString, char *SecString) ;
