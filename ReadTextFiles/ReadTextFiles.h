
#include <stdio.h> // used by ReadTextFiles
#include <stdlib.h> // used by ReadTextFiles
#include <string.h> // used by ReadTextFiles

#ifndef MAX_LINE_WIDTH
  #define MAX_LINE_WIDTH 25000
#endif
#ifndef MAX_STR_L
  #define  MAX_STR_L 200
#endif
#include "../StringOperations/StringOperations.h"

int countColumns(char *, int *);
int countLines(char *, int *);
int checkFileName(char *);
int countFiles(char *, int, int *);
int readMatrix(char *, double **, int, int);
int readMatrix_short(char *, short **, int, int);
int readMatrix_int(char *, int **, int, int);
int readLine(char *, char *, int);
int readRow_int(char *, int, int *, int *);
int readRow_short(char *, int, short *, int *);
int readRow(char *, int, double *);
int readColumn_int(char *, int, int, int, int *);
int readColumn(char *, int, int, int, double *);

