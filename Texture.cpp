#include "Texture.hpp"
/**
 * setup and loading the textures from file
 * for information about the texture refer to to CGimageloader.hpp
 */
void MyTexture::setupTexture()
{ static char* imageFile[] =
    {
        "textures/other/earth2.bmp",
		"textures/satellite/silver1.bmp",
		"textures/skybox/front.bmp",
		"textures/skybox/left.bmp",
		"textures/skybox/back.bmp",
		"textures/skybox/right.bmp",
		"textures/skybox/top.bmp",
		"textures/skybox/bottom.bmp",
		"textures/skybox/sky1.bmp"


        
       
    };
    // generate texture id for all texture
    glGenTextures(NUM_OF_IMAGE, textureID);
    // for each texture
    for (int i = 0; i < NUM_OF_IMAGE; ++i)
    {
        // load the texture image from file
        image[i] = new MyImage();
        image[i]->loadBMP(imageFile[i]);
        // select the current texture ...
        glBindTexture(GL_TEXTURE_2D, textureID[i]);

 

		glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE ); 
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
		GL_LINEAR_MIPMAP_NEAREST );
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,GL_LINEAR );
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );   
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );
		gluBuild2DMipmaps( GL_TEXTURE_2D, 3,  image[i]->width,    image[i]->height,
		GL_RGB, GL_UNSIGNED_BYTE, image[i]->buffer );
    }
}

/** 
 * bind a texture to opengl, by specifying its number
 */
void MyTexture::selectTexture(int ID)
{
    glBindTexture(GL_TEXTURE_2D, textureID[ID]);
}