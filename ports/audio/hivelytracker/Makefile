# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>

PORTNAME=	hivelytracker
DISTVERSIONPREFIX=	V
DISTVERSION=	V1_8-52
DISTVERSIONSUFFIX=	-gd61c127
CATEGORIES=	audio

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Music tracker for AHX and HVL formats

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libharfbuzz.so:print/harfbuzz

USES=		gettext-runtime gmake gnome pkgconfig sdl xorg
USE_GITHUB=	yes
GH_ACCOUNT=	pete-gordon
USE_GNOME=	atk cairo gdkpixbuf2 glib20 gtk20 pango
USE_SDL=	image sdl ttf
USE_XORG=	x11

MAKE_ENV+=	DATADIR=${DATADIR} \
		EXAMPLESDIR=${EXAMPLESDIR}

OPTIONS_DEFINE=	EXAMPLES

# Debugging
CFLAGS+=	-g -O0
LDFLAGS+=	-g -O0
WITH_DEBUG=	yes

do-install:
	${INSTALL_MAN} ${WRKSRC}/Docs/hivelytracker.1 ${STAGEDIR}${MANPREFIX}/share/man/man1
	${INSTALL_PROGRAM} ${WRKSRC}/sdl/hivelytracker ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/sdl/winicon.png ${STAGEDIR}${PREFIX}/share/icons
	${INSTALL_DATA} ${WRKSRC}/winicon.bmp ${STAGEDIR}${PREFIX}/share/icons
	${INSTALL_DATA} ${WRKSRC}/sdl/hivelytracker.desktop ${STAGEDIR}${DESKTOPDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} "Instruments Skins ttf" ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} "Songs" ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
