--- sdl/ht.c.orig	2021-10-31 14:52:21 UTC
+++ sdl/ht.c
@@ -10,7 +10,7 @@
 #include <gui.h>
 #include <about.h>
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 #include <gtk/gtk.h>
 #endif
 
@@ -42,11 +42,11 @@ BOOL hively_init( void )
   if( (info = SDL_GetVideoInfo()) )
     srfdepth = info->vfmt->BitsPerPixel;
 
-  SDL_WM_SetIcon( SDL_LoadBMP( "winicon.bmp" ), NULL );
+  SDL_WM_SetIcon( SDL_LoadBMP( "/usr/local/share/icons/winicon.bmp" ), NULL );
   SDL_EnableUNICODE(SDL_FALSE);
 
   // Try to setup the video display
-#if defined(WIN32) || defined(__APPLE__) || defined(__linux__)
+#if defined(WIN32) || defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__)
   // requesters cause all kinds of problems for fullscreen on windows and OSX, so ignore it
   ssrf = SDL_SetVideoMode( 800, 600, srfdepth, SRFTYPE );
 #else
@@ -86,7 +86,7 @@ static void hively_shutdown( void )
 
 int main( int argc, char *argv[] )
 {
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   if (!gtk_init_check(&argc, &argv))
   {
     printf("GTK is sad :-(\n");
