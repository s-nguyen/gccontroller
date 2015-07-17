;
; file: functions.s
;

  .global _assembly
  _assembly:
    call sendZero
    call sendOne
    call sendZero
    call sendZero
    
    call sendZero
    call sendZero
    call sendZero
    call sendZero
    
    call sendZero
    call sendZero
    call sendZero
    call sendZero
    
    call sendZero
    call sendZero
    call sendOne
    call sendOne
    
    call sendZero
    call sendZero
    call sendZero
    call sendZero
    
    call sendZero
    call sendZero
    call sendOne
    call sendZero
    return
    
  sendZero:
    BCLR LATB, #2
    call delay29
    BSET LATB, #2
    nop
    nop
    nop
    nop
    return
  sendOne:
    bclr LATB, #2
    call delay9
    bset LATB, #2
    call delay25
    return
  .global _toggle
  _toggle:
    BTG LATB, #2
    return
  
  delay29:
    nop
    nop
    nop
    nop
    nop
  delay25:
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  delay9:
    nop
    nop
    nop
    nop
  delay5:
    return
 
  