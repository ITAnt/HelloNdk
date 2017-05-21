//
// Created by Jason on 2016/3/24.
//

#include "test.h"
#include <jni.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
jstring Java_com_onion_myndk_MainActivity_getStringFromC(JNIEnv *env, jobject thiz) {
    printf("invoke get in c++\n");
    return env->NewStringUTF("Hello from NNI in libjni-test.so!");
}
#ifdef __cplusplus
}
#endif