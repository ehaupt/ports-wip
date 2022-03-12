--- gui.c.orig	2021-10-31 14:52:21 UTC
+++ gui.c
@@ -3338,7 +3338,7 @@ void gui_loadskinsettings( void )
         // If font cannot be opened/found, load default
         if ( access(prpfontname, F_OK ) == -1 )
         {
-            strcpy( prpfontname, "ttf/DejaVuSans.ttf" );
+            strcpy( prpfontname, "/usr/local/share/hivelytracker/ttf/DejaVuSans.ttf" );
         }
       #endif
       continue;
@@ -3353,7 +3353,7 @@ void gui_loadskinsettings( void )
         
         if ( access(fixfontname, F_OK ) == -1 )
         {
-            strcpy( fixfontname, "ttf/DejaVuSansMono.ttf" );
+            strcpy( fixfontname, "/usr/local/share/hivelytracker/ttf/DejaVuSansMono.ttf" );
         }
       #endif
       continue;
@@ -3368,7 +3368,7 @@ void gui_loadskinsettings( void )
         
         if ( access(sfxfontname, F_OK ) == -1 )
         {
-            strcpy( sfxfontname, "ttf/DejaVuSansMono.ttf" );
+            strcpy( sfxfontname, "/usr/local/share/hivelytracker/ttf/DejaVuSansMono.ttf" );
         }
       #endif
       continue;
@@ -3544,9 +3544,9 @@ void gui_pre_init( void )
   for( i=0; i<TB_END; i++ ) tbx[i].bm.srf = NULL;
 #endif
 
-  strcpy( songdir, "Songs" );
-  strcpy( instdir, "Instruments" );
-  strcpy( skindir, "Skins/SIDMonster-Light" );
+  strcpy( songdir, "/usr/local/share/examples/hivelytracker/Songs" );
+  strcpy( instdir, "/usr/local/share/hivelytracker/Instruments" );
+  strcpy( skindir, "/usr/local/share/hivelytracker/Skins/SIDMonster-Light" );
 
   gui_load_prefs();
 
@@ -3947,9 +3947,9 @@ BOOL gui_init( void )
   strcpy( sfxfontname, "/boot/system/data/fonts/ttfonts/DejaVuSansMono.ttf" );
   strcpy( prpfontname, "/boot/system/data/fonts/ttfonts/DejaVuSans.ttf" );
 #else
-  strcpy( fixfontname, "ttf/DejaVuSansMono.ttf" );
-  strcpy( sfxfontname, "ttf/DejaVuSansMono.ttf" );
-  strcpy( prpfontname, "ttf/DejaVuSans.ttf" );
+  strcpy( fixfontname, "/usr/local/share/hivelytracker/ttf/DejaVuSansMono.ttf" );
+  strcpy( sfxfontname, "/usr/local/share/hivelytracker/ttf/DejaVuSansMono.ttf" );
+  strcpy( prpfontname, "/usr/local/share/hivelytracker/ttf/DejaVuSans.ttf" );
 #endif  
 #endif  
 
