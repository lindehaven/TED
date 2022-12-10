# Introduction

ZED is a fork of TED that adds Zilog Z80 assembly syntax highlighting to TED.
TED is a clone of the editor of the same name that once was available for the
DEC's RT-11 OS.


# Building ZED

Open TED.INC in a text editor and check that HILI is set to TRUE.

Then, set HILIAR to TRUE or FALSE depending on system performance.
* TRUE if automatic refresh of syntax highlighting
* FALSE if manual refresh of screen and the syntax highlighting

Submit the MKZED.SUB file, let M80 assemble and let L80 link to get ZED.COM.


# Testing ZED functionality

Open this file in ZED by typing 'ZED ZED.MD' at the CCP prompt.

Check that highlighting of comments, strings and Z80 mnemonics are correct.

	; A comment like this is displayed in low intensity (faint).
	"A string like this is displayed in italics".
	'A string like this is also displayed in italics'.
        Zilog Z80 mnemonics are displayed in high intensity (boldface):
		add
		and
		call
		pop
		push
		ret
		xor

	Mnemonics are case insensitive so these are also displayed in boldface:
		BIT
		DI
		EI
		RST
		SET

# Testing ZED performance

Create a Zilog Z80 assembly source file that is large (>10K), load it into ZED
and edit it in ZED. Check if your system performance is good enough for smooth
editing and syntax highlighting. If ZED appears sluggish, you can disable the
automatic refresh of syntax highlighting (HILIAR in TED.INC) and rebuild ZED.

My tests with ZED in the YAZE-AG Z80 emulator shows that ZED `can` be used with
automatic refresh of syntax highlighting even if the Z80 CPU frequency is set
as low as 4 MHz. However, a Z80 CPU frequency of 16 MHz or more is needed for
"smooth" editing.

Other hardware may affect TED/ZED even more, especially the kind of storage.
If you run TED/ZED on a modern system, then storage performance will not be an
issue. SSD, HDD, SD cards and USB memories are way faster than floppy drives.
If you have used a real CP/M system with floppies, then you know what I mean.
I can still recall the sound of the drive heads moving up and down the tracks
and sectors when Mince swapped for a few seconds.
