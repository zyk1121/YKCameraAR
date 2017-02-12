//
//  IShowPanoTools.hp
//  IShowPanoEngine
//
//  Created by ishowchina on 16/8/19.
//  Copyright © 2016年 ishowchina. All rights reserved.
//

#ifndef IShowPanoTools_h
#define IShowPanoTools_h
#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>
//#include <GLES/gl.h>

#include <stdio.h>


void gluPerspective_ishow(GLfloat fovy, GLfloat aspect, GLfloat zNear, GLfloat zFar);

static void __gluMakeIdentityf_ishow(GLfloat m[16]);

static void normalize_ishow(GLfloat v[3]);

static void cross_ishow(GLfloat v1[3], GLfloat v2[3], GLfloat result[3]);


void gluLookAt_ishow(GLfloat eyex, GLfloat eyey, GLfloat eyez, GLfloat centerx,
                     GLfloat centery, GLfloat centerz, GLfloat upx, GLfloat upy,
                     GLfloat upz);

GLint gluProject_ishow(GLfloat objx, GLfloat objy, GLfloat objz,
                       const GLfloat modelMatrix[16],
                       const GLfloat projMatrix[16],
                       const GLint viewport[4],
                       GLfloat* winx, GLfloat* winy, GLfloat* winz);

// 根据图像数据生成纹理，返回纹理id
GLuint ishowGetTextureIDFrom(unsigned char *imageData, GLsizei width, GLsizei height);
void   ishowDelTextureID(GLsizei n, GLuint *textureIDs);

#endif /* IShowPanoTools_h */
