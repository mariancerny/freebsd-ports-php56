BASEDIR=$( cd `dirname $0` ; pwd )

origins="lang/php56 databases/php56-pdo databases/php56-mysql"
for origin in $origins
do
	if [ ! -e /usr/ports/$origin ]
	then
		ln -s $BASEDIR/$origin /usr/ports/$origin
	fi
done
