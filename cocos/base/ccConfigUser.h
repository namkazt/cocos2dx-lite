#ifndef __C2D_CONFIG_H__
#define __C2D_CONFIG_H__

// removed modules
#undef CC_USE_3D_PHYSICS
#undef CC_USE_NAVMESH
#undef CC_USE_3D
#undef CC_USE_PHYSICS
#undef CC_ENABLE_CHIPMUNK_INTEGRATION
#undef CC_ENABLE_BOX2D_INTEGRATION
#undef CC_USE_TIFF
#undef CC_USE_WEBP
#undef CC_USE_TGA

#define CC_USE_SPINE 1
#define CC_USE_AUDIO_ENGINE 1
#define CC_USE_NETWORK 1

//
#define CC_MINI_2D 1
#if (CC_MINI_2D > 0)

#undef CC_USE_CULLING
#undef CC_USE_LA88_LABELS
#undef CC_USE_LABEL_TTF
#undef CC_USE_AUTO_POLYGON
#undef CC_USE_FREETYPE
#undef CC_USE_IMAGE_ZIP
#undef CC_USE_SPINE
#undef CC_USE_AUDIO_ENGINE
#undef CC_USE_NETWORK

#define CC_ONLY_PNG 1
#endif // CC_MINI_2D

#if (CC_ONLY_PNG > 0)
#undef CC_USE_JPEG
#undef CC_USE_WIC
#undef CC_USE_S3TC
#endif

//#define CC_USE_STB_IMAGE 1
#if (CC_USE_STB_IMAGE > 0)
#undef CC_USE_PNG
#endif // CC_USE_STB_IMAGE

#endif // __C2D_CONFIG_H__
