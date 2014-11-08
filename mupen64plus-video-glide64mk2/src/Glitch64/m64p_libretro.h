#ifndef _M64P_LIBRETRO_H
#define _M64P_LIBRETRO_H

#define CoreVideo_Init(...) VidExt_Init()
#define CoreVideo_Quit(...) VidExt_Quit()
#define CoreVideo_ListFullscreenModes(...)
#define CoreVideo_SetVideoMode(...) VidExt_SetVideoMode(__VA_ARGS__)
#define CoreVideo_SetCaption(...)
#define CoreVideo_ToggleFullScreen(...)
#define CoreVideo_GL_GetProcAddress(...) VidExt_GL_GetProcAddress(__VA_ARGS__)
#define CoreVideo_GL_SetAttribute(...)
#define CoreVideo_GL_SwapBuffers(...) VidExt_GL_SwapBuffers()

#endif
