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

    // video params
    int video_disable;
    int video_bitrate;
    int video_width;
    int video_height;
    int frame_rate;
    int pixel_fmt_src;
    int pixel_fmt_dst;
    int scale_flags;
} FFENCODER_PARAMS;

// ��������
void* ffencoder_init (FFENCODER_PARAMS *params);
void  ffencoder_free (void *encoder);
void  ffencoder_audio(void *encoder);
void  ffencoder_video(void *encoder);

#endif


