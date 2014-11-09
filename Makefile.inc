INC := -I ../tlpi-dist/lib

LIBS := -lc ../tlpi-dist/libtlpi.a -lm -lpthread

IMPL_CFLAGS := -std=c99 -D_XOPEN_SOURCE=600 \
	        -D_DEFAULT_SOURCE \
		-g -I${TLPI_INCL_DIR} \
		-pedantic \
		-Wall \
		-W \
		-Wpointer-arith \
		-Wmissing-prototypes \
		-Wno-sign-compare \
		-Wno-unused-parameter \
		-Wno-format-y2k \
		-Wno-long-long \
		-Wno-unused-but-set-variable
		
CFLAGS := ${IMPL_CFLAGS}

RM := rm -f
