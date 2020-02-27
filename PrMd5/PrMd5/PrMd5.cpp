// PrMd5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <math.h>

int main()
{
    int x[3];
    int y[3];
    double px, py, t;
    std::cout << "write vectors: " << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "x" << i + 1<<" ";
        std::cin >> x[i];
        std::cout << "y" << i + 1<< " ";
        std::cin >> y[i];
    }
     
    for(t = 0.0; t <= 1.0; t += 0.001) 
    {
        px = pow((1 - t), 2) * x[0] + 2 * (1 - t) * t * x[1] + pow(t, 2) * x[2];
        py = pow((1 - t), 2) * y[0] + 2 * (1 - t) * t * y[1] + pow(t, 2) * y[2];
        std::cout <<"t: " << t << " pX: " << px << " pY: " << py << std::endl;
    }
}

