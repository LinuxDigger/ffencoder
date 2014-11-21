#ifndef __FFENCODER_H_
#define __FFENCODER_H_

// ����ͷ�ļ�
#include "stdefine.h"

// ���Ͷ���
typedef struct
{
    // output filename
    char *filename;

    // audio params
    int audio_disable;
    int audio_bitrate;
    int sample_rate;
    int channel_layout;

    // video params
    int video_disable;
    int video_bitrate;
    int video_width;
    int video_height;
    int frame_rate;
    int pixel_fmt;
    int scale_flags;

    void *audio_buf[8];
    void *video_buf[8];
} FFENCODER_PARAMS;

// ��������
void* ffencoder_init (FFENCODER_PARAMS *params);
void  ffencoder_free (void *ctxt);
void  ffencoder_audio(void *ctxt);
void  ffencoder_video(void *ctxt);

#endif


