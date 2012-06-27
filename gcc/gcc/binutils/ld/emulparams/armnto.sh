MACHINE=
SCRIPT_NAME=elf
OUTPUT_FORMAT="elf32-littlearm"
BIG_OUTPUT_FORMAT="elf32-bigarm"
LITTLE_OUTPUT_FORMAT="elf32-littlearm"
TEXT_START_ADDR=0x00100000
TEMPLATE_NAME=elf32
NTO_BASE_EM_FILE=armelf
OTHER_TEXT_SECTIONS='*(.glue_7t) *(.glue_7) *(.vfp11_veneer) *(.v4_bx)'
OTHER_BSS_SYMBOLS='__bss_start__ = .;'
OTHER_BSS_END_SYMBOLS='_bss_end__ = . ; __bss_end__ = . ;'
OTHER_END_SYMBOLS='__end__ = . ;'

TEXT_START_SYMBOLS='_btext = . ;'
DATA_START_SYMBOLS='__data_start = . ;';

GENERATE_SHLIB_SCRIPT=yes

ARCH=arm
MACHINE=
MAXPAGESIZE="CONSTANT (MAXPAGESIZE)"

ENTRY=_start

# This sets the stack to the top of the simulator memory (2^19 bytes).
STACK_ADDR=0x80000
TARGET2_TYPE=got-rel

OTHER_READONLY_SECTIONS="
  .ARM.extab ${RELOCATING-0} : { *(.ARM.extab${RELOCATING+* .gnu.linkonce.armextab.*}) }
  ${RELOCATING+ __exidx_start = .; }
  .ARM.exidx ${RELOCATING-0} : { *(.ARM.exidx${RELOCATING+* .gnu.linkonce.armexidx.*}) }
  ${RELOCATING+ __exidx_end = .; }"

# ARM does not support .s* sections.
NO_SMALL_DATA=yes
EXTRA_EM_FILE=nto
