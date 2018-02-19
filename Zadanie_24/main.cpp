#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <windows.h>

using namespace std;
using namespace sf;

bool run_menu = 0;

int randoms(int a)
{
    int z;
    if (a==0)
    {
        do
        {
            z = rand()%1000+80;
        }while (z>450 && z<650);
    }
    if (a==1)
    {
        do
        {
            z = rand()%700+80;
        } while (z>300 && z<500);
    }
    if (a==2)
    {
        z = rand()%30+20;
    }
    return z;
}


int menu(RenderWindow& window)
{   if (run_menu ==0)
    {
        Texture pic;
        pic.loadFromFile("obrazek.png");
        Font font;
        font.loadFromFile("font.otf");


        Text title("Pizza", font, 90);
        title.setPosition( window.getSize().x/2-title.getGlobalBounds().width/2,50);
        title.setColor(Color::Black);

        Text tekst[3];
        string opcje[] = {"Play","Credits","Exit"};



        for(int i=0;i<3;i++)
        {

            tekst[i].setCharacterSize(45);
            tekst[i].setString(opcje[i]);
            tekst[i].setColor(Color::White);
            tekst[i].setPosition(250, 300+i*100);
            tekst[i].setFont(font);
        }
        int w=200;
        int h=60;
        Vector2f siz(w,h);

        Color color(137, 64, 27);

        RectangleShape rect[3];

        for (int i=0; i<3; i++)
        {
            rect[i].setSize(siz);
            rect[i].setPosition(230,300+i*100);
            rect[i].setFillColor(color);
        }

        CircleShape picture;
        picture.setRadius(150);
        picture.setTexture(&pic);
        picture.setPosition(650,280);


        window.draw(title);
        window.draw(rect[0]);
        window.draw(rect[1]);
        window.draw(rect[2]);
        window.draw(tekst[0]);
        window.draw(tekst[1]);
        window.draw(tekst[2]);
        window.draw(picture);

        int temp;

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            Vector2i pos1(Mouse::getPosition(window));
            for (int c=0; c<3; c++)
            {
                Vector2i pos2(rect[c].getPosition());
                if (pos1.x > pos2.x && pos1.x < pos2.x+w && pos1.y > pos2.y && pos1.y < pos2.y+h)
                {
                    temp=c;
                    break;
                }
            }
            return temp;
        }
    }
    return 10;
}

Music music;
void souund()
{
    if (!music.openFromFile("Pizza.ogg"))
    {
        cout << "Oops";
    }
    music.setVolume(50);
    music.setLoop(true);
    music.play();
}

const int width = 1200;
const int height = 900;
RenderWindow window(VideoMode(width, height), "Pizza");

int main()
{
    souund();

    int choice;
    srand(time(NULL));
    int posx = 550;
    int posy = 400;


    int n=15;

    bool ifwin = 0;

    int pizzr = 30;
    vector<int> r(n);
	vector<float> x(n);
	vector<float> y(n);
	vector<float> vx(n);
    vector<float> vy(n);
    float dt = 0.01;
	CircleShape pizza;
	pizza.setRadius(pizzr);
	Texture mainn;
	mainn.loadFromFile("clipart.png");
	pizza.setTexture(&mainn);
	pizza.setOutlineThickness(6);
	pizza.setOutlineColor(Color(249, 59, 12));
    vector<sf::CircleShape> shapes(n);

    Texture p1;
    p1.loadFromFile("vege.png");
    Texture p2;
    p2.loadFromFile("olives.png");
    Texture p3;
    p3.loadFromFile("tomato.png");
    Texture wiin;
    wiin.loadFromFile("win.png");
    Texture loose;
    loose.loadFromFile("lose.png");
    Texture credit;
    credit.loadFromFile("credits.png");
    Texture eend;
    eend.loadFromFile("end.png");

    Sprite win;
    win.setTexture(wiin);
    Sprite lose;
    lose.setTexture(loose);
    Sprite credits;
    credits.setTexture(credit);
    Sprite endd;
    endd.setTexture(eend);

	for (int z = 0; z < n; z++)
    {

        r[z] = randoms(2);
        shapes[z].setRadius(r[z]);

        x[z] = randoms(0);
        y[z] = randoms(1);
        vx[z] = 0.05+0.003*z;
        vy[z] = 0.05+0.003*z;
        if (z%4==0)                             // ustawianie ró¿nych tekstur
        {
            shapes[z].setTexture(&p1);
        }
        if (z%4==1)
        {
            shapes[z].setTexture(&p2);
        }
        if (z%4==2)
        {
            shapes[z].setTexture(&p3);
        }
        if (z%4==3)
        {
            shapes[z].setTexture(&p1);
        }
    }


    Texture bg;
    bg.loadFromFile("tlo.png");
    Sprite background;
    background.setTexture(bg);

    choice = 10;
    int start = 10;

    while (true)
    {

        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                    window.close();
        }
        window.draw(background);

        if (start == 10)
        {
            choice = menu(window);
            start=choice;
        }

        if (choice==0)
        {
            run_menu=1;

            for (int z = 0; z < n; z++)
            {
                for (int i=0; i<1000; i++)
                {
                    shapes[z].setPosition(x[z], y[z]);          //przemieszczanie w ró¿ne strony
                    if (z%4==0)
                    {
                        x[z]=x[z]+vx[z]*dt;
                        y[z]=y[z]+vy[z]*dt;
                    }
                    if (z%4==1)
                    {
                        x[z]=x[z]-vx[z]*dt;
                        y[z]=y[z]-vy[z]*dt;
                    }
                    if (z%4==2)
                    {
                        x[z]=x[z]-vx[z]*dt;
                        y[z]=y[z]+vy[z]*dt;
                    }
                    if (z%4==3)
                    {
                        x[z]=x[z]+vx[z]*dt;
                        y[z]=y[z]-vy[z]*dt;
                    }


                    if (x[z]>=1200-50-2*r[z] || x[z]<=50)
                    {
                        vx[z] = -vx[z];
                    }
                    if (y[z]>=900-50-2*r[z] || y[z]<=50)
                    {
                        vy[z] = -vy[z];
                    }
                }
                window.draw(shapes[z]);
            }


            if (Keyboard::isKeyPressed(Keyboard::Left))         //sterowanie
            {
                posx -=1;
            }
            if (Keyboard::isKeyPressed(Keyboard::Right))
            {
                posx +=1;
            }
            if (Keyboard::isKeyPressed(Keyboard::Up))
            {
                posy -=1;
            }
            if (Keyboard::isKeyPressed(Keyboard::Down))
            {
                posy +=1;
            }
            if (posx <= 53)                 // ograniczniki ruchu
            {
                posx = 53;
            }
            if (posx >= width-53-2*pizzr)
            {
                posx = width-53-2*pizzr;
            }
            if (posy <= 53)
            {
                posy = 53;
            }
            if (posy >= height-53-2*pizzr)
            {
                posy = height-53-2*pizzr;
            }
            if (Keyboard::isKeyPressed(Keyboard::Escape))
            {
                choice=10;
                start=10;
                run_menu=0;
                choice = menu(window);
                main();
            }



            for (int z=0; z<shapes.size(); z++)         //kolizje
            {
                if (pow(pow(x[z]-posx, 2)+pow(y[z]-posy, 2), 0.5) <= r[z]+pizzr)       //wykrycie kolizji
                {
                    if (pizzr+3>r[z])
                    {
                        shapes.erase(shapes.begin()+z);
                        x.erase(x.begin()+z);
                        y.erase(y.begin()+z);
                        vx.erase(vx.begin()+z);
                        vy.erase(vy.begin()+z);
                        r.erase(r.begin()+z);
                        n-=1;
                        pizzr += 2;
                        pizza.setRadius(pizzr);
                        break;
                    }
                    else
                    {
                        ifwin = 1;
                    }
                }
            }

            pizza.setPosition(posx, posy);
            window.draw(pizza);

            if (ifwin==1)
            {
                for (int z = 0; z<shapes.size(); z++)
                {
                    vx[z] = 0;
                    vy[z] = 0;
                    window.draw(lose);
                }
            }
            if (shapes.size()==0)
            {
                window.draw(win);
            }
        }
        if (choice==1)
        {
            window.draw(credits);
            if (Keyboard::isKeyPressed(Keyboard::Escape))
            {
                choice=10;
                start=10;
                run_menu=0;
                choice = menu(window);
                main();
            }
        }
        if (choice==2)
        {
            window.draw(endd);
            window.display();
            Sleep(1500);
            window.close();
        }


        window.display();
    }


    return 0;
}
