#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdbool.h>



#ifndef WORD_H
#define WORD_H

char *copy_word (char *word);

bool check_letter(char c);

int freq_len(int freq);

bool print_error(int error);


#endif