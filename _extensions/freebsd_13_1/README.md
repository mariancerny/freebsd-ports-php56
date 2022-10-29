# PHP Extensions for FreeBSD 13.1

These are compiled under FreeBSD 13.1

## PHP Extensions Table

| Name     | Date       | Tarball                                                             |
|----------|------------|---------------------------------------------------------------------|
| ssh2     | 2016-06-12 | [ssh2-0.13.tgz](https://pecl.php.net/get/ssh2-0.13.tgz)             |
| [phar](https://www.freshports.org/archivers/php56-phar)     |            |                                                                     |
| memcache | 2012-09-22 | [memcache-2.2.7.tgz](https://pecl.php.net/get/memcache-2.2.7.tgz)   |
| memcached | 2014-04-01 | [memcached-2.2.0.tgz](https://pecl.php.net/get/memcached-2.2.0.tgz) |

All extensions are from their stable releases.

---

Here's `php -r 'phpinfo(INFO_MODULES);'` output:

```
ssh2

SSH2 support => enabled
extension version => 0.13
libssh2 version => 1.10.0
banner => SSH-2.0-libssh2_1.10.0
```

```
Phar

Phar: PHP Archive support => enabled
Phar EXT version => 2.0.2
Phar API version => 1.1.1
SVN revision => $Id: 6e5cec2462a6ded53d4379ea9a69487a60d5c43c $
Phar-based phar archives => enabled
Tar-based phar archives => enabled
ZIP-based phar archives => enabled
gzip compression => enabled
bzip2 compression => enabled
OpenSSL support => enabled


Phar based on pear/PHP_Archive, original concept by Davey Shafik.
Phar fully realized by Gregory Beaver and Marcus Boerger.
Portions of tar implementation Copyright (c) 2003-2009 Tim Kientzle.
Directive => Local Value => Master Value
phar.cache_list => no value => no value
phar.readonly => On => On
phar.require_hash => On => On
```

```
memcache

memcache support => enabled
Active persistent connections => 0
Version => 2.2.7
Revision => $Revision: 327750 $

Directive => Local Value => Master Value
memcache.allow_failover => 1 => 1
memcache.chunk_size => 8192 => 8192
memcache.default_port => 11211 => 11211
memcache.default_timeout_ms => 1000 => 1000
memcache.hash_function => crc32 => crc32
memcache.hash_strategy => standard => standard
memcache.max_failover_attempts => 20 => 20
```

```
memcached

memcached support => enabled
Version => 2.2.0
libmemcached version => 1.0.18
SASL support => yes
Session support => yes
igbinary support => no
json support => no
msgpack support => no

Directive => Local Value => Master Value
memcached.compression_factor => 1.3 => 1.3
memcached.compression_threshold => 2000 => 2000
memcached.compression_type => fastlz => fastlz
memcached.serializer => php => php
memcached.sess_binary => 0 => 0
memcached.sess_connect_timeout => 1000 => 1000
memcached.sess_consistent_hash => 0 => 0
memcached.sess_lock_expire => 0 => 0
memcached.sess_lock_max_wait => 0 => 0
memcached.sess_lock_wait => 150000 => 150000
memcached.sess_locking => 1 => 1
memcached.sess_number_of_replicas => 0 => 0
memcached.sess_prefix => memc.sess.key. => memc.sess.key.
memcached.sess_randomize_replica_read => 0 => 0
memcached.sess_remove_failed => 0 => 0
memcached.sess_sasl_password => no value => no value
memcached.sess_sasl_username => no value => no value
memcached.store_retry_count => 2 => 2
memcached.use_sasl => 0 => 0
```