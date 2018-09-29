//
//  DHAPIStringMacros.h
//  DHFontAdaptation
//
//  Created by 惠大河 on 2018/9/29.
//  Copyright © 2018年 惠大河. All rights reserved.
//

#ifndef DHAPIStringMacros_h
#define DHAPIStringMacros_h

//接口名称相关

#ifdef DEBUG
//Debug状态下的测试API
#define API_BASE_URL_STRING     @"http://www.development.com/"

#else
//Release状态下的线上API
#define API_BASE_URL_STRING     @"http://www.production.com/"

#endif

//接口

#define LOGINOUT                @"api/user/login"            //登出


#endif /* DHAPIStringMacros_h */
