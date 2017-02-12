//
//  ARGLContextManager.h
//  YKCameraAR
//
//  Created by zhangyuanke on 17/2/12.
//  Copyright © 2017年 zhangyuanke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKView.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#import <OpenGLES/EAGL.h>

@interface ARGLContextManager : NSObject

+ (ARGLContextManager *)sharedManager;

@property (nonatomic, strong) EAGLContext *context;
- (void)addReferenceForContext;
- (void)removeReferenceForContext;

@end
