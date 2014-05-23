/************************************************************
 * <bsn.cl fy=2014 v=epl>
 * 
 *           Copyright 2014 Big Switch Networks, Inc.          
 * 
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 * 
 *        http://www.eclipse.org/legal/epl-v10.html
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 * 
 * </bsn.cl>
 ********************************************************//**
 *
 * cJSON Access Utilities
 *
 ***********************************************************/
#ifndef __CJSON_UTIL_H__
#define __CJSON_UTIL_H__

#include <stddef.h>
#include <stdarg.h>
#include <cjson/cJSON.h>


/**
 * @brief Lookup an object node.
 * @param root The root of the tree.
 * @param rv Receives the node if successful.
 * @param fmt Path format string.
 * @param ... Path format args.
 * @note Pass root=NULL for the global root.
 */
int cjson_util_lookup(cJSON* root, cJSON** rv, const char* fmt, ...);

/**
 * @brief Lookup an object node.
 * @param root The root of the tree.
 * @param rv Recevies the node if successful.
 * @param fmt Path format string.
 * @param vargs Format args.
 * @note Pass root=NULL for the global root.
 */
int cjson_util_vlookup(cJSON* root, cJSON** rv, const char* fmt, va_list vargs);

/**
 * @brief Lookup an integer value.
 * @param root The root of the tree.
 * @param result Receives the result.
 * @param fmt The path format string.
 * @param ... The path format args.
 */
int cjson_util_lookup_int(cJSON *root, int* result, const char* fmt, ...);

/**
 * @brief Lookup an integer value.
 * @param root The root of the tree.
 * @param result Receives the result.
 * @param fmt The path format string.
 * @param vargs The path format args.
 */
int cjson_util_vlookup_int(cJSON *root, int* result, const char* fmt,
                           va_list vargs);

/**
 * @brief Lookup a string value.
 * @param root The root of the tree.
 * @param result Receives the result.
 * @param fms The path format string.
 * @param ... The path format args.
 */
int cjson_util_lookup_string(cJSON* root, char** result, const char* fmt, ...);


/**
 * @brief Lookup a string value.
 * @param root The root of the tree.
 * @param result Receives the result.
 * @param fms The path format string.
 * @param vargs The path format args.
 */
int cjson_util_vlookup_string(cJSON* root, char** result, const char* fmt,
                              va_list vargs);


/**
 * @brief Lookup a double value.
 * @param root The root of the tree.
 * @param result Receives the result.
 * @param fmt The path format string.
 * @param ... The path format args.
 */
int cjson_util_lookup_double(cJSON *root, double* result, const char* fmt, ...);


/**
 * @brief Lookup a double value.
 * @param root The root of the tree.
 * @param result Receives the result.
 * @param fmt The path format string.
 * @param ... The path format args.
 */
int cjson_util_vlookup_double(cJSON *root, double* result, const char* fmt,
                              va_list vargs);


/**
 * @brief Lookup a boolean value.
 * @param root The root of the tree.
 * @param result The result.
 * @param fmt The path format string.
 * @param ... The path format args.
 */
int cjson_util_lookup_bool(cJSON *root, int *result, const char *fmt, ...);


/**
 * @brief Lookup a boolean value.
 * @param root The root of the tree.
 * @param result The result.
 * @param fmt The path format string.
 * @param vargs The path format args.
 */
int cjson_util_vlookup_bool(cJSON *root, int *result, const char *fmt,
                            va_list vargs);

#endif /* __CJSON_UTIL_H__ */
