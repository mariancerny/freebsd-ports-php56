--- breakiterator/codepointiterator_internal.cpp.orig	2013-06-02 19:07:04.000000000 +0200
+++ breakiterator/codepointiterator_internal.cpp	2021-01-03 15:09:26.886295000 +0100
@@ -29,6 +29,9 @@
 #define U_ALIGNMENT_OFFSET(ptr) U_POINTER_MASK_LSB(ptr, sizeof(UAlignedMemory) - 1)
 #define U_ALIGNMENT_OFFSET_UP(ptr) (sizeof(UAlignedMemory) - U_ALIGNMENT_OFFSET(ptr))
 
+#define TRUE 1
+#define FALSE 0
+
 using namespace PHP;
 
 UOBJECT_DEFINE_RTTI_IMPLEMENTATION(CodePointBreakIterator);
