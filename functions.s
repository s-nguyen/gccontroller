;
; file: functions.asm
;
 .text
 .global _init
 _init:
  mov #4, w1
  mov #0, w2
  return
 
  
  .global _assembly
  _assembly:
    call sendOne
    return
    
  sendOne:
    mov w1, LATB
    nop
    nop
    mov w2, LATB
    return
    
  .global _toggle
  _toggle:
    BTG LATB, #2
    return
 
 