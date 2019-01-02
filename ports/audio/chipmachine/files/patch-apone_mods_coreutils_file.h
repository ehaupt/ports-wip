--- apone/mods/coreutils/file.h.orig	2018-10-02 18:57:08 UTC
+++ apone/mods/coreutils/file.h
@@ -67,7 +67,7 @@ class File { (public)
 		return fp;
 	}
 #else
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__FreeBSD__)
 #else
 #include <linux/limits.h>
 #endif
