--- config.m4.orig	2021-01-03 15:01:23.014202000 +0100
+++ config.m4	2021-01-03 15:00:49.503769000 +0100
@@ -103,4 +103,6 @@
   PHP_ADD_BUILD_DIR($ext_builddir/spoofchecker)
   PHP_ADD_BUILD_DIR($ext_builddir/breakiterator)
   PHP_ADD_EXTENSION_DEP(intl, date, true)
+  AC_DEFINE(TRUE, 1, Define true)
+  AC_DEFINE(FALSE, 0, Define false)
 fi
