#include "header.h"

void spc_print()
{
printf("spc:\n");
for(int z = -4; z <= MAX_Y; z++)
	printf("%2d %s\n", z, spc[z]);
}

int f2()
{
int offset_screen;
int x;

#define macro() \
	if(y <= 0)\
	goto label1;\
	else\
	spc_print();\
	goto label;

init1();
init3(1);

switch(figure_number){
case LLINE:
	if(rotate == DEG_0){
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
			macro()
			}
		}
		offset_screen = 1;
	break;
	}
	else if(rotate == DEG_90){
		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].c.y][figures[rotate].c.x] == '*'){
			if(spc[figures[rotate].c.y +1][figures[rotate].c.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
		}
		offset_screen = 1;
	break;
	}
	else if(rotate == DEG_180){
		if(spc[figures[rotate].b.y][figures[rotate].b.x] == '*'){
			if(spc[figures[rotate].b.y +1][figures[rotate].b.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
			macro()
			}
		}
		offset_screen = 1;
	break;
	}
	else if(rotate == DEG_270){
		if(spc[figures[rotate].b.y][figures[rotate].b.x] == '*'){
			if(spc[figures[rotate].b.y +1][figures[rotate].b.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].c.y][figures[rotate].c.x] == '*'){
			if(spc[figures[rotate].c.y +1][figures[rotate].c.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
		}
		offset_screen = 0;
	break;
	}

case TLINE:
	if(rotate == DEG_0){
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
			macro()
			}
		}
		offset_screen = 1;
	break;
	}
	else if(rotate == DEG_90){
		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].b.y][figures[rotate].b.x] == '*'){
			if(spc[figures[rotate].b.y +1][figures[rotate].b.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
		}
		offset_screen = 1;
	break;
	}
	else if(rotate == DEG_180){
		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].b.y][figures[rotate].b.x] == '*'){
			if(spc[figures[rotate].b.y +1][figures[rotate].b.x] == '*'){
			macro()
			}
		}
		offset_screen = 1;
	break;
	}
	else if(rotate == DEG_270){
		if(spc[figures[rotate].b.y][figures[rotate].b.x] == '*'){
			if(spc[figures[rotate].b.y +1][figures[rotate].b.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].c.y][figures[rotate].c.x] == '*'){
			if(spc[figures[rotate].c.y +1][figures[rotate].c.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
		}
		offset_screen = 0;
	break;
	}
case ZLINE:
	if(rotate == DEG_0){
//		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
				macro()
			}
//		}
//		if(spc[figures[rotate].c.y][figures[rotate].c.x] == '*'){	
			if(spc[figures[rotate].c.y +1][figures[rotate].c.x] == '*'){
			macro()
			}
//		}
	offset_screen = 1;
	}
	
	if(rotate == DEG_90){
//		if(spc[figures[rotate].c.y][figures[rotate].c.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
				macro()
			}
//		}
//		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){	
			if(spc[figures[rotate].b.y +1][figures[rotate].b.x] == '*'){
			macro()
			}
//		}
//		if(spc[figures[rotate].b.y][figures[rotate].b.x] == '*'){	
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
//		}
	offset_screen = 1;
	}
	break;

case LINE:
	if(rotate == DEG_0){
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
				macro()
			}
		}
	offset_screen = 1;
	}
	
	if(rotate == DEG_90){
		if(spc[figures[rotate].a.y][figures[rotate].a.x] == '*'){
			if(spc[figures[rotate].a.y +1][figures[rotate].a.x] == '*'){
				macro()
			}
		}
		if(spc[figures[rotate].b.y][figures[rotate].b.x] == '*'){	
			if(spc[figures[rotate].b.y +1][figures[rotate].b.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].c.y][figures[rotate].c.x] == '*'){	
			if(spc[figures[rotate].c.y +1][figures[rotate].c.x] == '*'){
			macro()
			}
		}
		if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){	
			if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
			macro()
			}
		}
	offset_screen = 0;
	}
	break;

case SQRT:
	if(spc[figures[rotate].c.y][figures[rotate].c.x] == '*'){
		if(spc[figures[rotate].c.y +1][figures[rotate].c.x] == '*'){
			macro()
		}
	}
	if(spc[figures[rotate].d.y][figures[rotate].d.x] == '*'){	
		if(spc[figures[rotate].d.y +1][figures[rotate].d.x] == '*'){
		macro()
		}
	}
	offset_screen = 0;
	break;
}
	if(y >= MAX_Y -offset_screen){
	spc_print();
	goto label;
	}
	else{
	spc_print();
	init3(0);
	}
	return 0;
label1:
	printf("Exit\n");
	exit(0);

label:
	offset_screen = val = 0;
	f3();
}

void init() //76
{
for( int x = 0; x <= MAX_X ; x++){
	full_line[x] = '*';
	empty_line[x] = '.';
	}
}

void spc_init()
{
int x, y;
x = 0;
y = -4;
while(y <= MAX_Y)
	{
	spc[y][x] = '.';
	x++;
		if(x > MAX_X)
		{
		spc[y][x] = '\0';
		y++;
		x = 0;
		}
	}
}

void init3(int prm)
{
if(prm == 0){
spc[figures[rotate].a.y][figures[rotate].a.x] = '.';
spc[figures[rotate].b.y][figures[rotate].b.x] = '.';
spc[figures[rotate].c.y][figures[rotate].c.x] = '.';
spc[figures[rotate].d.y][figures[rotate].d.x] = '.';
}
else{
spc[figures[rotate].a.y][figures[rotate].a.x] = '*';
spc[figures[rotate].b.y][figures[rotate].b.x] = '*';
spc[figures[rotate].c.y][figures[rotate].c.x] = '*';
spc[figures[rotate].d.y][figures[rotate].d.x] = '*';
}
}

struct dekart yx(int prm1, int prm2)
{
struct dekart prm3;
prm3.y = prm1;
prm3.x = prm2;
return prm3;
}

void f1(int arg)
{
read(0, buf, 3);
}

void init1()
{
figures[DEG_0  ].c = figures[DEG_90].c = figures[DEG_180].c = figures[DEG_270].c = yx(y, x);

	switch(figure_number){
	case LLINE:
	figures[DEG_0  ].a = yx(y -1, x +1);
	figures[DEG_90 ].a = yx(y +1, x +1);
	figures[DEG_180].a = yx(y +1, x -1);
	figures[DEG_270].a = yx(y -1, x -1);

	figures[DEG_0  ].b = yx(y -1, x);
	figures[DEG_90 ].b = yx(y, x +1);
	figures[DEG_180].b = yx(y +1, x);
	figures[DEG_270].b = yx(y, x -1);//	figures[DEG_270].b = yx(y, x +1);

	figures[DEG_0  ].d = yx(y +1, x);
	figures[DEG_90 ].d = yx(y, x -1);
	figures[DEG_180].d = yx(y -1, x);
	figures[DEG_270].d = yx(y, x +1);//	figures[DEG_270].d = yx(y, x -1);
	break;

	case TLINE:
	figures[DEG_0  ].a = yx(y, x +1);
	figures[DEG_90 ].a = yx(y +1, x);
	figures[DEG_180].a = yx(y, x -1);
	figures[DEG_270].a = yx(y -1, x);
	 
	figures[DEG_0  ].b = yx(y -1, x);
	figures[DEG_90 ].b = yx(y, x +1);
	figures[DEG_180].b = yx(y +1, x);
	figures[DEG_270].b = yx(y, x +1);

	figures[DEG_0  ].d = yx(y +1, x);
	figures[DEG_90 ].d = yx(y, x -1);
	figures[DEG_180].d = yx(y -1, x);
	figures[DEG_270].d = yx(y, x -1);
	break;
	case ZLINE:
	figures[DEG_0  ].a = yx(y +1, x +1);
	figures[DEG_0  ].b = yx(y, x +1);
	figures[DEG_0  ].d = yx(y -1, x);
	figures[DEG_90 ].a = yx(y +1, x -1);
	figures[DEG_90 ].b = yx(y +1, x);
	figures[DEG_90 ].d = yx(y, x +1);

	break;
	case LINE:
	figures[DEG_0 ].a = yx(y -2, x);
	figures[DEG_90].a = yx(y, x -2);
	figures[DEG_0 ].b = yx(y -1, x);
	figures[DEG_90].b = yx(y, x -1);
	figures[DEG_0 ].d = yx(y +1, x);
	figures[DEG_90].d = yx(y, x +1);
	break;

	case SQRT:
	figures[DEG_0  ].a = yx(y -1, x +1);
	figures[DEG_0  ].b = yx(y -1, x);
	figures[DEG_0  ].d = yx(y, x +1);
	break;
	}

}

void f3()
{
int y1, y2;
char buf2[MAX_X +2];

	for(y1 = 1; y1 < MAX_Y; y1++){
		if(strcmp(full_line, spc[y1]) == 0){
			if(strcmp(empty_line, spc[0]) == 0){
			strcpy(spc[y1], spc[0]);
				for(y2 = y1 ; y2 > 1; y2--){
					if(strcmp(spc[y2 -1], empty_line) == 0)
					break;
					else{ strcpy(buf2, spc[y2 -1]); strcpy(spc[y2 -1], spc[y2]);
					strcpy(spc[y2], buf2);
					}
				}
			}
		}
	}

}








/*
void f4()
{
	int y = 0;
	int x = 0;
	int y1, x1;
	char buf;
	y1 = MAX_Y;
	x1 = MAX_X;
	while(y < y1){
		if(spc[y][0] == '.' && spc[y1][0] == '*'){
			buf = spc[y][0];
			spc[y][0] = spc[y1][0];
			spc[y1][0] = buf;
			y1--;
		}
		else if(spc[y][0] == '*' && spc[y1][0] == '.')
		y++;
		else if(spc[y][0] == '*' && spc[y1][0] == '*')
		y++;
		else if(spc[y][0] == '.' && spc[y1][0] == '.')
		y1--;
	}
}
*/














































































//500
