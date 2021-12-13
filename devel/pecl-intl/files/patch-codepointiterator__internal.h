--- breakiterator/codepointiterator_internal.h.orig	2013-06-02 19:07:04.000000000 +0200
+++ breakiterator/codepointiterator_internal.h	2021-12-13 17:38:21.133203000 +0100
@@ -36,7 +36,7 @@
 
 		virtual ~CodePointBreakIterator();
 
-		virtual UBool operator==(const BreakIterator& that) const;
+		virtual bool operator==(const BreakIterator& that) const;
 
 		virtual CodePointBreakIterator* clone(void) const;
 
