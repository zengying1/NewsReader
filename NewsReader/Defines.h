//
//  Defines.h
//  NewsReader
//
//  Created by Oreal51 on 16/10/23.
//  Copyright © 2016年 Oreal51. All rights reserved.
//

#if (DEBUG || TESTCASE)
#define FXLog (normal, ...) NSLog (normal, ...)
#else
#define FXLog (normal, ...)
#endif

//输出日志宏
#define BASE_LOG(cls,sel)             FXLog (@"%@-%@",NSStringFromClass(cls),NSStringFromSelector(sel))
#define BASE_ERROR_LOG(cls,sel,error) FXLog (@"error:%@-%@-%@",NSStringFromClass(cls),NSStringFromSelector(sel),error)
#define BASE_INFO_LOG(cls,sel,info)   FXLog (@"INFO:%@-%@-%@",NSStringFromClass(cls),NSStringFromSelector(sel),info)

//日志输出函数
#if (DEBUG || TESTCASE)
#define BASE_LOG_FUN(self,_cmd)          BASE_LOG([self class],_cmd)
#define BASE_ERROR_FUN(self,_cmd,error)  BASE_ERROR_LOG([self class],_cmd,error)
#define BASE_INFO_FUN(self,_cmd,info)    BASE_INFO_LOG([self class],_cmd,info)
#else
#define BASE_LOG_FUN(self,_cmd)
#define BASE_ERROR_FUN(self,_cmd,error)
#define BASE_INFO_FUN(self,_cmd,info)
#endif