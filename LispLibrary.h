const char LispLibrary[] PROGMEM = 
"(defun cub (x) (* x x x))"
"(defvar sleep-request nil)"
"(defun on () (let ((res(not sleep-request))) (setq sleep-request nil) res))"
"(defvar power-status nil)";
