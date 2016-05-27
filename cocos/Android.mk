LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_internal_static

LOCAL_MODULE_FILENAME := libcocos2dxinternal

ifeq ($(USE_ARM_MODE),1)
LOCAL_ARM_MODE := arm
endif

ifeq ($(TARGET_ARCH_ABI),armeabi-v7a)
MATHNEONFILE := math/MathUtil.cpp.neon
else
MATHNEONFILE := math/MathUtil.cpp
endif

LOCAL_SRC_FILES := \
cocos2d.cpp \
$(wildcard $(LOCAL_PATH)/2d/*.cpp) \
$(wildcard $(LOCAL_PATH)/platform/*.cpp) \
$(wildcard $(LOCAL_PATH)/base/*.cpp) \
$(wildcard $(LOCAL_PATH)/base/*.c) \
$(wildcard $(LOCAL_PATH)/renderer/*.cpp) \
$(wildcard $(LOCAL_PATH)/deprecated/*.cpp) \
$(LOCAL_PATH)/$(MATHNEONFILE) \
$(LOCAL_PATH)/math/CCAffineTransform.cpp \
$(LOCAL_PATH)/math/CCGeometry.cpp \
$(LOCAL_PATH)/math/CCVertex.cpp \
$(LOCAL_PATH)/math/Mat4.cpp \
$(LOCAL_PATH)/math/Quaternion.cpp \
$(LOCAL_PATH)/math/TransformUtils.cpp \
$(LOCAL_PATH)/math/Vec2.cpp \
$(LOCAL_PATH)/math/Vec3.cpp \
$(LOCAL_PATH)/math/Vec4.cpp \
../external/ConvertUTF/ConvertUTFWrapper.cpp \
../external/ConvertUTF/ConvertUTF.c \
../external/tinyxml2/tinyxml2.cpp \
../external/unzip/ioapi_mem.cpp \
../external/unzip/ioapi.cpp \
../external/unzip/unzip.cpp \
../external/xxhash/xxhash.c \
../external/poly2tri/common/shapes.cc \
../external/poly2tri/sweep/advancing_front.cc \
../external/poly2tri/sweep/cdt.cc \
../external/poly2tri/sweep/sweep_context.cc \
../external/poly2tri/sweep/sweep.cc \
../external/clipper/clipper.cpp \
../external/edtaa3func/edtaa3func.cpp


LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/. \
                    $(LOCAL_PATH)/.. \
                    $(LOCAL_PATH)/../external \
                    $(LOCAL_PATH)/../external/tinyxml2 \
                    $(LOCAL_PATH)/../external/unzip \
                    $(LOCAL_PATH)/../external/xxhash \
                    $(LOCAL_PATH)/../external/nslog \
                    $(LOCAL_PATH)/../external/poly2tri \
                    $(LOCAL_PATH)/../external/poly2tri/common \
                    $(LOCAL_PATH)/../external/poly2tri/sweep \
                    $(LOCAL_PATH)/../external/clipper

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/../external \
                    $(LOCAL_PATH)/../external/tinyxml2 \
                    $(LOCAL_PATH)/../external/unzip \
                    $(LOCAL_PATH)/../external/edtaa3func \
                    $(LOCAL_PATH)/../external/xxhash \
                    $(LOCAL_PATH)/../external/ConvertUTF \
                    $(LOCAL_PATH)/../external/nslog \
                    $(LOCAL_PATH)/../external/poly2tri \
                    $(LOCAL_PATH)/../external/poly2tri/common \
                    $(LOCAL_PATH)/../external/poly2tri/sweep \
                    $(LOCAL_PATH)/../external/clipper

LOCAL_EXPORT_LDLIBS := -lGLESv2 \
                       -llog \
                       -landroid

LOCAL_STATIC_LIBRARIES := cocos_freetype2_static
LOCAL_STATIC_LIBRARIES += cocos_png_static
LOCAL_STATIC_LIBRARIES += cocos_jpeg_static
#LOCAL_STATIC_LIBRARIES += cocos_tiff_static
LOCAL_STATIC_LIBRARIES += cocos_webp_static
LOCAL_STATIC_LIBRARIES += cocos_zlib_static

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dxandroid_static

# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CFLAGS   +=  -fexceptions
LOCAL_CPPFLAGS := -Wno-deprecated-declarations
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations

include $(BUILD_STATIC_LIBRARY)

#==============================================================

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_static
LOCAL_MODULE_FILENAME := libcocos2d

LOCAL_STATIC_LIBRARIES += spine_static
LOCAL_STATIC_LIBRARIES += cocos_network_static
LOCAL_STATIC_LIBRARIES += audioengine_static

include $(BUILD_STATIC_LIBRARY)
#==============================================================
$(call import-module,freetype2/prebuilt/android)
$(call import-module,platform/android)
$(call import-module,png/prebuilt/android)
$(call import-module,zlib/prebuilt/android)
$(call import-module,jpeg/prebuilt/android)
# $(call import-module,tiff/prebuilt/android)
$(call import-module,webp/prebuilt/android)
$(call import-module,audio/android)
$(call import-module,editor-support/spine)
$(call import-module,network)
# $(call import-module,ui)
# $(call import-module,extensions)
# $(call import-module,Box2D)
# $(call import-module,curl/prebuilt/android)
$(call import-module,websockets/prebuilt/android)
