#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int width = GetSystemMetrics(SM_CXSCREEN);
int height = GetSystemMetrics(SM_CYSCREEN);
int radii = 2;
int color = 0;
int option;
void structure(int width, int height)
{
    setcolor(0);
    setbkcolor(WHITE);
    // settextstyle(0,0,2);
    outtextxy(width / 3, height - 45, (char *)"--------------------Graphics  Mini  Project ( DONE BY:: V V S Madhava )-------------------");
    // settextstyle(0,0,0);
    //  drawing place
    rectangle(width / 150, 230, width - 20, height - 70);
    // color palatte
    rectangle(width / 150, 20, width - 1610, 170);
    outtextxy(width - 1825, 190, (char *)"--COLOUR PALETTE--");
    // color boxes
    setfillstyle(1, BLACK);
    rectangle(width / 100, 25, width - 1840, 90);
    floodfill(width - 1845, 26, BLACK);
    setfillstyle(1, MAGENTA);
    rectangle(width / 100, 95, width - 1840, 165);
    floodfill(width - 1845, 96, BLACK);

    setfillstyle(1, YELLOW);
    rectangle(width - 1830, 25, width - 1765, 90);
    floodfill(width - 1820, 26, BLACK);
    setfillstyle(1, BLUE);
    rectangle(width - 1830, 95, width - 1765, 165);
    floodfill(width - 1825, 96, BLACK);

    setfillstyle(1, GREEN);
    rectangle(width - 1755, 25, width - 1690, 90);
    floodfill(width - 1750, 26, BLACK);
    setfillstyle(1, RED);
    rectangle(width - 1755, 95, width - 1690, 165);
    floodfill(width - 1750, 96, BLACK);

    setfillstyle(1, BROWN);
    rectangle(width - 1680, 25, width - 1615, 90);
    floodfill(width - 1670, 26, BLACK);
    setfillstyle(1, CYAN);
    rectangle(width - 1680, 95, width - 1615, 165);
    floodfill(width - 1670, 96, BLACK);

    // size box
    rectangle(width - 1580, 20, width - 1430, 170);
    outtextxy(width - 1535, 190, (char *)"--SIZES--");

    // sizes
    rectangle(width - 1575, 25, width - 1510, 90);
    outtextxy(width - 1550, 48, (char *)"2px");
    rectangle(width - 1575, 95, width - 1510, 165);
    outtextxy(width - 1550, 118, (char *)"8px");

    rectangle(width - 1500, 25, width - 1435, 90);
    outtextxy(width - 1475, 48, (char *)"4px");
    rectangle(width - 1500, 95, width - 1435, 165);
    outtextxy(width - 1475, 118, (char *)"16px");

    // eraser and clear
    rectangle(width - 1400, 20, width - 1325, 170);
    // boxes for them
    rectangle(width - 1395, 25, width - 1330, 90);
    outtextxy(width - 1385, 48, (char *)"ERASE");
    rectangle(width - 1395, 95, width - 1330, 165);
    outtextxy(width - 1385, 120, (char *)"CLEAR");

    // line and polygons
    rectangle(width - 1295, 20, width - 1150, 170);
    outtextxy(width - 1250, 190, (char *)"--SHAPES--");
    // shapes
    rectangle(width - 1290, 25, width - 1225, 90);
    line(width - 1280, 45, width - 1235, 70);
    rectangle(width - 1290, 95, width - 1225, 165);
    circle(width - 1259, 129, 15);

    rectangle(width - 1220, 25, width - 1155, 90);
    rectangle(width - 1200, 35, width - 1175, 80);
    rectangle(width - 1220, 95, width - 1155, 165);
    ellipse(width - 1189, 129, 0, 360, 15, 25);

    // brush and save
    rectangle(width - 1120, 20, width - 1045, 170);

    rectangle(width - 1115, 25, width - 1050, 90);
    outtextxy(width - 1105, 48, (char *)"BRUSH");
    rectangle(width - 1115, 95, width - 1050, 165);
    outtextxy(width - 1099, 120, (char *)"SAVE");

    // color fill &
    rectangle(width - 1015, 20, width - 940, 170);

    rectangle(width - 1010, 25, width - 945, 90);
    outtextxy(width - 1000, 40, (char *)"COLOR");
    outtextxy(width - 991, 55, (char *)"FILL");
    rectangle(width - 1010, 95, width - 945, 165);

    // 2d box
    rectangle(width - 910, 20, width - 800, 170);
    outtextxy(width - 925, 190, (char *)"--TRANSFORMATIONS--");

    // transformations
    rectangle(width - 905, 26, width - 805, 56);
    outtextxy(width - 901, 33, (char *)"TRANSLATION");

    rectangle(width - 905, 62, width - 805, 92);
    outtextxy(width - 890, 69, (char *)"SHEARING");

    rectangle(width - 905, 98, width - 805, 128);
    outtextxy(width - 888, 105, (char *)"SCALING");

    rectangle(width - 905, 134, width - 805, 164);
    outtextxy(width - 892, 141, (char *)"ROTATION");

    // animation
    rectangle(width - 770, 20, width - 700, 170);
    rectangle(width - 765, 25, width - 705, 165);
    outtextxy(width - 739, 26, (char *)"A");
    outtextxy(width - 740, 41, (char *)"N");
    outtextxy(width - 737, 56, (char *)"I");
    outtextxy(width - 741, 71, (char *)"M");
    outtextxy(width - 739, 86, (char *)"A");
    outtextxy(width - 737, 101, (char *)"T");
    outtextxy(width - 737, 116, (char *)"I");
    outtextxy(width - 739, 131, (char *)"O");
    outtextxy(width - 740, 146, (char *)"N");
}
void boundaryfill(int x, int y, int fill, int boundary)
{
    int current;
    current = getpixel(x, y);
    if ((current != boundary) && (current != fill))
    {
        // setcolor(fill);
        putpixel(x, y, fill);
        boundaryfill(x + 1, y, fill, boundary);
        boundaryfill(x, y - 1, fill, boundary);
        boundaryfill(x - 1, y, fill, boundary);
        boundaryfill(x, y + 1, fill, boundary);
    }
}
void drawing_window();

void shearing()
{
    int a = 400, b = 400, c = 600, d = 400, e = 600, f = 600, g = 400, h = 600;
    while (1)
    {
        cleardevice();
        drawing_window;
        line(a, b, c, d);
        line(c, d, e, f);
        line(e, f, g, h);
        line(g, h, a, b);
        if (GetAsyncKeyState(VK_DOWN) && GetAsyncKeyState(VK_LEFT))
        {
            a -= 20;
            c -= 20;
        }
        else if (GetAsyncKeyState(VK_DOWN) && GetAsyncKeyState(VK_RIGHT))
        {
            c += 20;
            a += 20;
        }
        else if (GetAsyncKeyState(VK_UP) && GetAsyncKeyState(VK_LEFT))
        {
            b -= 20;
            h -= 20;
        }
        else if (GetAsyncKeyState(VK_UP) && GetAsyncKeyState(VK_RIGHT))
        {
            d -= 20;
            f -= 20;
        }
        else if (GetAsyncKeyState(VK_RETURN)) // click on enter to reset
        {
            break;
        }
        delay(100);
    }
    drawing_window();
}
void scaling()
{
    int a = 120, b = 235, c = 140, d = 240;
    int sx = 2, sy = 2;
    while (1)
    {
        cleardevice();
        drawing_window;
        rectangle(a, b, c, d);
        if (GetAsyncKeyState(VK_ADD))
        {
            a = a * sx;
            b = b * sy;
            c = c * sx;
            d = d * sy;
        }
        else if (GetAsyncKeyState(VK_SUBTRACT))
        {
            a = a / sx;
            b = b / sy;
            c = c / sx;
            c = c / sy;
        }
        else if (GetAsyncKeyState(VK_RETURN)) // click on enter to reset
        {
            break;
        }
        delay(100);
    }
    drawing_window();
}
void translation()
{
    int a = 600, b = 900, c = 650, d = 1000;
    while (1)
    {
        cleardevice();
        drawing_window;
        rectangle(a, b, c, d);
        if (GetAsyncKeyState(VK_LEFT))
        {
            a -= 20;
            c -= 20;
        }
        else if (GetAsyncKeyState(VK_RIGHT))
        {
            c += 20;
            a += 20;
        }
        else if (GetAsyncKeyState(VK_DOWN))
        {
            b += 20;
            d += 20;
        }
        else if (GetAsyncKeyState(VK_UP))
        {
            b -= 20;
            d -= 20;
        }
        else if (GetAsyncKeyState(VK_RETURN)) // click on enter to reset
        {
            break;
        }
        delay(100);
    }
    drawing_window();
}
void rotation()
{
    int l = 400, m = 500, n = 410, o = 510;
    int angle = 5;
    int c, s;
    while (1)
    {
        cleardevice();
        drawing_window;
        line(l, m, n, o);
        if (GetAsyncKeyState(VK_RIGHT))
        {
            angle += 5;
            c = cos(angle * 3.14 / 180);
            s = sin(angle * 3.14 / 180);
            l = floor(l * c + m * s);
            m = floor(-m * s + m * c);
            n = floor(n * c + o * s);
            o = floor(-n * s + o * c);
        }
        else if (GetAsyncKeyState(VK_LEFT))
        {
        }
        else if (GetAsyncKeyState(VK_RETURN)) // click on enter to reset
        {
            break;
        }
        delay(100);
    }
}
void drawing_window()
{
    setfillstyle(1, WHITE);
    floodfill(1, 1, 15);
    POINT cp;
    structure(width, height);
    while (1)
    {
        int x1, y1, x2, y2;
        setcolor(color);
        GetCursorPos(&cp);
        if (GetAsyncKeyState(VK_LBUTTON))
        {
            if (cp.x > width / 150 && cp.x < width - 20 && cp.y > 230 && cp.y < height - 70 && option == 0)
            {
                circle(cp.x, cp.y, radii);
                boundaryfill(cp.x, cp.y, color, color);
            }
            else if (cp.x > width / 100 && cp.y > 25 && cp.x < width - 1840 && cp.y < 90)
            {
                color = 0; // black
            }
            else if (cp.x > width / 100 && cp.y > 95 && cp.x < width - 1840 && cp.y < 165)
            {
                color = 5; // magneta
            }
            else if (cp.x > width - 1830 && cp.y > 25 && cp.x < width - 1765 && cp.y < 90)
            {
                color = 14; // yellow
            }
            else if (cp.x > width - 1830 && cp.y > 95 && cp.x < width - 1765 && cp.y < 165)
            {
                color = 1; // blue
            }
            else if (cp.x > width - 1755 && cp.y > 25 && cp.x < width - 1690 && cp.y < 90)
            {
                color = 2; // green
            }
            else if (cp.x > width - 1755 && cp.y > 95 && cp.x < width - 1690 && cp.y < 165)
            {
                color = 4; // red
            }
            else if (cp.x > width - 1680 && cp.y > 25 && cp.x < width - 1615 && cp.y < 90)
            {
                color = 6; // brown
            }
            else if (cp.x > width - 1680 && cp.y > 95 && cp.x < width - 1615 && cp.y < 165)
            {
                color = 3; // cyan
            }
            else if (cp.x > width - 1575 && cp.y > 25 && cp.x < width - 1510 && cp.y < 90)
            {
                radii = 2; // size 2px box
                delay(200);
            }
            else if (cp.x > width - 1500 && cp.y > 25 && cp.x < width - 1435 && cp.y < 90)
            {
                radii = 4; // size 4px box
                delay(200);
            }
            else if (cp.x > width - 1575 && cp.y > 95 && cp.x < width - 1510 && cp.y < 165)
            {
                radii = 8; // size 8px box
                delay(200);
            }
            else if (cp.x > width - 1500 && cp.y > 95 && cp.x < width - 1435 && cp.y < 165)
            {
                radii = 16; // size 16px box
                delay(200);
            }
            else if (cp.x > width - 1395 && cp.y > 25 && cp.x < width - 1330 && cp.y < 90)
            {
                color = 15; // erase box
            }
            else if (cp.x > width - 1115 && cp.y > 95 && cp.x < width - 1050 && cp.y < 165)
            {
                writeimagefile("paint.jpg", 1, 1, width, height); // save box
            }
            else if (cp.x > width - 1115 && cp.y > 25 && cp.x < width - 1050 && cp.y < 90)
            {
                option = 0; // default [brush box]
            }
            else if (cp.x > width - 1280 && cp.y > 25 && cp.x < width - 1225 && cp.y < 90)
            {
                option = 1; // line box
            }
            else if (cp.x > width - 1220 && cp.y > 25 && cp.x < width - 1155 && cp.y < 90)
            {
                option = 2; // rectangle box
            }
            else if (cp.x > width - 1290 && cp.y > 95 && cp.x < width - 1225 && cp.y < 165)
            {
                option = 3; // circle box
            }
            else if (cp.x > width - 1220 && cp.y > 95 && cp.x < width - 1155 && cp.y < 165)
            {
                option = 4; // ellipse box
            }
            else if (cp.x > width - 1010 && cp.y > 25 && cp.x < width - 945 && cp.y < 90)
            {
                option = 5; // color fill box
                delay(200);
            }
            else if (cp.x > width - 905 && cp.y > 26 && cp.x < width - 805 && cp.y < 56)
            {
                option = 6; // translation box
            }
            else if (cp.x > width - 905 && cp.y > 62 && cp.x < width - 805 && cp.y < 92)
            {
                option = 7; // shearing box
            }
            else if (cp.x > width - 905 && cp.y > 98 && cp.x < width - 805 && cp.y < 128)
            {
                option = 8; // scaling box
            }
            else if (cp.x > width - 765 && cp.y > 25 && cp.x < width - 705 && cp.y < 165)
            {
                option = 9; // animation box
            }
            else if (cp.x > width - 905 && cp.y > 134 && cp.x < width - 805 && cp.y < 164)
            {
                option = 10; // rotation box
            }
            else if (cp.x > width / 150 && cp.x < width - 20 && cp.y > 230 && cp.y < height - 70 && option == 5)
            {
                setfillstyle(1, color); // color fill after getting option 5
                floodfill(cp.x, cp.y, BLACK);
            }
            else if (cp.x > width - 1395 && cp.y > 95 && cp.x < width - 1330 && cp.y < 165)
            {
                cleardevice();
                drawing_window();
            }
        }
        if ((ismouseclick(WM_LBUTTONDOWN) && (cp.x > width / 150 && cp.x < width - 20 && cp.y > 230 && cp.y < height - 70)))
        {
            x1 = cp.x;
            y1 = cp.y;
            clearmouseclick(WM_LBUTTONDOWN);
        }
        if ((ismouseclick(WM_LBUTTONUP)) && (cp.x > width / 150 && cp.x < width - 20 && cp.y > 230 && cp.y < height - 70))
        {
            x2 = cp.x;
            y2 = cp.y;
            clearmouseclick(WM_LBUTTONUP);
            if (option == 1)
            {
                line(x1, y1, x2, y2);
            }
            if (option == 2)
            {
                rectangle(x1, y1, x2, y2);
            }
            if (option == 3)
            {
                int r;
                r = sqrt(((abs(x2 - x1)) * (abs(x2 - x1))) + ((abs(y2 - y1)) * (abs(y2 - y1))));
                circle(x1, y1, r);
            }
            if (option == 4)
            {
                int r;
                r = sqrt(((abs(x2 - x1)) * (abs(x2 - x1))) + ((abs(y2 - y1)) * (abs(y2 - y1))));
                ellipse(x1, y1, 0, 360, r, 2 * r);
            }
            // translation
            if (option == 6)
            {
                translation();
                // int x1 = 500, y1 = 500;
                //   while (1)
                //   {
                //       if ((ismouseclick(WM_LBUTTONDOWN) && (cp.x > width / 150 && cp.x < width - 20 && cp.y > 230 && cp.y < height - 70)))
                //       {
                //           x1 = cp.x;
                //           y1 = cp.y;
                //           clearmouseclick(WM_LBUTTONDOWN);
                //       }
                //       if ((ismouseclick(WM_LBUTTONUP) && (cp.x > width / 150 && cp.x < width - 20 && cp.y > 230 && cp.y < height - 70)))
                //       {
                //           x2 = cp.x;
                //           y2 = cp.y;
                //           clearmouseclick(WM_LBUTTONUP);
                //           break;
                //       }
                //   }

                // int r;
                // r = sqrt(((abs(x2 - x1)) * (abs(x2 - x1))) + ((abs(y2 - y1)) * (abs(y2 - y1))));
                // delay(500);
                // while (1)
                // {
                //     cleardevice();
                //     drawing_window();
                //     delay(50);
                //     setcolor(BLACK);
                //     circle(x1, y1, 75);
                //     if (GetAsyncKeyState(VK_LEFT))
                //     {
                //         x1 -= 20;
                //     }
                //     else if (GetAsyncKeyState(VK_RIGHT))
                //     {
                //         x1 += 20;
                //     }
                //     else if (GetAsyncKeyState(VK_UP))
                //     {
                //         y1 -= 20;
                //     }
                //     else if (GetAsyncKeyState(VK_DOWN))
                //     {
                //         y1 += 20;
                //     }
                //     else if (GetAsyncKeyState(VK_RETURN))
                //     {
                //         break;
                //     }
                //     delay(100);
                // }
                // drawing_window();
                // delay(10);
            }

            // shearing
            if (option == 7)
            {
                shearing();
            }
            // scaling
            if (option == 8)
            {
                scaling();
            }
            // rotation
            if (option == 10)
            {
                rotation();
            }
            // animation
            if (option == 9)
            {
                int x = 500;
                while (1)
                {
                    cleardevice();
                    drawing_window();
                    // delay(5);
                    for (int i = 0; i <= 20; i++)
                    {
                        setcolor(GREEN);
                        rectangle(x + i, 400 + i, x + 400 - i, 600 - i);
                        rectangle(x + 400 + i, 500 + i, x + 550 - i, 600 - i);
                        rectangle(x - 100 + i, 500 + i, x + 400 - i, 600 - i);
                        setcolor(BLACK);
                        circle(x, 650, 45 + i);
                        circle(x + 400, 650, 45 + i);
                        setcolor(RED);
                        rectangle(x + 100 + i, 370 + i, x + 195 - i, 400 - i);
                        setcolor(BLUE);
                        rectangle(x + 205 + i, 370 + i, x + 300 - i, 400 - i);
                    }
                    // settextstyle(10, 0, 7);
                    // outtextxy(x + 90, 430, (char *)"POLICE");
                    // settextstyle(0,0,1);
                    if (GetAsyncKeyState(VK_RIGHT))
                    {
                        x += 10;
                    }
                    else if (GetAsyncKeyState(VK_LEFT))
                    {
                        x -= 10;
                    }
                    else if (GetAsyncKeyState(VK_RETURN)) // click on enter to reset two times and esc to exit bgi
                        break;
                    delay(10);
                }
                cleardevice();
                drawing_window();
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
    }
}
int main()
{
    int gd = DETECT, gm = 0;
    initgraph(&gd, &gm, (char *)"");
    initwindow(width, height, "");
    drawing_window();
    getch();
    closegraph();
}