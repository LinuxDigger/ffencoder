#ifndef _NES_LOG_H_
#define _NES_LOG_H_

// ����ͷ�ļ�
#include "stdefine.h"

/* �������� */
void log_init  (char *file);
void log_done  (void);
void log_printf(char *format, ...);

#endif
