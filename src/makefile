# makefile for ffnes project
# written by rockcarry

# for ffmpeg
FFMPEG_INC = ../ffmpeglib/include
FFMPEG_LIB = ../ffmpeglib/lib

# ����������
CC      = i586-mingw32msvc-gcc
CCFLAGS = -mwindows -Wall -I$(FFMPEG_INC) -L$(FFMPEG_LIB)

# ���е�Ŀ���ļ�
OBJS = \
    log.o \

# ���еĿ�ִ��Ŀ��
EXES = \
    test.exe \

# ����Ŀ��ļ�
DLL = ffencoder.dll

# �������
all : $(DLL) $(EXES)

$(DLL) : $(OBJS)
	$(CC) $(CCFLAGS) -o $@ $(OBJS) --share

%.o : %.c %.h stdefine.h
	$(CC) $(CCFLAGS) -o $@ $< -c

%.o : %.cpp %.h stdefine.h
	$(CC) $(CCFLAGS) -o $@ $< -c

%.o : %.c stdefine.h
	$(CC) $(CCFLAGS) -o $@ $< -c

%.o : %.cpp stdefine.h
	$(CC) $(CCFLAGS) -o $@ $< -c

%.exe : %.c $(DLL)
	$(CC) $(CCFLAGS) -o $@ $< $(DLL) -lavformat -lavcodec -lavutil -lswscale -lswresample -lx264 -lfaac

%.exe : %.cpp $(DLL)
	$(CC) $(CCFLAGS) -o $@ $< $(DLL) -lavformat -lavcodec -lavutil -lswscale -lswresample -lx264 -lfaac

clean :
	-rm -f *.o
	-rm -f *.dll
	-rm -f *.exe
	-rm -f *.mp4
	-rm -f *.log

# rockcarry
# 2006.10.4
# THE END


