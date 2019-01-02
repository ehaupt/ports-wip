# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/ports/audio/chipmachine/Makefile 3614 2019-01-02 16:32:40Z ehaupt $

PORTNAME=	chipmachine
DISTVERSIONPREFIX=	v
DISTVERSION=	v1.4b3-57
DISTVERSIONSUFFIX=	-gd43fba2
CATEGORIES=	audio

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Demoscene/Retro Music Player

#LICENSE=	GPLv3
#LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	fftw3>0:math/fftw3
LIB_DEPENDS=	libglfw.so:graphics/glfw \
		libfreetype.so:print/freetype2 \
		libmpg123.so:audio/mpg123 \
		libasound.so:audio/alsa-lib \
		libfftw3f.so:math/fftw3-float

USES=		cmake localbase:ldflags gl lua
USE_GL=		glew
USE_GITHUB=	yes
GH_ACCOUNT=	sasq64
GH_TUPLE=	sasq64:apone:cffe716:apone/apone \
		sasq64:musicplayer:b307efe:musicplayer/musicplayer

CFLAGS+=	-I${WRKSRC}

.include <bsd.port.mk>
