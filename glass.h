#ifndef GLASS_H
#define GLASS_H
#include <iostream>

using namespace std;

class Glass
{
   private:
      string content;
      string material;
      bool isfull;
   public:
      bool isFull();
      void fill();
      void fill(string toFill);
      void empty();
      string getContent();
      string getMaterial();
      Glass();
      Glass(string _material);
      Glass(string _material, string _content);

};

#endif