/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_pmem_pmemkv_Database */

#ifndef _Included_io_pmem_pmemkv_Database
#define _Included_io_pmem_pmemkv_Database
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_start
 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1start
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1stop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_buffer
 * Signature: (JLio/pmem/pmemkv/internal/AllBuffersJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1buffer
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_bytes
 * Signature: (JLio/pmem/pmemkv/AllByteArraysCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1bytes
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_string
 * Signature: (JLio/pmem/pmemkv/AllStringsCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1string
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_above_buffer
 * Signature: (JILjava/nio/ByteBuffer;Lio/pmem/pmemkv/internal/AllBuffersJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1above_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_above_bytes
 * Signature: (J[BLio/pmem/pmemkv/AllByteArraysCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1above_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_above_string
 * Signature: (J[BLio/pmem/pmemkv/AllStringsCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1above_1string
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_below_buffer
 * Signature: (JILjava/nio/ByteBuffer;Lio/pmem/pmemkv/internal/AllBuffersJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1below_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_below_bytes
 * Signature: (J[BLio/pmem/pmemkv/AllByteArraysCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1below_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_below_string
 * Signature: (J[BLio/pmem/pmemkv/AllStringsCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1below_1string
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_between_buffer
 * Signature: (JILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;Lio/pmem/pmemkv/internal/AllBuffersJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1between_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jint, jobject, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_between_bytes
 * Signature: (J[B[BLio/pmem/pmemkv/AllByteArraysCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1between_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_all_between_string
 * Signature: (J[B[BLio/pmem/pmemkv/AllStringsCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1keys_1between_1string
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_count
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1count_1all
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_count_above_buffer
 * Signature: (JILjava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1count_1above_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_count_above_bytes
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1count_1above_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_count_below_buffer
 * Signature: (JILjava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1count_1below_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_count_below_bytes
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1count_1below_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_count_between_buffer
 * Signature: (JILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1count_1between_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_count_between_bytes
 * Signature: (J[B[B)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_Database_database_1count_1between_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_all_buffer
 * Signature: (JLio/pmem/pmemkv/internal/GetAllBufferJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1all_1buffer
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_all_bytes
 * Signature: (JLio/pmem/pmemkv/GetAllByteArrayCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1all_1bytes
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_all_string
 * Signature: (JLio/pmem/pmemkv/GetAllStringCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1all_1string
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_above_buffer
 * Signature: (JILjava/nio/ByteBuffer;Lio/pmem/pmemkv/internal/GetAllBufferJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1above_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_above_bytes
 * Signature: (J[BLio/pmem/pmemkv/GetAllByteArrayCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1above_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_above_string
 * Signature: (J[BLio/pmem/pmemkv/GetAllStringCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1above_1string
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_below_buffer
 * Signature: (JILjava/nio/ByteBuffer;Lio/pmem/pmemkv/internal/GetAllBufferJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1below_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_below_bytes
 * Signature: (J[BLio/pmem/pmemkv/GetAllByteArrayCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1below_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_below_string
 * Signature: (J[BLio/pmem/pmemkv/GetAllStringCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1below_1string
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_between_buffer
 * Signature: (JILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;Lio/pmem/pmemkv/internal/GetAllBufferJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1between_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jint, jobject, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_between_bytes
 * Signature: (J[B[BLio/pmem/pmemkv/GetAllByteArrayCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1between_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_between_string
 * Signature: (J[B[BLio/pmem/pmemkv/GetAllStringCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1get_1between_1string
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_exists_buffer
 * Signature: (JILjava/nio/ByteBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_Database_database_1exists_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_exists_bytes
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_Database_database_1exists_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_buffer
 * Signature: (JILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_io_pmem_pmemkv_Database_database_1get_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_get_bytes
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_io_pmem_pmemkv_Database_database_1get_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_put_buffer
 * Signature: (JILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1put_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_put_bytes
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_Database_database_1put_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_remove_buffer
 * Signature: (JILjava/nio/ByteBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_Database_database_1remove_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_Database
 * Method:    database_remove_bytes
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_Database_database_1remove_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
