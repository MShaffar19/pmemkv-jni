/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_pmem_pmemkv_KVEngine */

#ifndef _Included_io_pmem_pmemkv_KVEngine
#define _Included_io_pmem_pmemkv_KVEngine
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_start
 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1start
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1stop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_all_buffers
 * Signature: (JLio/pmem/pmemkv/internal/AllBuffersJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1all_1buffers
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_all_bytearrays
 * Signature: (JLio/pmem/pmemkv/AllByteArraysCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1all_1bytearrays
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_all_strings
 * Signature: (JLio/pmem/pmemkv/AllStringsCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1all_1strings
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_count
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1count
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_each_buffer
 * Signature: (JLio/pmem/pmemkv/internal/EachBufferJNICallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1each_1buffer
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_each_bytearray
 * Signature: (JLio/pmem/pmemkv/EachByteArrayCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1each_1bytearray
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_each_string
 * Signature: (JLio/pmem/pmemkv/EachStringCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1each_1string
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_exists_buffer
 * Signature: (JILjava/nio/ByteBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1exists_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_exists_bytes
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1exists_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_get_buffer
 * Signature: (JILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1get_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_get_bytes
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1get_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_put_buffer
 * Signature: (JILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1put_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_put_bytes
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1put_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_remove_buffer
 * Signature: (JILjava/nio/ByteBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1remove_1buffer
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_remove_bytes
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1remove_1bytes
  (JNIEnv *, jobject, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
