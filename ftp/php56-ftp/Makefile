# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/ftp/php56-ftp/Makefile 422652 2016-09-23 08:26:44Z tz $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php56

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
