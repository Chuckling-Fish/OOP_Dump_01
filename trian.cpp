#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
    int edge1 = 56;
    int edge2;
    int edge3;
    float area;
    int flag = 0;
public:
    void setEdge(int edge1, int edge2, int edge3)
    {
        
        if((edge1 + edge2 > edge3) && (edge2 + edge3 > edge1) && (edge3 + edge1 > edge2))
        {
            this->edge1 = edge1;
            this->edge2 = edge2;
            this->edge3 = edge3;
        }
        else
        {
            flag = 1;
            cout << "Not possible to form the triangle." << endl;
        }
    }
    void triArea()
    {
        if(flag == 1)
            return;
        float param = (float)(edge1 + edge2 + edge3) / 2;
        area = sqrt(param * (param - edge1) * (param - edge2) * (param - edge3));
        cout << "Area of the triangle: " << area << endl;
    }
};

int main()
{
   Triangle t1, t2;
   t1.setEdge(8, 9, 10);
   t2.setEdge(2, 4, 6);
   t1.triArea();
   t2.triArea();
}