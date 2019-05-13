# FreeBSD PHP 5.6 ports

FreeBSD ports subtree to build packages for the unsupported (EoL) PHP 5.6 version.

Updated to the lasted version 5.6.40.

## Preparation

To build the packages you need to add the following to `/etc/make.conf`:

    DEFAULT_VERSIONS += php=5.6
    
    # Needed for PHP 5.6 because it was removed from the tree.
    PHP_EXT_DIR=    20131226
    PHP_EXT_INC=    pcre spl
    _USE_PHP_VER56= bcmath bitset bz2 calendar ctype curl dba dom \
                    bcmath bz2 calendar ctype curl dba dom \
                    enchant exif fileinfo filter ftp gd gettext gmp \
                    hash iconv imap interbase intl json ldap mbstring mcrypt \
                    mssql mysql mysqli odbc opcache \
                    openssl pcntl pcre pdo pdo_dblib pdo_firebird pdo_mysql \
                    pdo_odbc pdo_pgsql pdo_sqlite pgsql phar posix \
                    pspell readline recode session shmop simplexml snmp soap \
                    sockets spl sqlite3 sybase_ct sysvmsg sysvsem sysvshm \
                    tidy tokenizer wddx xml xmlreader xmlrpc xmlwriter xsl zip zlib

Then extract this subtree somewhere in the filesystem (here `/usr/local/ports/php56`):

	mkdir -p /usr/local/ports/php56
	git clone https://github.com/mariancerny/freebsd-ports-php56.git /usr/local/ports/php56

## Installing

Now you can build individual packages:

	cd /usr/local/ports/php56/lang/php56
	make install

	cd /usr/local/ports/php56/www/mod_php56
	make install

## Caveats

Dependencies within this PHP 5.6 ports subtree are not resolved properly. You must install each dependency beforehand.

For example if you try to build `databases/php56-pdo_mysql` first you get the following error:
    
    ===>   php56-pdo_mysql-5.6.40 depends on file: /usr/local/lib/php/20131226/pdo.so - not found
    Error a dependency refers to a non existing origin: /usr/ports/databases/php56-pdo in BUILD_DEPENDS
    Errors with dependencies.
    *** Error code 1
    
    Stop.
    make[1]: stopped in /opt/ports/php56/databases/php56-pdo_mysql

You must install `databases/php56-pdo` manually before installing `databases/php56-pdo_mysq`.
Similarilly you must install `textproc/php56-xml` before `textproc/php56-xmlreader`, etc.

You can even install the meta port `lang/php56-extensions` (for example when you need to export the packages using `pkg create` & `pkg repo`),
you must just install all the selected packages manually beforehand.

## Testing

Tested on FreeBSD 11.2 and 12.0 with main FreeBSD ports tree from May 2019.

It may break in a future version of the main FreeBSD ports tree. Hopefully, it will last for some time.
