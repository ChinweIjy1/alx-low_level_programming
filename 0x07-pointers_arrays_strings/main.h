#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
char _*memset(char *s, char *b, unsigned int n);
char _*memcpy(char *dest, char *src, unsigned int n);
char *strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chesseboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int coincidence(char *a, char *b);
#endif
