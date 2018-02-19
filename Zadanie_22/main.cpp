#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

int randoms()
{
    int x = rand()%500+50;
    return x;
}

int main()
{
    srand(time(NULL));
    int keyonoff=1;
    const int szerokosc = 800;
    const int wysokosc = 600;
    const int promien = 20;
    const int n = 10;
    vector<float> x(n);
	vector<float> y(n);
	vector<float> vx(n);
    vector<float> vy(n);
    float dt = 0.01;
    float g = 9.81;

	sf::RenderWindow window(sf::VideoMode(szerokosc, wysokosc), "Nasze okno");
	vector<sf::CircleShape> shape(n);

    for (int i=0; i<n; i++)
    {
        shape[i].setFillColor(sf::Color::Red);
        shape[i].setRadius(promien);
        x[i] = randoms();
        y[i] = randoms();
        vx[i]=0.05;
        vy[i]=0.05;
        vy[i] = vy[i] + g*dt;
    }


	while (window.isOpen())   	 // dopoki okno jest otwarte...
	{

   	 // w tym obiekcie klasy sf::Event
   	 // bedziemy mieli informacje co zrobil uzytkownik
    	sf::Event event;

    	while (window.pollEvent(event))
    	{
        	// uzytkownik kliknal zamkniecie  okna
        	if (event.type == sf::Event::Closed)
   		 	window.close();

   	 	// uzytkownik nacisnal klawisz
   	 	if(event.type== sf::Event::KeyPressed)
   			 keyonoff=1-keyonoff;
    }

	// czyszczenie (na czarno)
    window.clear(sf::Color::Black);




    for (int i=0; i<n; i++)
    {
        for (int z=0; z<1000; z++)
        {

            shape[i].setPosition(x[i], y[i]);
            x[i]=x[i]+vx[i]*dt;
            y[i]=y[i]+vy[i]*dt;
            if (x[i]>=770 || x[i]<=0)
            {
                vx[i] = -vx[i];
            }
            if (y[i]>=570 || y[i]<=0)
            {
                vy[i] = -vy[i];
            }
        }
    }
    // rysuj kolo w zaleznosci od stanu zmiennej keyonoff
    if(keyonoff)
        for (int i=0; i<n; i++)
        {
            window.draw(shape[i]);
        }

    window.display();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    {
        window.close();
    }
	}
	return 0;
}
