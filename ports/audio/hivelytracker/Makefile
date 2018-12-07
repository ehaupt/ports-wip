# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/ports/audio/hivelytracker/Makefile 3557 2018-11-30 14:35:52Z ehaupt $

PORTNAME=	hivelytracker
DISTVERSIONPREFIX=	V
DISTVERSION=	V1_8-36
DISTVERSIONSUFFIX=	-g07624af
CATEGORIES=	audio

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Music tracker for AHX and HVL formats

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		dos2unix gmake gettext-runtime pkgconfig gnome
USE_GITHUB=	yes
USE_GNOME=	atk cairo gdkpixbuf2 glib20 gtk20 pango
USE_SDL=	image sdl ttf
USE_XORG=	x11

GH_ACCOUNT=	pete-gordon

OPTIONS_DEFINE=	EXAMPLES

MAKE_ENV+=	DATADIR=${DATADIR} EXAMPLESDIR=${EXAMPLESDIR}

post-patch:
	@${REINPLACE_CMD} \
			-e 's|%%DATADIR%%|${DATADIR}|' \
			-e 's|%%EXAMPLESDIR%%|${EXAMPLESDIR}|' \
			-e 's|%%DEJAVUFONTSDIR%%|${LOCALBASE}/share/fonts/dejavu|' \
				${WRKSRC}/gui.c

.include <bsd.port.mk>
