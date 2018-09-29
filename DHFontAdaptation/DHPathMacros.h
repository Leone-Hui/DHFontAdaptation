//
//  DHPathMacros.h
//  DHFontAdaptation
//
//  Created by 惠大河 on 2018/9/29.
//  Copyright © 2018年 惠大河. All rights reserved.
//

#ifndef DHPathMacros_h
#define DHPathMacros_h

//文件目录
#define kPathTemp                   NSTemporaryDirectory()
#define kPathDocument               [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define kPathCache                  [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define kPathSearch                 [kPathDocument stringByAppendingPathComponent:@"test.plist"]



#endif /* DHPathMacros_h */
