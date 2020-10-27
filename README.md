# Lilygo T-Watch 2020+ tinkerings 

Requires adding library to arduino ide:
https://github.com/Xinyuan-LilyGO/TTGO_TWatch_Library/

Power management works, however ulisp uses blocking reads for REPL. So after you 
push the button you need to evaluate 1-2 forms in REPL for the sleep to kick in.

ulisp gfx works, touchscreen and other stuff not yet

# ulisp-esp
A version of the Lisp programming language for ESP8266 and ESP32-based boards.
For more information see:
http://www.ulisp.com/show?21T5
