#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

// LOG enables/disbales all logging
#ifdef LOG
#define LOG_INFO
#define LOG_DEBUG
#define LOG_WARN
#define LOG_ERROR
#else
#undef LOG_INFO
#undef LOG_DEBUG
#undef LOG_WARN
#undef LOG_ERROR
#endif

// But levels can also be disabled individually
// #undef LOG_INFO
// #undef LOG_DEBUG
// #undef LOG_WARN
// #undef LOG_ERROR

#ifdef LOG_INFO
#define info(message, ...)                                                     \
    do {                                                                       \
        fprintf(stderr, "\033[37m[INFO]:[%s:%d]:[%s]: " message "\n\033[0m",   \
                __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__);              \
    } while (0)
#else
#define info(msg, ...)                                                         \
    do                                                                         \
        ;                                                                      \
    while (0)
#endif

#ifdef LOG_DEBUG
#define debug(message, ...)                                                    \
    do {                                                                       \
        fprintf(stderr, "\033[34m[DEBUG]:[%s:%d]:[%s]: " message "\n\033[0m",  \
                __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__);              \
    } while (0)
#else
#define debug(msg, ...)                                                        \
    do                                                                         \
        ;                                                                      \
    while (0)
#endif

#ifdef LOG_WARN
#define warn(message, ...)                                                     \
    do {                                                                       \
        fprintf(stderr, "\033[33m[WARN]:[%s:%d]:[%s]: " message "\n\033[0m",   \
                __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__);              \
    } while (0)
#else
#define warn(msg, ...)                                                         \
    do                                                                         \
        ;                                                                      \
    while (0)
#endif

#ifdef LOG_ERROR
#define error(message, ...)                                                    \
    do {                                                                       \
        fprintf(stderr, "\033[31m[ERROR]:[%s:%d]:[%s]: " message "\n\033[0m",  \
                __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__);              \
    } while (0)
#else
#define error(msg, ...)                                                        \
    do                                                                         \
        ;                                                                      \
    while (0)
#endif

#endif /* LOG_H */
