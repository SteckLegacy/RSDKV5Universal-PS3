#ifndef VIDEOSETTINGS_C_H
#define VIDEOSETTINGS_C_H

// C-Compatible struct
typedef struct {
    uint8 windowed;
    uint8 bordered;
    uint8 exclusiveFS;
    uint8 vsync;
    uint8 tripleBuffered;
    uint8 mirrorScreen;
    uint8 shaderSupport;
    int32 fsWidth;
    int32 fsHeight;
    int32 refreshRate;
    int32 windowWidth;
    int32 windowHeight;
    int32 pixWidth;
    int32 pixHeight;
    int32 windowState;
    int32 shaderID;
    int32 screenCount;
    uint32 dimTimer;
    uint32 dimLimit;
    float dimMax;
    float dimPercent;
    float viewportW;
    float viewportH;
    float viewportX;
    float viewportY;
} VideoSettings;

#endif // !VIDEOSETTINGS_C_H
