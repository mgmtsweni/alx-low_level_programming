#ifndef MAIN_H
#define MAIN_h

int _putchar(char c);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *s);

char *cap_string(char *s);

char *rot13(char *s);

char *leet(char *s);

void print_number(int n);

void print_buffer(char *b, int size);

void print_hex_line(char *b, int numBitsInLine, int currentPos);

void print_buffer_line(char *b, int numBitsInLine, int currentPos);
#endif
