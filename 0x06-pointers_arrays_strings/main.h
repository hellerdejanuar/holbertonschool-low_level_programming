#ifndef main_h
#define main_h
#include <string.h>

int _putchar(char c);
int _strlen(char str[]);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _arrlen(int *arr);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
int rev(int a);
#endif /* main.h */

