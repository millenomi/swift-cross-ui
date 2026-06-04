#include "header.h"

#if SCUI_HAS_ANDROID_LOG_H
void android_log(int priority, const char *namespace, const char *message) {
    __android_log_write(priority, namespace, message);
}
#endif
