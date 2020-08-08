

                       

#include <iostream>
#include <conio.h>

using namespace std;

/*
Invisible Trap Game

Player must navigate maze and avoid invisible traps!

Locations of traps are revealed briefly at start of game!

(I also made a game where the player must hit a specified button the program tells them, but must first it all the previously specified buttons! It's like Simon. Code is in my email and laptop, in both C++ and Python.)

Author:Joshua Rabideau


*/



void loadmap(char map[][10],int height,int width)
{
for(int i =0;i < height;i++)
{
for(int q = 0;q < width ;q++)
{
if(map[i][q] == 'x')
{
cout<<" ";
}
else
{
cout<<map[i][q];
}

}

cout<<"\n";




}




}


char L1[5][10] =

{
"o x    x ",
"  x  x-  ",
"     ----",
"x x   x g",
"x  x     "






};

void showtrap(char map[][10],int height,int width)
{
for(int i =0;i < height;i++)
{
for(int q = 0;q < width ;q++)
{

cout<<map[i][q];


}

cout<<"\n";




}




};



int curr_x = 0;
int curr_y = 0;
char input;

int place_x;
int place_y;





int update(void)
{
place_x = curr_x;
place_y = curr_y;
cin >> input;

	
	
switch(input)
{

case 'i':
curr_x--;
break;

case 'n':
curr_x++;
break;

case 'j':
curr_y--;
break;

case 'k':
curr_y++;
break;

}

if(L1[curr_x][curr_y] == 'x')
{
cout<<"You hit a trap!";
return 1;
}


if(L1[curr_x][curr_y] == '-')
{
curr_x = place_x;
curr_y = place_y;
}

if(L1[curr_x][curr_y] == ' ')
{
L1[curr_x][curr_y] = 'o';
L1[place_x][place_y] = ' ';
}

if(L1[curr_x][curr_y] == 'g')
{
system("cls");
cout<<"You win!";
return 1;
}
system("cls");
loadmap(L1,5,10);
cout << curr_y<< " " << curr_x;
return 1;

}












int main()
{
	cout<<"FunctionTest\n";
    showtrap(L1,5,10);
    getch();
	while(1)
	{
    
    
    
    update();
	
    }
    return 0;
}
