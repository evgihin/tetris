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

int figure_number, rotate, offset_y, offset_x, val, y, x;
struct dekart{int y; int x;};
struct figures{struct dekart a, b, c, d;};

char spc[100][MAX_X + 2];
char spc2[100][MAX_X + 2];
char empty_line[MAX_X +2]; 
char buf[3];
char full_line[MAX_X +2];
struct figures figures[4];

void spc_print(){
	int z;
	printf("spc:\n");
	for(z = -4; z <= MAX_Y; z++)
		printf("%2d %s\n", z, spc[z]);
}
void init(){
	int x;
	for(x = 0; x <= MAX_X ; x++){
		full_line[x] = '*';
		empty_line[x] = '.';
	}
}
void spc_init(){
	int x, y;
	x = 0;
	y = -4;
	while(y <= MAX_Y){
		spc[y][x] = '.';
		x++;
		if(x > MAX_X){
			spc[y][x] = '\0';
			y++;
			x = 0;
		}
	}
}
void init3(int prm){
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
struct dekart yx(int prm1, int prm2){
	struct dekart prm3;
	prm3.y = prm1;
	prm3.x = prm2;
	return prm3;
}
void init1(){
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
			figures[DEG_270].b = yx(y, x -1);
		
			figures[DEG_0  ].d = yx(y +1, x);
			figures[DEG_90 ].d = yx(y, x -1);
			figures[DEG_180].d = yx(y -1, x);
			figures[DEG_270].d = yx(y, x +1);
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
void f3(){
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
void f5(){
	int z, z1, z2, x1, x;
	x1 = MAX_Y;
	char buf; 
	char bufz[256][256];
	while(z1 <= MAX_Y){
		bufz[z1][z] = spc[z][z1];
		z++;
		if(z >= MAX_Y +1){
			bufz[z1][z] = '\0';
			z1++;
			z = 0;
		}
	}
	while(z2 < MAX_Y){
		if(bufz[z2][x] == '.' && bufz[z2][x1] == '*'){
			buf = bufz[z2][x];
			bufz[z2][x] = bufz[z2][x1];
			bufz[z2][x1] = buf;
			x1--;
	}
		else if(bufz[z2][x] == '*' && bufz[z2][x1] == '.')
			x++;
		else if(bufz[z2][x] == '*' && bufz[z2][x1] == '*')
			x++;
		else if(bufz[z2][x] == '.' && bufz[z2][x1] == '.')
			x1--;
		if(x > x1){
			print(bufz[z2], s);
			z2++;
			x = 0;
			x1 = MAX_Y;
		}
	}
}
int main(){
	int turn, state, hold;
	macro1()
	srand(time(NULL));
	init();
	spc_init();
	while(1){
		figure_number = LLINE;
		init1();
		init3(1);
		spc_print();
		read(0, buf, 3);
		if(buf[0] == ' '){
			init3(0);
			if(rotate < DEG_270){
				rotate++;
			}
				else{
					rotate = DEG_0;
				}
		}
		if(buf[0] == 'r'){
			if(figure_number == LLINE){
				if(rotate == DEG_0 &&\
				   spc[figures[rotate].a.y][figures[rotate].a.x +1] == '.'&&\
		          	   spc[figures[rotate].d.y][figures[rotate].d.x +1] == '.')
					x++;
				else if(rotate == DEG_90 &&\
					spc[figures[rotate].a.y][figures[rotate].a.x +1] == '.'&&\
		          		spc[figures[rotate].b.y][figures[rotate].b.x +1] == '.')
					x++;
				else if(rotate == DEG_180 &&\
				        spc[figures[rotate].d.y][figures[rotate].d.x +1] == '.'&&\
		          	        spc[figures[rotate].c.y][figures[rotate].c.x +1] == '.'&&\
		          		spc[figures[rotate].b.y][figures[rotate].b.x +1] == '.')
					x++;
				else if(rotate == DEG_270 &&\
				        spc[figures[rotate].a.y][figures[rotate].a.x +1] == '.'&&\
		          	        spc[figures[rotate].d.y][figures[rotate].d.x +1] == '.')
					x++;
				}
			}
			if(buf[0] == 'l'){
				if(figure_number == LLINE){
					if(rotate == DEG_0 &&\
					   spc[figures[rotate].b.y][figures[rotate].b.x -1] == '.'&&\
	 				   spc[figures[rotate].c.y][figures[rotate].c.x -1] == '.'&&\
	          			   spc[figures[rotate].d.y][figures[rotate].d.x -1] == '.')
						x--;
					else if(rotate == DEG_90 &&\
	 				   spc[figures[rotate].d.y][figures[rotate].d.x -1] == '.'&&\
	          			   spc[figures[rotate].a.y][figures[rotate].a.x -1] == '.')
						x--;
					else if(rotate == DEG_180 &&\
	 				   spc[figures[rotate].a.y][figures[rotate].a.x -1] == '.'&&\
	 				   spc[figures[rotate].c.y][figures[rotate].c.x -1] == '.'&&\
	          			   spc[figures[rotate].d.y][figures[rotate].d.x -1] == '.')
						x--;
					else if(rotate == DEG_270 &&\
	 				   spc[figures[rotate].a.y][figures[rotate].a.x -1] == '.'&&\
	 				   spc[figures[rotate].b.y][figures[rotate].b.x -1] == '.')
						x--;
				}
			}
			if(buf[0] == 'd'){
				if(figure_number == LLINE){
					if(rotate == DEG_0 &&\
					   spc[figures[rotate].a.y +1][figures[rotate].a.x] == '.'&&\
		          		   spc[figures[rotate].d.y +1][figures[rotate].d.x] == '.')
						y++;
					else if(rotate == DEG_90 &&\
					   spc[figures[rotate].a.y +1][figures[rotate].a.x] == '.'&&\
					   spc[figures[rotate].c.y +1][figures[rotate].c.x] == '.'&&\
		          		   spc[figures[rotate].d.y +1][figures[rotate].d.x] == '.')
						y++;
					else if(rotate == DEG_180 &&\
					   spc[figures[rotate].a.y +1][figures[rotate].a.x] == '.'&&\
		          		   spc[figures[rotate].b.y +1][figures[rotate].b.x] == '.')
						y++;
					else if(rotate == DEG_270 &&\
					   spc[figures[rotate].b.y +1][figures[rotate].b.x] == '.'&&\
					   spc[figures[rotate].c.y +1][figures[rotate].c.x] == '.'&&\
		          		   spc[figures[rotate].d.y +1][figures[rotate].d.x] == '.')
						y++;
					else 
						val = 1;
				}
			}
			if(val == 1){
				f5();
				val = 0;
				macro1()
			}	       
			else
				init3(0);
		f3();
		}
}
