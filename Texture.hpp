
#ifndef YP_Texture_HPP
#define YP_Texture_HPP

#include "CGimageloader.hpp"
#include <GL\glut.h>
#include <GL\glu.h>
#include <GL\gl.h>

class MyTexture
{
    public:

     void setupTexture();
     void selectTexture(int);

     static MyTexture* getInstance()
     {
         static MyTexture instance;
         return &instance;
     }

     private:
        MyTexture(){}

        static const int NUM_OF_IMAGE = 9;

        MyImage*    image[NUM_OF_IMAGE];
        GLuint      textureID[NUM_OF_IMAGE];
};
#endif
