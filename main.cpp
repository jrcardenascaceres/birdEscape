#include "miniwin.h"
#include <cstdlib>
#include <sstream>
#include <windows.h>

using namespace miniwin;

void Player(int x, int y)
{
   color_rgb(2, 0, 150);
   rectangulo_lleno(x, y, 40 + x, 20 + y);
   rectangulo_lleno(x + 5, y - 20, 35 + x, 20 + y);
   color_rgb(230, 130, 60);
   rectangulo_lleno(x + 15, y - 30, 25 + x, 20 + y);
}

void PlayerBullet(int xx, int yy)
{
   if (yy == 400 | yy == 0)
   {
      color_rgb(0, 0, 0);
   }
   else
   {
      color_rgb(255, 242, 0);
      rectangulo_lleno(18 + xx, 0 + yy, 22 + xx, 10 + yy);
   }
}

void Enemy(int x, int y, int r, int g, int b)
{
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 7.0 + y, 19.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 7.0 + y, 20.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 7.0 + y, 22.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 7.0 + y, 23.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 7.0 + y, 25.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 7.0 + y, 26.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 7.0 + y, 28.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 7.0 + y, 29.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 7.0 + y, 31.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 7.0 + y, 32.0 + x, 8.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 8.0 + y, 18.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 8.0 + y, 19.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 8.0 + y, 20.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 8.0 + y, 21.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 8.0 + y, 22.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 8.0 + y, 23.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 8.0 + y, 24.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 8.0 + y, 25.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 8.0 + y, 26.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 8.0 + y, 27.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 8.0 + y, 28.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 8.0 + y, 29.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 8.0 + y, 30.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 8.0 + y, 31.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 8.0 + y, 32.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 8.0 + y, 33.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 8.0 + y, 34.0 + x, 9.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 9.0 + y, 18.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 9.0 + y, 19.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 9.0 + y, 20.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 9.0 + y, 21.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 9.0 + y, 22.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 9.0 + y, 23.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 9.0 + y, 24.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 9.0 + y, 25.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 9.0 + y, 26.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 9.0 + y, 27.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 9.0 + y, 28.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 9.0 + y, 29.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 9.0 + y, 30.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 9.0 + y, 31.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 9.0 + y, 32.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 9.0 + y, 33.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 9.0 + y, 34.0 + x, 10.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 10.0 + y, 18.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 10.0 + y, 19.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 10.0 + y, 20.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 10.0 + y, 21.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 10.0 + y, 22.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 10.0 + y, 23.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 10.0 + y, 24.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 10.0 + y, 25.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 10.0 + y, 26.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 10.0 + y, 27.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 10.0 + y, 28.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 10.0 + y, 29.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 10.0 + y, 30.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 10.0 + y, 31.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 10.0 + y, 32.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 10.0 + y, 33.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 10.0 + y, 34.0 + x, 11.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 11.0 + y, 18.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 11.0 + y, 19.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 11.0 + y, 20.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 11.0 + y, 21.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 11.0 + y, 22.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 11.0 + y, 23.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 11.0 + y, 24.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 11.0 + y, 25.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 11.0 + y, 26.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 11.0 + y, 27.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 11.0 + y, 28.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 11.0 + y, 29.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 11.0 + y, 30.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 11.0 + y, 31.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 11.0 + y, 32.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 11.0 + y, 33.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 11.0 + y, 34.0 + x, 12.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 12.0 + y, 19.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 12.0 + y, 20.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 12.0 + y, 21.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 12.0 + y, 22.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 12.0 + y, 23.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 12.0 + y, 24.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 12.0 + y, 25.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 12.0 + y, 26.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 12.0 + y, 27.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 12.0 + y, 28.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 12.0 + y, 29.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 12.0 + y, 30.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 12.0 + y, 31.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 12.0 + y, 32.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 12.0 + y, 33.0 + x, 13.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 13.0 + y, 20.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 13.0 + y, 21.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 13.0 + y, 22.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 13.0 + y, 23.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 13.0 + y, 24.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 13.0 + y, 25.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 13.0 + y, 26.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 13.0 + y, 27.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 13.0 + y, 28.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 13.0 + y, 29.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 13.0 + y, 30.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 13.0 + y, 31.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 13.0 + y, 32.0 + x, 14.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(6.0 + x, 14.0 + y, 7.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 14.0 + y, 21.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 14.0 + y, 22.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 14.0 + y, 23.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 14.0 + y, 24.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 14.0 + y, 25.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 14.0 + y, 26.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 14.0 + y, 27.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 14.0 + y, 28.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 14.0 + y, 29.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 14.0 + y, 30.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 14.0 + y, 31.0 + x, 15.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(44.0 + x, 14.0 + y, 45.0 + x, 15.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 15.0 + y, 6.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(6.0 + x, 15.0 + y, 7.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(7.0 + x, 15.0 + y, 8.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 15.0 + y, 22.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 15.0 + y, 23.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 15.0 + y, 24.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 15.0 + y, 25.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 15.0 + y, 26.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 15.0 + y, 27.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 15.0 + y, 28.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 15.0 + y, 29.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 15.0 + y, 30.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(43.0 + x, 15.0 + y, 44.0 + x, 16.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(44.0 + x, 15.0 + y, 45.0 + x, 16.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 15.0 + y, 46.0 + x, 16.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 16.0 + y, 5.0 + x, 17.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 16.0 + y, 6.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(6.0 + x, 16.0 + y, 7.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(7.0 + x, 16.0 + y, 8.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(8.0 + x, 16.0 + y, 9.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 16.0 + y, 23.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 16.0 + y, 24.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 16.0 + y, 25.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 16.0 + y, 26.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 16.0 + y, 27.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 16.0 + y, 28.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 16.0 + y, 29.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(42.0 + x, 16.0 + y, 43.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(43.0 + x, 16.0 + y, 44.0 + x, 17.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(44.0 + x, 16.0 + y, 45.0 + x, 17.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 16.0 + y, 46.0 + x, 17.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 16.0 + y, 47.0 + x, 17.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 17.0 + y, 5.0 + x, 18.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 17.0 + y, 6.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(6.0 + x, 17.0 + y, 7.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(7.0 + x, 17.0 + y, 8.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(8.0 + x, 17.0 + y, 9.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(10.0 + x, 17.0 + y, 11.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(12.0 + x, 17.0 + y, 13.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 17.0 + y, 15.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 17.0 + y, 17.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 17.0 + y, 19.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 17.0 + y, 21.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 17.0 + y, 23.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 17.0 + y, 24.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 17.0 + y, 25.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 17.0 + y, 26.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 17.0 + y, 27.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 17.0 + y, 28.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 17.0 + y, 29.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 17.0 + y, 31.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 17.0 + y, 33.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 17.0 + y, 35.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 17.0 + y, 37.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(38.0 + x, 17.0 + y, 39.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(40.0 + x, 17.0 + y, 41.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(42.0 + x, 17.0 + y, 43.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(43.0 + x, 17.0 + y, 44.0 + x, 18.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(44.0 + x, 17.0 + y, 45.0 + x, 18.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 17.0 + y, 46.0 + x, 18.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 17.0 + y, 47.0 + x, 18.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 18.0 + y, 5.0 + x, 19.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 18.0 + y, 6.0 + x, 19.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 18.0 + y, 7.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(7.0 + x, 18.0 + y, 8.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(8.0 + x, 18.0 + y, 9.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(9.0 + x, 18.0 + y, 10.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(10.0 + x, 18.0 + y, 11.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(11.0 + x, 18.0 + y, 12.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(12.0 + x, 18.0 + y, 13.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(13.0 + x, 18.0 + y, 14.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 18.0 + y, 15.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(15.0 + x, 18.0 + y, 16.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 18.0 + y, 17.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 18.0 + y, 18.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 18.0 + y, 19.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 18.0 + y, 20.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 18.0 + y, 21.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 18.0 + y, 22.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 18.0 + y, 23.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 18.0 + y, 24.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 18.0 + y, 25.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 18.0 + y, 26.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 18.0 + y, 27.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 18.0 + y, 28.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 18.0 + y, 29.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 18.0 + y, 30.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 18.0 + y, 31.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 18.0 + y, 32.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 18.0 + y, 33.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 18.0 + y, 34.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 18.0 + y, 35.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(35.0 + x, 18.0 + y, 36.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 18.0 + y, 37.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(37.0 + x, 18.0 + y, 38.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(38.0 + x, 18.0 + y, 39.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(39.0 + x, 18.0 + y, 40.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(40.0 + x, 18.0 + y, 41.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(41.0 + x, 18.0 + y, 42.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(42.0 + x, 18.0 + y, 43.0 + x, 19.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(43.0 + x, 18.0 + y, 44.0 + x, 19.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 18.0 + y, 45.0 + x, 19.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 18.0 + y, 46.0 + x, 19.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 18.0 + y, 47.0 + x, 19.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 19.0 + y, 5.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 19.0 + y, 6.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 19.0 + y, 7.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 19.0 + y, 8.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(8.0 + x, 19.0 + y, 9.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(9.0 + x, 19.0 + y, 10.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(10.0 + x, 19.0 + y, 11.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(11.0 + x, 19.0 + y, 12.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(12.0 + x, 19.0 + y, 13.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(13.0 + x, 19.0 + y, 14.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 19.0 + y, 15.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(15.0 + x, 19.0 + y, 16.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 19.0 + y, 17.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 19.0 + y, 18.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 19.0 + y, 19.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 19.0 + y, 20.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 19.0 + y, 21.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 19.0 + y, 22.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 19.0 + y, 23.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 19.0 + y, 24.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 19.0 + y, 25.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 19.0 + y, 26.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 19.0 + y, 27.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 19.0 + y, 28.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 19.0 + y, 29.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 19.0 + y, 30.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 19.0 + y, 31.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 19.0 + y, 32.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 19.0 + y, 33.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 19.0 + y, 34.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 19.0 + y, 35.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(35.0 + x, 19.0 + y, 36.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 19.0 + y, 37.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(37.0 + x, 19.0 + y, 38.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(38.0 + x, 19.0 + y, 39.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(39.0 + x, 19.0 + y, 40.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(40.0 + x, 19.0 + y, 41.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(41.0 + x, 19.0 + y, 42.0 + x, 20.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(42.0 + x, 19.0 + y, 43.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 19.0 + y, 44.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 19.0 + y, 45.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 19.0 + y, 46.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 19.0 + y, 47.0 + x, 20.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 20.0 + y, 5.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 20.0 + y, 6.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 20.0 + y, 7.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 20.0 + y, 8.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(8.0 + x, 20.0 + y, 9.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(9.0 + x, 20.0 + y, 10.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(10.0 + x, 20.0 + y, 11.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(11.0 + x, 20.0 + y, 12.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(12.0 + x, 20.0 + y, 13.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(13.0 + x, 20.0 + y, 14.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 20.0 + y, 15.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(15.0 + x, 20.0 + y, 16.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 20.0 + y, 17.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 20.0 + y, 18.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 20.0 + y, 19.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 20.0 + y, 20.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 20.0 + y, 21.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 20.0 + y, 22.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 20.0 + y, 23.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 20.0 + y, 24.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 20.0 + y, 25.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 20.0 + y, 26.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 20.0 + y, 27.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 20.0 + y, 28.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 20.0 + y, 29.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 20.0 + y, 30.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 20.0 + y, 31.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 20.0 + y, 32.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 20.0 + y, 33.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 20.0 + y, 34.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 20.0 + y, 35.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(35.0 + x, 20.0 + y, 36.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 20.0 + y, 37.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(37.0 + x, 20.0 + y, 38.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(38.0 + x, 20.0 + y, 39.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(39.0 + x, 20.0 + y, 40.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(40.0 + x, 20.0 + y, 41.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(41.0 + x, 20.0 + y, 42.0 + x, 21.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(42.0 + x, 20.0 + y, 43.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 20.0 + y, 44.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 20.0 + y, 45.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 20.0 + y, 46.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 20.0 + y, 47.0 + x, 21.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 21.0 + y, 5.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 21.0 + y, 6.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 21.0 + y, 7.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 21.0 + y, 8.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(8.0 + x, 21.0 + y, 9.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 21.0 + y, 10.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(10.0 + x, 21.0 + y, 11.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(11.0 + x, 21.0 + y, 12.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(12.0 + x, 21.0 + y, 13.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(13.0 + x, 21.0 + y, 14.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 21.0 + y, 15.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(15.0 + x, 21.0 + y, 16.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 21.0 + y, 17.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 21.0 + y, 18.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 21.0 + y, 19.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 21.0 + y, 20.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 21.0 + y, 21.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 21.0 + y, 22.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 21.0 + y, 23.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 21.0 + y, 24.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 21.0 + y, 25.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 21.0 + y, 26.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 21.0 + y, 27.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 21.0 + y, 28.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 21.0 + y, 29.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 21.0 + y, 30.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 21.0 + y, 31.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 21.0 + y, 32.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 21.0 + y, 33.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 21.0 + y, 34.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 21.0 + y, 35.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(35.0 + x, 21.0 + y, 36.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 21.0 + y, 37.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(37.0 + x, 21.0 + y, 38.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(38.0 + x, 21.0 + y, 39.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(39.0 + x, 21.0 + y, 40.0 + x, 22.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(40.0 + x, 21.0 + y, 41.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 21.0 + y, 42.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(42.0 + x, 21.0 + y, 43.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 21.0 + y, 44.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 21.0 + y, 45.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 21.0 + y, 46.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 21.0 + y, 47.0 + x, 22.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 22.0 + y, 5.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 22.0 + y, 6.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 22.0 + y, 7.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 22.0 + y, 8.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(8.0 + x, 22.0 + y, 9.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 22.0 + y, 10.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(10.0 + x, 22.0 + y, 11.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(11.0 + x, 22.0 + y, 12.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(12.0 + x, 22.0 + y, 13.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(13.0 + x, 22.0 + y, 14.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 22.0 + y, 15.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(15.0 + x, 22.0 + y, 16.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 22.0 + y, 17.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 22.0 + y, 18.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 22.0 + y, 19.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 22.0 + y, 20.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 22.0 + y, 21.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 22.0 + y, 22.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 22.0 + y, 23.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 22.0 + y, 24.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 22.0 + y, 25.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 22.0 + y, 26.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 22.0 + y, 27.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 22.0 + y, 28.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 22.0 + y, 29.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 22.0 + y, 30.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 22.0 + y, 31.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 22.0 + y, 32.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 22.0 + y, 33.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 22.0 + y, 34.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 22.0 + y, 35.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(35.0 + x, 22.0 + y, 36.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 22.0 + y, 37.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(37.0 + x, 22.0 + y, 38.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(38.0 + x, 22.0 + y, 39.0 + x, 23.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(39.0 + x, 22.0 + y, 40.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(40.0 + x, 22.0 + y, 41.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 22.0 + y, 42.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(42.0 + x, 22.0 + y, 43.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 22.0 + y, 44.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 22.0 + y, 45.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 22.0 + y, 46.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 22.0 + y, 47.0 + x, 23.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 23.0 + y, 5.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 23.0 + y, 6.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 23.0 + y, 7.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 23.0 + y, 8.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(8.0 + x, 23.0 + y, 9.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 23.0 + y, 10.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(10.0 + x, 23.0 + y, 11.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(11.0 + x, 23.0 + y, 12.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(12.0 + x, 23.0 + y, 13.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(13.0 + x, 23.0 + y, 14.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 23.0 + y, 15.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(15.0 + x, 23.0 + y, 16.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 23.0 + y, 17.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 23.0 + y, 18.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 23.0 + y, 19.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 23.0 + y, 20.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 23.0 + y, 21.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 23.0 + y, 22.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 23.0 + y, 23.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 23.0 + y, 24.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 23.0 + y, 25.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 23.0 + y, 26.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 23.0 + y, 27.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 23.0 + y, 28.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 23.0 + y, 29.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 23.0 + y, 30.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 23.0 + y, 31.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 23.0 + y, 32.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 23.0 + y, 33.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 23.0 + y, 34.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 23.0 + y, 35.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(35.0 + x, 23.0 + y, 36.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 23.0 + y, 37.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(37.0 + x, 23.0 + y, 38.0 + x, 24.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(38.0 + x, 23.0 + y, 39.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(39.0 + x, 23.0 + y, 40.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(40.0 + x, 23.0 + y, 41.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 23.0 + y, 42.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(42.0 + x, 23.0 + y, 43.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 23.0 + y, 44.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 23.0 + y, 45.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 23.0 + y, 46.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 23.0 + y, 47.0 + x, 24.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(4.0 + x, 24.0 + y, 5.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 24.0 + y, 6.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 24.0 + y, 7.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 24.0 + y, 8.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(8.0 + x, 24.0 + y, 9.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 24.0 + y, 10.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(10.0 + x, 24.0 + y, 11.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(11.0 + x, 24.0 + y, 12.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(12.0 + x, 24.0 + y, 13.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(13.0 + x, 24.0 + y, 14.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(14.0 + x, 24.0 + y, 15.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(15.0 + x, 24.0 + y, 16.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(16.0 + x, 24.0 + y, 17.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(17.0 + x, 24.0 + y, 18.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(18.0 + x, 24.0 + y, 19.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 24.0 + y, 20.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 24.0 + y, 21.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 24.0 + y, 22.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(22.0 + x, 24.0 + y, 23.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(23.0 + x, 24.0 + y, 24.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(24.0 + x, 24.0 + y, 25.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(25.0 + x, 24.0 + y, 26.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(26.0 + x, 24.0 + y, 27.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(27.0 + x, 24.0 + y, 28.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(28.0 + x, 24.0 + y, 29.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 24.0 + y, 30.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 24.0 + y, 31.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 24.0 + y, 32.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(32.0 + x, 24.0 + y, 33.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(33.0 + x, 24.0 + y, 34.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(34.0 + x, 24.0 + y, 35.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(35.0 + x, 24.0 + y, 36.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(36.0 + x, 24.0 + y, 37.0 + x, 25.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(37.0 + x, 24.0 + y, 38.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(38.0 + x, 24.0 + y, 39.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(39.0 + x, 24.0 + y, 40.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(40.0 + x, 24.0 + y, 41.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 24.0 + y, 42.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(42.0 + x, 24.0 + y, 43.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 24.0 + y, 44.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 24.0 + y, 45.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 24.0 + y, 46.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 24.0 + y, 47.0 + x, 25.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 25.0 + y, 6.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 25.0 + y, 7.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 25.0 + y, 8.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(8.0 + x, 25.0 + y, 9.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 25.0 + y, 10.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(10.0 + x, 25.0 + y, 11.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(11.0 + x, 25.0 + y, 12.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(12.0 + x, 25.0 + y, 13.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(13.0 + x, 25.0 + y, 14.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(14.0 + x, 25.0 + y, 15.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(15.0 + x, 25.0 + y, 16.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(16.0 + x, 25.0 + y, 17.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(17.0 + x, 25.0 + y, 18.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(18.0 + x, 25.0 + y, 19.0 + x, 26.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(19.0 + x, 25.0 + y, 20.0 + x, 26.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 25.0 + y, 21.0 + x, 26.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(21.0 + x, 25.0 + y, 22.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(22.0 + x, 25.0 + y, 23.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(23.0 + x, 25.0 + y, 24.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(24.0 + x, 25.0 + y, 25.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(25.0 + x, 25.0 + y, 26.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(26.0 + x, 25.0 + y, 27.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(27.0 + x, 25.0 + y, 28.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(28.0 + x, 25.0 + y, 29.0 + x, 26.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(29.0 + x, 25.0 + y, 30.0 + x, 26.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 25.0 + y, 31.0 + x, 26.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(31.0 + x, 25.0 + y, 32.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(32.0 + x, 25.0 + y, 33.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(33.0 + x, 25.0 + y, 34.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(34.0 + x, 25.0 + y, 35.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(35.0 + x, 25.0 + y, 36.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(36.0 + x, 25.0 + y, 37.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(37.0 + x, 25.0 + y, 38.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(38.0 + x, 25.0 + y, 39.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(39.0 + x, 25.0 + y, 40.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(40.0 + x, 25.0 + y, 41.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 25.0 + y, 42.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(42.0 + x, 25.0 + y, 43.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 25.0 + y, 44.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 25.0 + y, 45.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 25.0 + y, 46.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(46.0 + x, 25.0 + y, 47.0 + x, 26.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(5.0 + x, 26.0 + y, 6.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(6.0 + x, 26.0 + y, 7.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 26.0 + y, 8.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(8.0 + x, 26.0 + y, 9.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 26.0 + y, 10.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(10.0 + x, 26.0 + y, 11.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(11.0 + x, 26.0 + y, 12.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(12.0 + x, 26.0 + y, 13.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(13.0 + x, 26.0 + y, 14.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(14.0 + x, 26.0 + y, 15.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(15.0 + x, 26.0 + y, 16.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(16.0 + x, 26.0 + y, 17.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(17.0 + x, 26.0 + y, 18.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(18.0 + x, 26.0 + y, 19.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(19.0 + x, 26.0 + y, 20.0 + x, 27.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(20.0 + x, 26.0 + y, 21.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(21.0 + x, 26.0 + y, 22.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(22.0 + x, 26.0 + y, 23.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(23.0 + x, 26.0 + y, 24.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(24.0 + x, 26.0 + y, 25.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(25.0 + x, 26.0 + y, 26.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(26.0 + x, 26.0 + y, 27.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(27.0 + x, 26.0 + y, 28.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(28.0 + x, 26.0 + y, 29.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(29.0 + x, 26.0 + y, 30.0 + x, 27.0 + y);
   color_rgb(65, 36, 32);
   rectangulo_lleno(30.0 + x, 26.0 + y, 31.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(31.0 + x, 26.0 + y, 32.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(32.0 + x, 26.0 + y, 33.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(33.0 + x, 26.0 + y, 34.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(34.0 + x, 26.0 + y, 35.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(35.0 + x, 26.0 + y, 36.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(36.0 + x, 26.0 + y, 37.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(37.0 + x, 26.0 + y, 38.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(38.0 + x, 26.0 + y, 39.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(39.0 + x, 26.0 + y, 40.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(40.0 + x, 26.0 + y, 41.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 26.0 + y, 42.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(42.0 + x, 26.0 + y, 43.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 26.0 + y, 44.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(44.0 + x, 26.0 + y, 45.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(45.0 + x, 26.0 + y, 46.0 + x, 27.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(7.0 + x, 27.0 + y, 8.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(8.0 + x, 27.0 + y, 9.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 27.0 + y, 10.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(10.0 + x, 27.0 + y, 11.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(11.0 + x, 27.0 + y, 12.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(12.0 + x, 27.0 + y, 13.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(13.0 + x, 27.0 + y, 14.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(14.0 + x, 27.0 + y, 15.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(15.0 + x, 27.0 + y, 16.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(16.0 + x, 27.0 + y, 17.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(17.0 + x, 27.0 + y, 18.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(18.0 + x, 27.0 + y, 19.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(19.0 + x, 27.0 + y, 20.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(20.0 + x, 27.0 + y, 21.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(21.0 + x, 27.0 + y, 22.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(22.0 + x, 27.0 + y, 23.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(23.0 + x, 27.0 + y, 24.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(24.0 + x, 27.0 + y, 25.0 + x, 28.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 27.0 + y, 26.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(26.0 + x, 27.0 + y, 27.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(27.0 + x, 27.0 + y, 28.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(28.0 + x, 27.0 + y, 29.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(29.0 + x, 27.0 + y, 30.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(30.0 + x, 27.0 + y, 31.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(31.0 + x, 27.0 + y, 32.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(32.0 + x, 27.0 + y, 33.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(33.0 + x, 27.0 + y, 34.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(34.0 + x, 27.0 + y, 35.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(35.0 + x, 27.0 + y, 36.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(36.0 + x, 27.0 + y, 37.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(37.0 + x, 27.0 + y, 38.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(38.0 + x, 27.0 + y, 39.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(39.0 + x, 27.0 + y, 40.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(40.0 + x, 27.0 + y, 41.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 27.0 + y, 42.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(42.0 + x, 27.0 + y, 43.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(43.0 + x, 27.0 + y, 44.0 + x, 28.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(9.0 + x, 28.0 + y, 10.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(10.0 + x, 28.0 + y, 11.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(11.0 + x, 28.0 + y, 12.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(12.0 + x, 28.0 + y, 13.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(13.0 + x, 28.0 + y, 14.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(14.0 + x, 28.0 + y, 15.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(15.0 + x, 28.0 + y, 16.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(16.0 + x, 28.0 + y, 17.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(17.0 + x, 28.0 + y, 18.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(18.0 + x, 28.0 + y, 19.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(19.0 + x, 28.0 + y, 20.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(20.0 + x, 28.0 + y, 21.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(21.0 + x, 28.0 + y, 22.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(22.0 + x, 28.0 + y, 23.0 + x, 29.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(23.0 + x, 28.0 + y, 24.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(24.0 + x, 28.0 + y, 25.0 + x, 29.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 28.0 + y, 26.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(26.0 + x, 28.0 + y, 27.0 + x, 29.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(27.0 + x, 28.0 + y, 28.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(28.0 + x, 28.0 + y, 29.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(29.0 + x, 28.0 + y, 30.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(30.0 + x, 28.0 + y, 31.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(31.0 + x, 28.0 + y, 32.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(32.0 + x, 28.0 + y, 33.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(33.0 + x, 28.0 + y, 34.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(34.0 + x, 28.0 + y, 35.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(35.0 + x, 28.0 + y, 36.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(36.0 + x, 28.0 + y, 37.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(37.0 + x, 28.0 + y, 38.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(38.0 + x, 28.0 + y, 39.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(39.0 + x, 28.0 + y, 40.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(40.0 + x, 28.0 + y, 41.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(41.0 + x, 28.0 + y, 42.0 + x, 29.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(11.0 + x, 29.0 + y, 12.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(12.0 + x, 29.0 + y, 13.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(13.0 + x, 29.0 + y, 14.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(14.0 + x, 29.0 + y, 15.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(15.0 + x, 29.0 + y, 16.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(16.0 + x, 29.0 + y, 17.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(17.0 + x, 29.0 + y, 18.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(18.0 + x, 29.0 + y, 19.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(19.0 + x, 29.0 + y, 20.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(20.0 + x, 29.0 + y, 21.0 + x, 30.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(21.0 + x, 29.0 + y, 22.0 + x, 30.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(22.0 + x, 29.0 + y, 23.0 + x, 30.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(23.0 + x, 29.0 + y, 24.0 + x, 30.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(24.0 + x, 29.0 + y, 25.0 + x, 30.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 29.0 + y, 26.0 + x, 30.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(26.0 + x, 29.0 + y, 27.0 + x, 30.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(27.0 + x, 29.0 + y, 28.0 + x, 30.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(28.0 + x, 29.0 + y, 29.0 + x, 30.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(29.0 + x, 29.0 + y, 30.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(30.0 + x, 29.0 + y, 31.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(31.0 + x, 29.0 + y, 32.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(32.0 + x, 29.0 + y, 33.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(33.0 + x, 29.0 + y, 34.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(34.0 + x, 29.0 + y, 35.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(35.0 + x, 29.0 + y, 36.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(36.0 + x, 29.0 + y, 37.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(37.0 + x, 29.0 + y, 38.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(38.0 + x, 29.0 + y, 39.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(39.0 + x, 29.0 + y, 40.0 + x, 30.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(14.0 + x, 30.0 + y, 15.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(15.0 + x, 30.0 + y, 16.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(16.0 + x, 30.0 + y, 17.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(17.0 + x, 30.0 + y, 18.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(18.0 + x, 30.0 + y, 19.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(19.0 + x, 30.0 + y, 20.0 + x, 31.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(20.0 + x, 30.0 + y, 21.0 + x, 31.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(21.0 + x, 30.0 + y, 22.0 + x, 31.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(22.0 + x, 30.0 + y, 23.0 + x, 31.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(23.0 + x, 30.0 + y, 24.0 + x, 31.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(24.0 + x, 30.0 + y, 25.0 + x, 31.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 30.0 + y, 26.0 + x, 31.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(26.0 + x, 30.0 + y, 27.0 + x, 31.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(27.0 + x, 30.0 + y, 28.0 + x, 31.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(28.0 + x, 30.0 + y, 29.0 + x, 31.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(29.0 + x, 30.0 + y, 30.0 + x, 31.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(30.0 + x, 30.0 + y, 31.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(31.0 + x, 30.0 + y, 32.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(32.0 + x, 30.0 + y, 33.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(33.0 + x, 30.0 + y, 34.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(34.0 + x, 30.0 + y, 35.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(35.0 + x, 30.0 + y, 36.0 + x, 31.0 + y);
   color_rgb(48, 40, 53);
   rectangulo_lleno(36.0 + x, 30.0 + y, 37.0 + x, 31.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(20.0 + x, 31.0 + y, 21.0 + x, 32.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(21.0 + x, 31.0 + y, 22.0 + x, 32.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(22.0 + x, 31.0 + y, 23.0 + x, 32.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(23.0 + x, 31.0 + y, 24.0 + x, 32.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(24.0 + x, 31.0 + y, 25.0 + x, 32.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 31.0 + y, 26.0 + x, 32.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(26.0 + x, 31.0 + y, 27.0 + x, 32.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(27.0 + x, 31.0 + y, 28.0 + x, 32.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(28.0 + x, 31.0 + y, 29.0 + x, 32.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(29.0 + x, 31.0 + y, 30.0 + x, 32.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(30.0 + x, 31.0 + y, 31.0 + x, 32.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(20.0 + x, 32.0 + y, 21.0 + x, 33.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(21.0 + x, 32.0 + y, 22.0 + x, 33.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(22.0 + x, 32.0 + y, 23.0 + x, 33.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(23.0 + x, 32.0 + y, 24.0 + x, 33.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(24.0 + x, 32.0 + y, 25.0 + x, 33.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 32.0 + y, 26.0 + x, 33.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(26.0 + x, 32.0 + y, 27.0 + x, 33.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(27.0 + x, 32.0 + y, 28.0 + x, 33.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(28.0 + x, 32.0 + y, 29.0 + x, 33.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(29.0 + x, 32.0 + y, 30.0 + x, 33.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(30.0 + x, 32.0 + y, 31.0 + x, 33.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(20.0 + x, 33.0 + y, 21.0 + x, 34.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(21.0 + x, 33.0 + y, 22.0 + x, 34.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(22.0 + x, 33.0 + y, 23.0 + x, 34.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(23.0 + x, 33.0 + y, 24.0 + x, 34.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(24.0 + x, 33.0 + y, 25.0 + x, 34.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 33.0 + y, 26.0 + x, 34.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(26.0 + x, 33.0 + y, 27.0 + x, 34.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(27.0 + x, 33.0 + y, 28.0 + x, 34.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(28.0 + x, 33.0 + y, 29.0 + x, 34.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(29.0 + x, 33.0 + y, 30.0 + x, 34.0 + y);
   color_rgb(171, 90, 43);
   rectangulo_lleno(30.0 + x, 33.0 + y, 31.0 + x, 34.0 + y);
   color_rgb(172, 97, 57);
   rectangulo_lleno(21.0 + x, 34.0 + y, 22.0 + x, 35.0 + y);
   color_rgb(204, 204, 204);
   rectangulo_lleno(22.0 + x, 34.0 + y, 23.0 + x, 35.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(23.0 + x, 34.0 + y, 24.0 + x, 35.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(24.0 + x, 34.0 + y, 25.0 + x, 35.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 34.0 + y, 26.0 + x, 35.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(26.0 + x, 34.0 + y, 27.0 + x, 35.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(27.0 + x, 34.0 + y, 28.0 + x, 35.0 + y);
   color_rgb(204, 204, 204);
   rectangulo_lleno(28.0 + x, 34.0 + y, 29.0 + x, 35.0 + y);
   color_rgb(172, 97, 57);
   rectangulo_lleno(29.0 + x, 34.0 + y, 30.0 + x, 35.0 + y);
   color_rgb(228, 174, 16);
   rectangulo_lleno(22.0 + x, 35.0 + y, 23.0 + x, 36.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(24.0 + x, 35.0 + y, 25.0 + x, 36.0 + y);
   color_rgb(42, 36, 38);
   rectangulo_lleno(25.0 + x, 35.0 + y, 26.0 + x, 36.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(26.0 + x, 35.0 + y, 27.0 + x, 36.0 + y);
   color_rgb(228, 174, 16);
   rectangulo_lleno(28.0 + x, 35.0 + y, 29.0 + x, 36.0 + y);
   color_rgb(228, 174, 16);
   rectangulo_lleno(22.0 + x, 36.0 + y, 23.0 + x, 37.0 + y);
   color_rgb(228, 174, 16);
   rectangulo_lleno(23.0 + x, 36.0 + y, 24.0 + x, 37.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(24.0 + x, 36.0 + y, 25.0 + x, 37.0 + y);
   color_rgb(228, 174, 16);
   rectangulo_lleno(25.0 + x, 36.0 + y, 26.0 + x, 37.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(26.0 + x, 36.0 + y, 27.0 + x, 37.0 + y);
   color_rgb(228, 174, 16);
   rectangulo_lleno(27.0 + x, 36.0 + y, 28.0 + x, 37.0 + y);
   color_rgb(228, 174, 16);
   rectangulo_lleno(28.0 + x, 36.0 + y, 29.0 + x, 37.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(23.0 + x, 37.0 + y, 24.0 + x, 38.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(24.0 + x, 37.0 + y, 25.0 + x, 38.0 + y);
   color_rgb(56, 52, 53);
   rectangulo_lleno(25.0 + x, 37.0 + y, 26.0 + x, 38.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(26.0 + x, 37.0 + y, 27.0 + x, 38.0 + y);
   color_rgb(104, 104, 94);
   rectangulo_lleno(27.0 + x, 37.0 + y, 28.0 + x, 38.0 + y);
   color_rgb(56, 52, 53);
   rectangulo_lleno(25.0 + x, 38.0 + y, 26.0 + x, 39.0 + y);
}

void EnemyBullet(int x, int y)
{
   if (y == 500 | y == 20)
   {
      color_rgb(0, 0, 0);
   }
   else
   {
      color_rgb(62, 200, 24);
      rectangulo_lleno(18 + x, 0 + y, 22 + x, 10 + y);
   }
}

void PlayerHeart(int x, int y, int xx)
{
   color_rgb(200, 20, 20);
   rectangulo_lleno(x, y, xx + x, y + 20);
}

std::string ShowScore(std::string text, int number)
{
   std::stringstream sstm;
   sstm << text << number;
   return sstm.str();
}

int main()
{
   // Gamebox
   int WIDTH = 640;
   int HEIGHT = 480;
   vredimensiona(WIDTH, HEIGHT);

   // Player
   bool PlayerAlive = true;
   int PlayerLifeCounter = 40;
   int PlayerX = 320, PlayerY = 400;
   int PlayerBulletX = 320, PlayerBulletY = 400;

   // Enemy 1
   bool EnemyRow01Alive = true;
   int EnemyRow01Counter = 0;
   int Row01BonusX = 0;
   int Row01BonusBulletY = 0;
   int Row01R, Row01G, Row01B;
   int RandomRow01, RollRow01;
   int EnemyRow01X = 160, EnemyRow01Y = 50;
   int EnemyRow01BulletX = 160, EnemyRow01BulletY = 50;
   // Enemy 2
   bool EnemyRow02Alive = true;
   int EnemyRow02Counter = 0;
   int Row02BonusX = 0;
   int Row02BonusBulletY = 0;
   int Row02R, Row02G, Row02B;
   int RandomRow02, RollRow02;
   int EnemyRow02X = 480, EnemyRow02Y = 100;
   int EnemyRow02BulletX = 480, EnemyRow02BulletY = 100;
   // Enemy 3
   bool EnemyRow03Alive = true;
   int EnemyRow03Counter = 0;
   int Row03BonusX = 0;
   int Row03BonusBulletY = 0;
   int Row03R, Row03G, Row03B;
   int RandomRow03, RollRow03;
   int EnemyRow03X = 300, EnemyRow03Y = 100;
   int EnemyRow03BulletX = 300, EnemyRow03BulletY = 100;

   // Variables
   int t = tecla();

   int RNGSpawn01, RNGSpawn02, RNGSpawn03;

   std::string ScoreText = "Current Score = ";
   std::string BestScoreText = "Best Score = ";
   std::string GameOverText = "Game Over. Final Score = ";
   std::string RestartText = "Press UP to restart the game";

   int CurrentScoreNumber = 0;
   int BestScoreNumber = 0;

   int BonusDamage = 0;

   // Gameloop & Update Cycle
   while (t != ESCAPE)
   {
      // Player Controls
      if (PlayerAlive)
      {
         if (t == IZQUIERDA)
         {
            if (PlayerX == 0)
            {
            }
            else
            {
               PlayerX = PlayerX - 20, PlayerY = PlayerY + 0;
            }
         }
         else if (t == DERECHA)
         {
            if (PlayerX == WIDTH - 40)
            {
            }
            else
               PlayerX = PlayerX + 20, PlayerY = PlayerY + 0;
         }
         // Shooting
         if (PlayerBulletY <= 0 && t == ESPACIO)
         {
            PlayerBulletX = PlayerX;
            PlayerBulletY = PlayerY - 30;
            PlaySound("sonido.wav", NULL, SND_ASYNC);
         }
         if (t == ESPACIO)
         {
            if (PlayerBulletY >= 390 && PlayerBulletY <= 400)
            {
               PlayerBulletX = PlayerX, PlayerBulletY = PlayerBulletY - 10;
            }
         }
         if (t = ESPACIO)
         {
            if (PlayerBulletY <= 391 && PlayerBulletY >= 0)
            {
               PlayerBulletX = PlayerBulletX + 0, PlayerBulletY = PlayerBulletY - 10;
            }
         }
      }
      else if (t == ARRIBA)
      {
         CurrentScoreNumber = 0;
         PlayerAlive = true;
         PlayerLifeCounter = 40;
         PlayerX = 320, PlayerY = 400;
         PlayerBulletX = 320, PlayerBulletY = 400;
      }

      // AI
      // Enemy Row 1
      if (EnemyRow01Alive)
      {
         // Enemy Row 1 Movement
         if (RandomRow01 == 0)
         {
            RollRow01 = IZQUIERDA;
         }
         if (RandomRow01 == 1)
         {
            RollRow01 = DERECHA;
         }
         RandomRow01 = rand() % 50;

         if (RollRow01 == IZQUIERDA)
         {
            if (EnemyRow01X >= 0)
            {
               EnemyRow01X = EnemyRow01X - (2 + Row01BonusX), EnemyRow01Y = EnemyRow01Y + 0;
            }
         }
         else if (RollRow01 == DERECHA)
         {
            if (EnemyRow01X < 590)
            {
               EnemyRow01X = EnemyRow01X + (2 + Row01BonusX), EnemyRow01Y = EnemyRow01Y + 0;
            }
         }

         if (EnemyRow01BulletY >= HEIGHT && t == ESPACIO)
         {
            EnemyRow01BulletX = EnemyRow01X;
            EnemyRow01BulletY = EnemyRow01Y + (4 + Row01BonusBulletY);
         }
         // Enemy Row 1 Shooting
         if (t == ESPACIO)
         {
            if (EnemyRow01BulletY >= 20 && EnemyRow01BulletY <= 31)
            {
               EnemyRow01BulletX = EnemyRow01X, EnemyRow01BulletY = EnemyRow01BulletY + (4 + Row01BonusBulletY);
            }
         }
         if (t = ESPACIO)
         {
            if (EnemyRow01BulletY >= 21 && EnemyRow01BulletY <= HEIGHT)
            {
               EnemyRow01BulletX = EnemyRow01BulletX + 0, EnemyRow01BulletY = EnemyRow01BulletY + (4 + Row01BonusBulletY);
            }
         }
      }

      // Enemy Row 2
      if (EnemyRow02Alive)
      {
         // Enemy Row 2 Movement
         if (RandomRow02 == 0)
         {
            RollRow02 = IZQUIERDA;
         }
         if (RandomRow02 == 1)
         {
            RollRow02 = DERECHA;
         }
         RandomRow02 = rand() % 50;

         if (RollRow02 == IZQUIERDA)
         {
            if (EnemyRow02X >= 0)
            {
               EnemyRow02X = EnemyRow02X - (2 + Row02BonusX), EnemyRow02Y = EnemyRow02Y + 0;
            }
         }
         else if (RollRow02 == DERECHA)
         {
            if (EnemyRow02X < 590)
            {
               EnemyRow02X = EnemyRow02X + (2 + Row02BonusX), EnemyRow02Y = EnemyRow02Y + 0;
            }
         }
         // Enemy Row 2 Shooting
         if (EnemyRow02BulletY >= HEIGHT && t == ESPACIO)
         {
            EnemyRow02BulletX = EnemyRow02X;
            EnemyRow02BulletY = EnemyRow02Y + (4 + Row01BonusBulletY);
         }

         if (t == ESPACIO)
         {
            if (EnemyRow02BulletY >= 20 && EnemyRow02BulletY <= 31)
            {
               EnemyRow02BulletX = EnemyRow02X, EnemyRow02BulletY = EnemyRow02BulletY + (4 + Row02BonusBulletY);
            }
         }
         if (t = ESPACIO)
         {
            if (EnemyRow02BulletY >= 21 && EnemyRow02BulletY <= HEIGHT)
            {
               EnemyRow02BulletX = EnemyRow02BulletX + 0, EnemyRow02BulletY = EnemyRow02BulletY + (4 + Row02BonusBulletY);
            }
         }
      }

      // Enemy Row 3
      if (EnemyRow03Alive)
      {
         // Enemy Row 3 Movement
         if (RandomRow03 == 0)
         {
            RollRow03 = IZQUIERDA;
         }
         if (RandomRow03 == 1)
         {
            RollRow03 = DERECHA;
         }
         RandomRow03 = rand() % 50;

         if (RollRow03 == IZQUIERDA)
         {
            if (EnemyRow03X >= 0)
            {
               EnemyRow03X = EnemyRow03X - (2 + Row03BonusX), EnemyRow03Y = EnemyRow03Y + 0;
            }
         }
         else if (RollRow03 == DERECHA)
         {
            if (EnemyRow03X < 590)
            {
               EnemyRow03X = EnemyRow03X + (2 + Row03BonusX), EnemyRow03Y = EnemyRow03Y + 0;
            }
         }
         // Enemy Row 2 Shooting
         if (EnemyRow03BulletY >= HEIGHT && t == ESPACIO)
         {
            EnemyRow03BulletX = EnemyRow03X;
            EnemyRow03BulletY = EnemyRow03Y + (4 + Row01BonusBulletY);
         }

         if (t == ESPACIO)
         {
            if (EnemyRow02BulletY >= 20 && EnemyRow02BulletY <= 31)
            {
               EnemyRow02BulletX = EnemyRow02X, EnemyRow02BulletY = EnemyRow02BulletY + (4 + Row03BonusBulletY);
            }
         }
         if (t = ESPACIO)
         {
            if (EnemyRow03BulletY >= 21 && EnemyRow03BulletY <= HEIGHT)
            {
               EnemyRow03BulletX = EnemyRow03BulletX + 0, EnemyRow03BulletY = EnemyRow03BulletY + (4 + Row03BonusBulletY);
            }
         }
      }

      // Colision Detection
      // Player Bullets to the Enemy on Row 1
      if (EnemyRow01Alive)
      {
         if (PlayerBulletX >= EnemyRow01X - 20 && PlayerBulletX <= EnemyRow01X + 30)
         {
            if (PlayerBulletY >= 50 && PlayerBulletY <= 80)
            {
               EnemyRow01Alive = false;
               EnemyRow01X = -20, EnemyRow01Y = -20;
               CurrentScoreNumber += 50;
               PlayerLifeCounter += BonusDamage;
               if (PlayerLifeCounter > 40)
               {
                  PlayerLifeCounter = 40;
               }
               PlaySound("explosion.wav", NULL, SND_ASYNC);
            }
         }
      }

      // Player Bullets to the Enemy on Row 2
      if (EnemyRow02Alive)
      {
         if (PlayerBulletX >= EnemyRow02X - 20 && PlayerBulletX <= EnemyRow02X + 30)
         {
            if (PlayerBulletY >= 100 && PlayerBulletY <= 130)
            {
               EnemyRow02Alive = false;
               CurrentScoreNumber += 50;
               PlayerLifeCounter += BonusDamage;
               if (PlayerLifeCounter > 40)
               {
                  PlayerLifeCounter = 40;
               }
               PlaySound("explosion.wav", NULL, SND_ASYNC);
            }
         }
      }

      // Player Bullets to the Enemy on Row 2
      if (EnemyRow03Alive)
      {
         if (PlayerBulletX >= EnemyRow03X - 20 && PlayerBulletX <= EnemyRow03X + 30)
         {
            if (PlayerBulletY >= 100 && PlayerBulletY <= 130)
            {
               EnemyRow03Alive = false;
               CurrentScoreNumber += 50;
               PlayerLifeCounter += BonusDamage;
               if (PlayerLifeCounter > 40)
               {
                  PlayerLifeCounter = 40;
               }
               PlaySound("explosion.wav", NULL, SND_ASYNC);
            }
         }
      }

      if (PlayerAlive)
      {
         // Enemy on Row 1 Bullets to the Player
         if (EnemyRow01BulletX >= PlayerX - 20 && EnemyRow01BulletX <= PlayerX + 20)
         {
            if (EnemyRow01BulletY >= 400 && EnemyRow01BulletY <= 430)
            {
               PlayerLifeCounter -= 1 + BonusDamage;

               PlaySound("explosion.wav", NULL, SND_ASYNC);
            }
         }
         // Enemy on Row 2 Bullets to the Player
         if (EnemyRow02BulletX >= PlayerX - 20 && EnemyRow02BulletX <= PlayerX + 20)
         {
            if (EnemyRow02BulletY >= 400 && EnemyRow02BulletY <= 430)
            {
               PlayerLifeCounter -= 1 + BonusDamage;
               PlaySound("explosion.wav", NULL, SND_ASYNC);
            }
         }
      }

      // Delete & Create
      borra();
      // Estableciendo color de fondo
      color(ROJO);
      rectangulo_lleno(0, 0, WIDTH, HEIGHT);

      // Check Player Alive & Paint if so
      if (PlayerLifeCounter <= 0)
      {
         PlayerBullet(0, 0);
         PlayerAlive = false;
      }

      if (PlayerAlive)
      {
         Player(PlayerX, PlayerY);
         PlayerBullet(PlayerBulletX, PlayerBulletY);
      }

      // Paint Enemy Row 01
      if (EnemyRow01Alive)
      {
         Enemy(EnemyRow01X, EnemyRow01Y, Row01R, Row01G, Row01B);
         EnemyBullet(EnemyRow01BulletX, EnemyRow01BulletY);
      }

      // Paint Enemy Row 01
      if (EnemyRow02Alive)
      {
         Enemy(EnemyRow02X, EnemyRow02Y, Row02R, Row02G, Row02B);
         EnemyBullet(EnemyRow02BulletX, EnemyRow02BulletY);
      }

      // Paint Enemy Row 01
      if (EnemyRow03Alive)
      {
         Enemy(EnemyRow03X, EnemyRow03Y, Row03R, Row03G, Row03B);
         EnemyBullet(EnemyRow03BulletX, EnemyRow03BulletY);
      }

      // Respawning check & Restart Position Pseudorandomly of Enemy Row 01
      if (!EnemyRow01Alive)
      {
         RNGSpawn01 = rand() % 3;
         switch (RNGSpawn01)
         {
         case 0:
            EnemyRow01X = 20;
            break;
         case 1:
            EnemyRow01X = 160;
            break;
         case 2:
            EnemyRow01X = 240;
            break;
         case 3:
            EnemyRow01X = 320;
            break;
         }
         EnemyRow01Y = 50;
         EnemyRow01BulletX = EnemyRow01X,
         EnemyRow01BulletY = 50;
         EnemyRow01Counter += 5;
      }
      if (EnemyRow01Counter == 1000)
      {
         EnemyRow01Counter = 0;
         EnemyRow01Alive = true;
      }

      // Respawning check & Restart Position Pseudorandomly of Enemy Row 02
      if (!EnemyRow02Alive)
      {
         RNGSpawn02 = rand() % 3;
         switch (RNGSpawn02)
         {
         case 0:
            EnemyRow02X = 20;
            break;
         case 1:
            EnemyRow02X = 160;
            break;
         case 2:
            EnemyRow02X = 240;
            break;
         case 3:
            EnemyRow02X = 320;
            break;
         }
         EnemyRow02Y = 100;
         EnemyRow02BulletX = EnemyRow02X,
         EnemyRow02BulletY = 100;
         EnemyRow02Counter += 5;
      }
      if (EnemyRow02Counter == 1000)
      {
         EnemyRow02Counter = 0;
         EnemyRow02Alive = true;
      }

      // Respawning check & Restart Position Pseudorandomly of Enemy Row 02
      if (!EnemyRow03Alive)
      {
         RNGSpawn03 = rand() % 3;
         switch (RNGSpawn03)
         {
         case 0:
            EnemyRow03X = 20;
            break;
         case 1:
            EnemyRow03X = 160;
            break;
         case 2:
            EnemyRow03X = 240;
            break;
         case 3:
            EnemyRow03X = 320;
            break;
         }
         EnemyRow03Y = 100;
         EnemyRow03BulletX = EnemyRow03X,
         EnemyRow03BulletY = 100;
         EnemyRow03Counter += 5;
      }
      if (EnemyRow03Counter == 1000)
      {
         EnemyRow03Counter = 0;
         EnemyRow03Alive = true;
      }
      if (PlayerAlive)
      {
         // Score Screen
         color_rgb(111, 111, 111);
         rectangulo_lleno(0, 430, 640, 480);
         color_rgb(20, 20, 20);
         rectangulo_lleno(30, 440, 230, 460);
         texto(440, 440, ShowScore(ScoreText, CurrentScoreNumber));
         texto(440, 455, ShowScore(BestScoreText, BestScoreNumber));
         if (BestScoreNumber < CurrentScoreNumber)
         {
            BestScoreNumber = CurrentScoreNumber;
         }
      }
      else
      {
         // Game Over Text
         color_rgb(250, 250, 250);
         color(NEGRO);
         if (BestScoreNumber < CurrentScoreNumber)
         {
            BestScoreNumber = CurrentScoreNumber;
         }
         texto(230, 240, ShowScore(GameOverText, CurrentScoreNumber));
         texto(230, 260, RestartText);
         texto(270, 280, ShowScore(BestScoreText, BestScoreNumber));
      }
      // Paint Players Life
      if (PlayerLifeCounter > 0)
      {
         PlayerHeart(30, 440, PlayerLifeCounter * 5);
      }
      else if (PlayerLifeCounter <= 0)
      {
      }

      // Difficulty Increase based on Current Score
      if (CurrentScoreNumber < 300)
      {
         Row01R = 22, Row01G = 143, Row01B = 140;
         Row02R = 29, Row02G = 32, Row02B = 150;
         Row03R = 40, Row03G = 200, Row03B = 160;
         Row01BonusX = 0;
         Row02BonusX = 0;
         Row03BonusX = 0;
         Row01BonusBulletY = 0;
         Row02BonusBulletY = 0;
         Row03BonusBulletY = 0;
         BonusDamage = 0;
      }
      else if (CurrentScoreNumber < 700)
      {
         Row01R = 50, Row01G = 163, Row01B = 84;
         Row02R = 14, Row02G = 126, Row02B = 34;
         Row03R = 40, Row03G = 140, Row03B = 60;
         Row01BonusX = 2;
         Row02BonusX = 2;
         Row03BonusX = 2;
         Row01BonusBulletY = 2;
         Row02BonusBulletY = 2;
         Row03BonusBulletY = 2;
         BonusDamage = 0;
      }
      else if (CurrentScoreNumber < 1200)
      {
         Row01R = 224, Row01G = 220, Row01B = 71;
         Row02R = 234, Row02G = 183, Row02B = 23;
         Row03R = 224, Row03G = 220, Row03B = 71;
         Row01BonusX = 4;
         Row02BonusX = 4;
         Row03BonusX = 4;
         Row01BonusBulletY = 4;
         Row02BonusBulletY = 4;
         Row03BonusBulletY = 4;
         BonusDamage = 1;
      }
      else
      {
         Row01R = 187, Row01G = 36, Row01B = 36;
         Row02R = 150, Row02G = 14, Row02B = 14;
         Row03R = 187, Row03G = 36, Row03B = 36;
         Row01BonusX = 6;
         Row02BonusX = 6;
         Row03BonusX = 6;
         Row01BonusBulletY = 6;
         Row02BonusBulletY = 6;
         Row03BonusBulletY = 6;
         BonusDamage = 2;
      }

      refresca();
      espera(10);
      t = tecla();
   }
}
