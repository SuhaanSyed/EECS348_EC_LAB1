#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdbool.h>
#define N 5


bool programmers[N];
bool departments[N];

void read_preferences(FILE *file, int prg[][N], int dep[][N]);
void print_matrix(int m[][N]);
void find_matches(int prg[][N], int dep[][N], int matches[][N]);
void review_invitation(int prg[][N], int matches[][N]);
void accept_invitation(int department, int prg[][N], int matches[][N]);

#endif