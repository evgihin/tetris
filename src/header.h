#define ZERO 0
#define ON 1
#define OFF 0
#define DEG_0 0
#define DEG_90 1
#define DEG_180 2
#define DEG_270 3

#define LLINE 0
#define TLINE 1
#define ZLINE 2
#define LINE 3
#define SQRT 4

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <signal.h>

#define MAX_Y 6
#define MAX_X 5

#define print(arg, spec) printf(#arg ": %" #spec "\n", arg)

#define macro1()\
rotate = turn = offset_y = state  = offset_x = hold = 0;\
y = -2; x = MAX_X/2;

int figure_number, rotate, offset_y, offset_x, val, y, x, offset_screen;





struct dekart{int y; int x;};
struct figures{struct dekart a, b, c, d;};

char spc[100][MAX_X + 2];
char spc2[100][MAX_X + 2];
char empty_line[MAX_X +2]; 
char buf[3];
char full_line[MAX_X +2];
struct figures figures[4];



void init();
void f01(int y1);
void init1();
void init2();
void init3(int arg);


void func1();

struct dekart yx(int arg1, int arg2);
void spc_init();



void spc_print();



struct sigaction str;
void f1(int arg);
int f2();//int f2(int y);
void f3();
void f4();



