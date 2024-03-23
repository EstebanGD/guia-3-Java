#include <iostream>

using namespace std;

class triangulo2d{
  public:
    float l, l2, l3;
    triangulo2d()
    { 
    }
    void calculo_lados()
    {
  
    }
     void toString()
    {
      cout<<"Los lados del triangulo son: "<<l<<endl;
    }
    void area()
    {
     float aris = (l*l2)/2;   
    };
    void perimetro()
    {
      float pers = l+l2+l3;
    }
};

class punto2d{
  public:
  float x, y;
  punto2d(float _x, float _y)
  {
    x = _x;
    y = _y;
  }
  void toString2()
  {
    cout<<" Cordenandas: ("<<x<<", "<<y<<")"<<endl;
  }
};

int main() 
{
  
  cout<<"Diguite las cordenadas del punto 1: "<<endl;
  float x, y, x2, y2;
  cin>>x>>y;
  cout<<"Diguite las cordenadas del punto 2: "<<endl;
  cin>>x2>>y2;
  
  punto2d punto1(x, y);
  punto2d punto2(x2, y2);
  
  punto1.toString2();
  punto2.toString2();
}
