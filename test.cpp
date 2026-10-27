#include <iostream> 
using namespace std;
 class Shape 
 {
     public:    
      virtual float area() = 0; 
 };
 class Circle : public Shape
  {
     private:  
        float radius;
         public:      
         Circle(float r)     
         {        
             radius = r;    
             }    
              float area()    
               {        
                 return 3.14 * radius * radius;    
                 } 
                }; 
                class Rectangle : public Shape 
                { 
             private:
                  float length, breadth; 
             public:
                  Rectangle(float l, float b) 
              { 
                 length = l;  
                        
                 breadth = b;     
                } 
                float area()    
                 {        
                 return length * breadth; 
                     }
                     };
                      class Triangle : public Shape 
                      { 
                        private: 
                 float base, height;
                  public:     
                  Triangle(float b, float h)     
                  {        
                     base = b;        
                      height = h;    
                     }     
                     float area()     
                     {        
                    return 0.5 * base * height;
                     }
                     };
                      int main() 
                      {   
                  Circle c(25);
                    Rectangle r(27, 25);
                Triangle t(12, 25);    
                 Shape *ptr;  
                    ptr = &c; 
                        cout << "Area of Circle: " << ptr->area() << endl;
                             ptr = &r; 
                                 cout << "Area of Rectangle: " << ptr->area() << endl;
                                ptr = &t; 
                                cout<<"area of triangle:"<<ptr->area()<<endl;
                                return 0;
                      }