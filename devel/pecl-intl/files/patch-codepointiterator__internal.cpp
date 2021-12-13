--- breakiterator/codepointiterator_internal.cpp.orig	2013-06-02 19:07:04.000000000 +0200
+++ breakiterator/codepointiterator_internal.cpp	2021-12-13 17:38:40.519963000 +0100
@@ -29,6 +29,9 @@
 #define U_ALIGNMENT_OFFSET(ptr) U_POINTER_MASK_LSB(ptr, sizeof(UAlignedMemory) - 1)
 #define U_ALIGNMENT_OFFSET_UP(ptr) (sizeof(UAlignedMemory) - U_ALIGNMENT_OFFSET(ptr))
 
+#define TRUE 1
+#define FALSE 0
+
 using namespace PHP;
 
 UOBJECT_DEFINE_RTTI_IMPLEMENTATION(CodePointBreakIterator);
@@ -72,7 +75,7 @@
 	clearCurrentCharIter();
 }
 
-UBool CodePointBreakIterator::operator==(const BreakIterator& that) const
+bool CodePointBreakIterator::operator==(const BreakIterator& that) const
 {
 	if (typeid(*this) != typeid(that)) {
 		return FALSE;
