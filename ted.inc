;**********************************************************************;
;                                                                      ;
;   This file is part of TED, a clone of the screen-oriented text      ;
;   editor that was once available for the RT-11 OS.                   ;
;   Copyright (C) 2011-202, Hector Peraza.                             ;
;                                                                      ;
;   This file adds Zilog Z80 assembly syntax highlighting; ZED!        ;
;   Copyright (C) 2022, Lars Lindhaven.                                ;
;                                                                      ;
;   This program is free software; you can redistribute it and/or      ;
;   modify it under the terms of the GNU General Public License as     ;
;   published by the Free Software Foundation; either version 2 of     ;
;   the License, or (at your option) any later version.                ;
;                                                                      ;
;   This program is distributed in the hope that it will be useful,    ;
;   but WITHOUT ANY WARRANTY; without even the implied warranty of     ;
;   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the      ;
;   GNU General Public License for more details.                       ;
;                                                                      ;
;   You should have received a copy of the GNU General Public License  ;
;   along with this program; if not, write to the Free Software        ;
;   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.          ;
;                                                                      ;
;**********************************************************************;

; Global definitions

FALSE	equ	0
TRUE	equ	not FALSE

CR	equ	0Dh		; ASCII carriage return
LF	equ	0Ah		; ASCII line feed
TAB	equ	09h		; ASCII tab
ESC	equ	1Bh		; ASCII escape
SSPC	equ	' '+80h		; soft space (with msb set)

BLKSIZ	equ	512		; disk block size
BUFSIZ	equ	BLKSIZ+4	; memory buffer size (516 bytes)

MAXLEN	equ	162		; max line length


; Zilog Z80 Assembly syntax highlighting

HILI	equ	TRUE	; FALSE disables syntax highlighting all together
HILIAR	equ	TRUE	; FALSE disables autorefresh and gets quicker response
