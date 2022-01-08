#include "header.h"

void func1()
{
str.sa_handler = f1;
sigaction(SIGINT, &str, NULL);

int turn, state, hold, full_line_count;
macro1()
srand(time(NULL));

init();
spc_init();

while(1)
{
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
	/*Comment
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
	*/
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
		void f5()
		{
		int z = 0;
		int z1 = 0;
		int z2 = 0;
		int x1 = MAX_Y;
		int x = 0;
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
		f5();
		val = 0;
		macro1()
	}	       
	else
		init3(0);
f3();
		

print(y, d); print(rotate, d); print(val, d);
print(spc[figures[rotate].b.y ][figures[rotate].b.x -1], c);
print(spc[figures[rotate].c.y ][figures[rotate].c.x -1], c);
print(spc[figures[rotate].d.y ][figures[rotate].d.x -1], c);


}
}
