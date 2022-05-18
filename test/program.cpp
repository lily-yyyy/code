#include "splashkit.h"
void dreaming_house_scene()
{
clear_screen(COLOR_SKY_BLUE);
fill_ellipse(COLOR_BLACK,0,400,800,400);
fill_rectangle(COLOR_LIGHT_YELLOW,300,300,200,200);
fill_triangle(COLOR_WHITE,250,300,400,150,550,300);
fill_circle(COLOR_GRAY,95,350,50);
refresh_screen(60);
}

int main()
{
open_window("my drawing",800,600);

dreaming_house_scene();
delay(2000);
fill_circle(COLOR_HOT_PINK,400,300,200);
refresh_screen(60);
delay(1000);
dreaming_house_scene();
delay(6000);
return 0;
}
