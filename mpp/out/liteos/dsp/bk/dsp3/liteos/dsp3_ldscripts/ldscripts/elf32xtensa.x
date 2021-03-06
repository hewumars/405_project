/* This linker script generated from xt-genldscripts.tpp for LSP dsp3_ldscripts */
/* Linker Script for default link */
MEMORY
{
  dram0_3_seg :                       	org = 0x15101000, len = 0x3000
  dram0_2_seg :                       	org = 0x15104000, len = 0xC000
  dram0_0_seg :                       	org = 0x15110000, len = 0x30000
  dram1_0_seg :                       	org = 0x15210000, len = 0x30000
  RESET_seg :                         	org = 0x40000000, len = 0x300
  WINDOW_seg :                        	org = 0x40000400, len = 0x178
  LEVEL2_LIT_seg :                    	org = 0x40000578, len = 0x8
  LEVEL2_seg :                        	org = 0x40000580, len = 0x38
  DEBUG_LIT_seg :                     	org = 0x400005B8, len = 0x8
  DEBUG_seg :                         	org = 0x400005C0, len = 0x38
  NMI_LIT_seg :                       	org = 0x400005F8, len = 0x8
  NMI_seg :                           	org = 0x40000600, len = 0x38
  KERNEL_LIT_seg :                    	org = 0x40000638, len = 0x8
  KERNEL_seg :                        	org = 0x40000640, len = 0x38
  USER_LIT_seg :                      	org = 0x40000678, len = 0x8
  USER_seg :                          	org = 0x40000680, len = 0x38
  DOUBLE_LIT_seg :                    	org = 0x400006B8, len = 0x48
  DOUBLE_seg :                        	org = 0x40000700, len = 0x40
  IRAM0_LIT_seg :                     	org = 0x40000740, len = 0xC0
  IRAM0_seg :                         	org = 0x40000800, len = 0x7800
  SRAM_00_seg :                       	org = 0x42F08000, len = 0x300000
  SRAM_01_seg :                       	org = 0x43208000, len = 0x900000
  SRAM_02_seg :                       	org = 0x43B08000, len = 0x100000
  sram0_seg :                         	org = 0x43C08000, len = 0x200000
}

PHDRS
{
  dram0_1_phdr PT_LOAD;
  dram0_3_phdr PT_LOAD;
  dram0_3_bss_phdr PT_LOAD;
  dram0_2_phdr PT_LOAD;
  dram0_2_bss_phdr PT_LOAD;
  dram0_0_phdr PT_LOAD;
  dram0_0_bss_phdr PT_LOAD;
  dram1_0_phdr PT_LOAD;
  dram1_0_bss_phdr PT_LOAD;
  RESET_phdr PT_LOAD;
  WINDOW_phdr PT_LOAD;
  LEVEL2_LIT_phdr PT_LOAD;
  LEVEL2_phdr PT_LOAD;
  DEBUG_LIT_phdr PT_LOAD;
  DEBUG_phdr PT_LOAD;
  NMI_LIT_phdr PT_LOAD;
  NMI_phdr PT_LOAD;
  KERNEL_LIT_phdr PT_LOAD;
  KERNEL_phdr PT_LOAD;
  USER_LIT_phdr PT_LOAD;
  USER_phdr PT_LOAD;
  DOUBLE_LIT_phdr PT_LOAD;
  DOUBLE_phdr PT_LOAD;
  IRAM0_LIT_phdr PT_LOAD;
  IRAM0_phdr PT_LOAD;
  SRAM_00_phdr PT_LOAD;
  SRAM_00_bss_phdr PT_LOAD;
  SRAM_01_phdr PT_LOAD;
  SRAM_02_phdr PT_LOAD;
  sram0_phdr PT_LOAD;
}


/*  Default entry point:  */
ENTRY(_PostResetVector)

/*  Memory boundary addresses:  */
_memmap_mem_SRAM_00_start = 0x42f08000;
_memmap_mem_SRAM_00_end   = 0x43208000;
_memmap_mem_SRAM_01_start = 0x43208000;
_memmap_mem_SRAM_01_end   = 0x43b08000;
_memmap_mem_SRAM_02_start = 0x43b08000;
_memmap_mem_SRAM_02_end   = 0x43c08000;
_memmap_mem_sram_start = 0x43c08000;
_memmap_mem_sram_end   = 0x43e08000;
_memmap_mem_dram0_start = 0x15100000;
_memmap_mem_dram0_end   = 0x15140000;
_memmap_mem_dram1_start = 0x15210000;
_memmap_mem_dram1_end   = 0x15240000;
_memmap_mem_fixvector_start = 0x40000000;
_memmap_mem_fixvector_end   = 0x40000300;
_memmap_mem_iram0_start = 0x40000400;
_memmap_mem_iram0_end   = 0x40008000;

/*  Memory segment boundary addresses:  */
_memmap_seg_dram0_3_start = 0x15101000;
_memmap_seg_dram0_3_max   = 0x15104000;
_memmap_seg_dram0_2_start = 0x15104000;
_memmap_seg_dram0_2_max   = 0x15110000;
_memmap_seg_dram0_0_start = 0x15110000;
_memmap_seg_dram0_0_max   = 0x15140000;
_memmap_seg_dram1_0_start = 0x15210000;
_memmap_seg_dram1_0_max   = 0x15240000;
_memmap_seg_RESET_start = 0x40000000;
_memmap_seg_RESET_max   = 0x40000300;
_memmap_seg_WINDOW_start = 0x40000400;
_memmap_seg_WINDOW_max   = 0x40000578;
_memmap_seg_LEVEL2_LIT_start = 0x40000578;
_memmap_seg_LEVEL2_LIT_max   = 0x40000580;
_memmap_seg_LEVEL2_start = 0x40000580;
_memmap_seg_LEVEL2_max   = 0x400005b8;
_memmap_seg_DEBUG_LIT_start = 0x400005b8;
_memmap_seg_DEBUG_LIT_max   = 0x400005c0;
_memmap_seg_DEBUG_start = 0x400005c0;
_memmap_seg_DEBUG_max   = 0x400005f8;
_memmap_seg_NMI_LIT_start = 0x400005f8;
_memmap_seg_NMI_LIT_max   = 0x40000600;
_memmap_seg_NMI_start = 0x40000600;
_memmap_seg_NMI_max   = 0x40000638;
_memmap_seg_KERNEL_LIT_start = 0x40000638;
_memmap_seg_KERNEL_LIT_max   = 0x40000640;
_memmap_seg_KERNEL_start = 0x40000640;
_memmap_seg_KERNEL_max   = 0x40000678;
_memmap_seg_USER_LIT_start = 0x40000678;
_memmap_seg_USER_LIT_max   = 0x40000680;
_memmap_seg_USER_start = 0x40000680;
_memmap_seg_USER_max   = 0x400006b8;
_memmap_seg_DOUBLE_LIT_start = 0x400006b8;
_memmap_seg_DOUBLE_LIT_max   = 0x40000700;
_memmap_seg_DOUBLE_start = 0x40000700;
_memmap_seg_DOUBLE_max   = 0x40000740;
_memmap_seg_IRAM0_LIT_start = 0x40000740;
_memmap_seg_IRAM0_LIT_max   = 0x40000800;
_memmap_seg_IRAM0_start = 0x40000800;
_memmap_seg_IRAM0_max   = 0x40008000;
_memmap_seg_SRAM_00_start = 0x42f08000;
_memmap_seg_SRAM_00_max   = 0x43208000;
_memmap_seg_SRAM_01_start = 0x43208000;
_memmap_seg_SRAM_01_max   = 0x43b08000;
_memmap_seg_SRAM_02_start = 0x43b08000;
_memmap_seg_SRAM_02_max   = 0x43c08000;
_memmap_seg_sram0_start = 0x43c08000;
_memmap_seg_sram0_max   = 0x43e08000;

_rom_store_table = 0;
PROVIDE(_memmap_vecbase_reset = 0x40000400);
PROVIDE(_memmap_reset_vector = 0x40000000);
/* Various memory-map dependent cache attribute settings: */
_memmap_cacheattr_wb_base = 0x00000104;
_memmap_cacheattr_wt_base = 0x00000304;
_memmap_cacheattr_bp_base = 0x00000404;
_memmap_cacheattr_unused_mask = 0xFFFFF0F0;
_memmap_cacheattr_wb_trapnull = 0x44444144;
_memmap_cacheattr_wba_trapnull = 0x44444144;
_memmap_cacheattr_wbna_trapnull = 0x44444244;
_memmap_cacheattr_wt_trapnull = 0x44444344;
_memmap_cacheattr_bp_trapnull = 0x44444444;
_memmap_cacheattr_wb_strict = 0x00000104;
_memmap_cacheattr_wt_strict = 0x00000304;
_memmap_cacheattr_bp_strict = 0x00000404;
_memmap_cacheattr_wb_allvalid = 0x44444144;
_memmap_cacheattr_wt_allvalid = 0x44444344;
_memmap_cacheattr_bp_allvalid = 0x44444444;
PROVIDE(_memmap_cacheattr_reset = _memmap_cacheattr_wb_trapnull);

SECTIONS
{
  _stack_sentry = 0x15100000;
  PROVIDE(__stack = 0x15101000);

  .dram0_3.rodata : ALIGN(4)
  {
    _dram0_3_rodata_start = ABSOLUTE(.);
    *(.dram0_3.rodata)
    _dram0_3_rodata_end = ABSOLUTE(.);
  } >dram0_3_seg :dram0_3_phdr

  .dram0_3.literal : ALIGN(4)
  {
    _dram0_3_literal_start = ABSOLUTE(.);
    *(.dram0_3.literal)
    _dram0_3_literal_end = ABSOLUTE(.);
  } >dram0_3_seg :dram0_3_phdr

  .dram0_3.data : ALIGN(4)
  {
    _dram0_3_data_start = ABSOLUTE(.);
    *(.dram0_3.data)
    _dram0_3_data_end = ABSOLUTE(.);
  } >dram0_3_seg :dram0_3_phdr

  .dram0_3.bss (NOLOAD) : ALIGN(8)
  {
    . = ALIGN (8);
    _dram0_3_bss_start = ABSOLUTE(.);
    *(.dram0_3.bss)
    . = ALIGN (8);
    _dram0_3_bss_end = ABSOLUTE(.);
    _memmap_seg_dram0_3_end = ALIGN(0x8);
  } >dram0_3_seg :dram0_3_bss_phdr

  .dram0_2.rodata : ALIGN(4)
  {
    _dram0_2_rodata_start = ABSOLUTE(.);
    *(.dram0_2.rodata)
    _dram0_2_rodata_end = ABSOLUTE(.);
  } >dram0_2_seg :dram0_2_phdr

  .dram0_2.literal : ALIGN(4)
  {
    _dram0_2_literal_start = ABSOLUTE(.);
    *(.dram0_2.literal)
    _dram0_2_literal_end = ABSOLUTE(.);
  } >dram0_2_seg :dram0_2_phdr

  .dram0_2.data : ALIGN(4)
  {
    _dram0_2_data_start = ABSOLUTE(.);
    *(.dram0_2.data)
    _dram0_2_data_end = ABSOLUTE(.);
  } >dram0_2_seg :dram0_2_phdr

  .dram0_2.bss (NOLOAD) : ALIGN(8)
  {
    . = ALIGN (8);
    _dram0_2_bss_start = ABSOLUTE(.);
    *(.dram0_2.bss)
    . = ALIGN (8);
    _dram0_2_bss_end = ABSOLUTE(.);
    _memmap_seg_dram0_2_end = ALIGN(0x8);
  } >dram0_2_seg :dram0_2_bss_phdr

  .dram0.rodata : ALIGN(4)
  {
    _dram0_rodata_start = ABSOLUTE(.);
    *(.dram0.rodata)
    _dram0_rodata_end = ABSOLUTE(.);
  } >dram0_0_seg :dram0_0_phdr

  .dram0.literal : ALIGN(4)
  {
    _dram0_literal_start = ABSOLUTE(.);
    *(.dram0.literal)
    _dram0_literal_end = ABSOLUTE(.);
  } >dram0_0_seg :dram0_0_phdr

  .dram0.data : ALIGN(4)
  {
    _dram0_data_start = ABSOLUTE(.);
    *(.dram0.data)
    _dram0_data_end = ABSOLUTE(.);
  } >dram0_0_seg :dram0_0_phdr

  .dram0.bss (NOLOAD) : ALIGN(8)
  {
    . = ALIGN (8);
    _dram0_bss_start = ABSOLUTE(.);
    *(.dram0.bss)
    . = ALIGN (8);
    _dram0_bss_end = ABSOLUTE(.);
    _memmap_seg_dram0_0_end = ALIGN(0x8);
  } >dram0_0_seg :dram0_0_bss_phdr

  .dram1.rodata : ALIGN(4)
  {
    _dram1_rodata_start = ABSOLUTE(.);
    *(.dram1.rodata)
    _dram1_rodata_end = ABSOLUTE(.);
  } >dram1_0_seg :dram1_0_phdr

  .dram1.literal : ALIGN(4)
  {
    _dram1_literal_start = ABSOLUTE(.);
    *(.dram1.literal)
    _dram1_literal_end = ABSOLUTE(.);
  } >dram1_0_seg :dram1_0_phdr

  .dram1.data : ALIGN(4)
  {
    _dram1_data_start = ABSOLUTE(.);
    *(.dram1.data)
    _dram1_data_end = ABSOLUTE(.);
  } >dram1_0_seg :dram1_0_phdr

  .dram1.bss (NOLOAD) : ALIGN(8)
  {
    . = ALIGN (8);
    _dram1_bss_start = ABSOLUTE(.);
    *(.dram1.bss)
    . = ALIGN (8);
    _dram1_bss_end = ABSOLUTE(.);
    _memmap_seg_dram1_0_end = ALIGN(0x8);
  } >dram1_0_seg :dram1_0_bss_phdr

  .ResetVector.text : ALIGN(4)
  {
    _ResetVector_text_start = ABSOLUTE(.);
    KEEP (*(.ResetVector.text))
    _ResetVector_text_end = ABSOLUTE(.);
  } >RESET_seg :RESET_phdr

  .PostResetVector.text : ALIGN(4)
  {
    _PostResetVector_text_start = ABSOLUTE(.);
    KEEP (*(.PostResetVector.text))
    _PostResetVector_text_end = ABSOLUTE(.);
    _memmap_seg_RESET_end = ALIGN(0x8);
  } >RESET_seg :RESET_phdr

  .WindowVectors.text : ALIGN(4)
  {
    _WindowVectors_text_start = ABSOLUTE(.);
    KEEP (*(.WindowVectors.text))
    _WindowVectors_text_end = ABSOLUTE(.);
    _memmap_seg_WINDOW_end = ALIGN(0x8);
  } >WINDOW_seg :WINDOW_phdr

  .Level2InterruptVector.literal : ALIGN(4)
  {
    _Level2InterruptVector_literal_start = ABSOLUTE(.);
    *(.Level2InterruptVector.literal)
    _Level2InterruptVector_literal_end = ABSOLUTE(.);
    _memmap_seg_LEVEL2_LIT_end = ALIGN(0x8);
  } >LEVEL2_LIT_seg :LEVEL2_LIT_phdr

  .Level2InterruptVector.text : ALIGN(4)
  {
    _Level2InterruptVector_text_start = ABSOLUTE(.);
    KEEP (*(.Level2InterruptVector.text))
    _Level2InterruptVector_text_end = ABSOLUTE(.);
    _memmap_seg_LEVEL2_end = ALIGN(0x8);
  } >LEVEL2_seg :LEVEL2_phdr

  .DebugExceptionVector.literal : ALIGN(4)
  {
    _DebugExceptionVector_literal_start = ABSOLUTE(.);
    *(.DebugExceptionVector.literal)
    _DebugExceptionVector_literal_end = ABSOLUTE(.);
    _memmap_seg_DEBUG_LIT_end = ALIGN(0x8);
  } >DEBUG_LIT_seg :DEBUG_LIT_phdr

  .DebugExceptionVector.text : ALIGN(4)
  {
    _DebugExceptionVector_text_start = ABSOLUTE(.);
    KEEP (*(.DebugExceptionVector.text))
    _DebugExceptionVector_text_end = ABSOLUTE(.);
    _memmap_seg_DEBUG_end = ALIGN(0x8);
  } >DEBUG_seg :DEBUG_phdr

  .NMIExceptionVector.literal : ALIGN(4)
  {
    _NMIExceptionVector_literal_start = ABSOLUTE(.);
    *(.NMIExceptionVector.literal)
    _NMIExceptionVector_literal_end = ABSOLUTE(.);
    _memmap_seg_NMI_LIT_end = ALIGN(0x8);
  } >NMI_LIT_seg :NMI_LIT_phdr

  .NMIExceptionVector.text : ALIGN(4)
  {
    _NMIExceptionVector_text_start = ABSOLUTE(.);
    KEEP (*(.NMIExceptionVector.text))
    _NMIExceptionVector_text_end = ABSOLUTE(.);
    _memmap_seg_NMI_end = ALIGN(0x8);
  } >NMI_seg :NMI_phdr

  .KernelExceptionVector.literal : ALIGN(4)
  {
    _KernelExceptionVector_literal_start = ABSOLUTE(.);
    *(.KernelExceptionVector.literal)
    _KernelExceptionVector_literal_end = ABSOLUTE(.);
    _memmap_seg_KERNEL_LIT_end = ALIGN(0x8);
  } >KERNEL_LIT_seg :KERNEL_LIT_phdr

  .KernelExceptionVector.text : ALIGN(4)
  {
    _KernelExceptionVector_text_start = ABSOLUTE(.);
    KEEP (*(.KernelExceptionVector.text))
    _KernelExceptionVector_text_end = ABSOLUTE(.);
    _memmap_seg_KERNEL_end = ALIGN(0x8);
  } >KERNEL_seg :KERNEL_phdr

  .UserExceptionVector.literal : ALIGN(4)
  {
    _UserExceptionVector_literal_start = ABSOLUTE(.);
    *(.UserExceptionVector.literal)
    _UserExceptionVector_literal_end = ABSOLUTE(.);
    _memmap_seg_USER_LIT_end = ALIGN(0x8);
  } >USER_LIT_seg :USER_LIT_phdr

  .UserExceptionVector.text : ALIGN(4)
  {
    _UserExceptionVector_text_start = ABSOLUTE(.);
    KEEP (*(.UserExceptionVector.text))
    _UserExceptionVector_text_end = ABSOLUTE(.);
    _memmap_seg_USER_end = ALIGN(0x8);
  } >USER_seg :USER_phdr

  .DoubleExceptionVector.literal : ALIGN(4)
  {
    _DoubleExceptionVector_literal_start = ABSOLUTE(.);
    *(.DoubleExceptionVector.literal)
    _DoubleExceptionVector_literal_end = ABSOLUTE(.);
    _memmap_seg_DOUBLE_LIT_end = ALIGN(0x8);
  } >DOUBLE_LIT_seg :DOUBLE_LIT_phdr

  .DoubleExceptionVector.text : ALIGN(4)
  {
    _DoubleExceptionVector_text_start = ABSOLUTE(.);
    KEEP (*(.DoubleExceptionVector.text))
    _DoubleExceptionVector_text_end = ABSOLUTE(.);
    _memmap_seg_DOUBLE_end = ALIGN(0x8);
  } >DOUBLE_seg :DOUBLE_phdr

  .iram0.literal : ALIGN(4)
  {
    _iram0_literal_start = ABSOLUTE(.);
    *(.iram0.literal)
    *(.iram.literal)
    *(.iram.text.literal)
    _iram0_literal_end = ABSOLUTE(.);
    _memmap_seg_IRAM0_LIT_end = ALIGN(0x8);
  } >IRAM0_LIT_seg :IRAM0_LIT_phdr

  .iram0.text : ALIGN(4)
  {
    _iram0_text_start = ABSOLUTE(.);
    KEEP (*(.iram0.text))
    *(.iram.text)
    _iram0_text_end = ABSOLUTE(.);
    _memmap_seg_IRAM0_end = ALIGN(0x8);
  } >IRAM0_seg :IRAM0_phdr

  .os.hshell.data : ALIGN(4)
  {
    _os_hshell_data_start = ABSOLUTE(.);
    *(.os.hshell.data)
    _os_hshell_data_end = ABSOLUTE(.);
  } >SRAM_00_seg :SRAM_00_phdr

  .os.jmptable.data : ALIGN(4)
  {
    _os_jmptable_data_start = ABSOLUTE(.);
    *(.os.jmptable.data)
    _os_jmptable_data_end = ABSOLUTE(.);
  } >SRAM_00_seg :SRAM_00_phdr

  .os.init.data : ALIGN(4)
  {
    _os_init_data_start = ABSOLUTE(.);
    *(.os.init.data)
    _os_init_data_end = ABSOLUTE(.);
  } >SRAM_00_seg :SRAM_00_phdr

  .os.data : ALIGN(4)
  {
    _os_data_start = ABSOLUTE(.);
    *(.os.data)
    _os_data_end = ABSOLUTE(.);
  } >SRAM_00_seg :SRAM_00_phdr

  .data : ALIGN(4)
  {
    _data_start = ABSOLUTE(.);
    *(.data)
    *(.data.*)
    *(.gnu.linkonce.d.*)
    KEEP(*(.gnu.linkonce.d.*personality*))
    *(.data1)
    *(.sdata)
    *(.sdata.*)
    *(.gnu.linkonce.s.*)
    *(.sdata2)
    *(.sdata2.*)
    *(.gnu.linkonce.s2.*)
    KEEP(*(.jcr))
    _data_end = ABSOLUTE(.);
  } >SRAM_00_seg :SRAM_00_phdr

  .os.shared.data : ALIGN(4)
  {
    _os_shared_data_start = ABSOLUTE(.);
    *(.os.shared.data)
    _os_shared_data_end = ABSOLUTE(.);
  } >SRAM_00_seg :SRAM_00_phdr

  .bss (NOLOAD) : ALIGN(8)
  {
    . = ALIGN (8);
    _bss_start = ABSOLUTE(.);
    *(.dynsbss)
    *(.sbss)
    *(.sbss.*)
    *(.gnu.linkonce.sb.*)
    *(.scommon)
    *(.sbss2)
    *(.sbss2.*)
    *(.gnu.linkonce.sb2.*)
    *(.dynbss)
    *(.bss)
    *(.bss.*)
    *(.gnu.linkonce.b.*)
    *(COMMON)
    *(.os.shared.bss)
    *(.os.init.bss)
    *(.os.bss)
    . = ALIGN (8);
    _bss_end = ABSOLUTE(.);
    _memmap_seg_SRAM_00_end = ALIGN(0x8);
  } >SRAM_00_seg :SRAM_00_bss_phdr

  .os.data.icunit : ALIGN(4)
  {
    _os_data_icunit_start = ABSOLUTE(.);
    *(.os.data.icunit)
    _os_data_icunit_end = ABSOLUTE(.);
  } >SRAM_01_seg :SRAM_01_phdr

  .os.shared.test.data : ALIGN(4)
  {
    _os_shared_test_data_start = ABSOLUTE(.);
    *(.os.shared.test.data)
    _os_shared_test_data_end = ABSOLUTE(.);
  } >SRAM_01_seg :SRAM_01_phdr

  .text : ALIGN(4)
  {
    _stext = .;
    _text_start = ABSOLUTE(.);
    *(.entry.text)
    *(.init.literal)
    KEEP(*(.init))
    *(.literal .text .literal.* .text.* .stub .gnu.warning .gnu.linkonce.literal.* .gnu.linkonce.t.*.literal .gnu.linkonce.t.*)
    *(.fini.literal)
    KEEP(*(.fini))
    *(.gnu.version)
    _text_end = ABSOLUTE(.);
    _etext = .;
  } >SRAM_01_seg :SRAM_01_phdr

  .os.kernel.text : ALIGN(4)
  {
    _os_kernel_text_start = ABSOLUTE(.);
    *(.os.kernel.literal .os.kernel.text)
    _os_kernel_text_end = ABSOLUTE(.);
  } >SRAM_01_seg :SRAM_01_phdr

  .os.monitor.text : ALIGN(4)
  {
    _os_monitor_text_start = ABSOLUTE(.);
    *(.os.monitor.literal .os.monitor.text)
    _os_monitor_text_end = ABSOLUTE(.);
  } >SRAM_01_seg :SRAM_01_phdr

  .os.text : ALIGN(4)
  {
    _os_text_start = ABSOLUTE(.);
    *(.os.literal .os.text)
    _os_text_end = ABSOLUTE(.);
  } >SRAM_02_seg :SRAM_02_phdr

  .os.minor.text : ALIGN(4)
  {
    _os_minor_text_start = ABSOLUTE(.);
    *(.os.minor.literal .os.minor.text)
    _os_minor_text_end = ABSOLUTE(.);
  } >SRAM_02_seg :SRAM_02_phdr

  .os.init.text : ALIGN(4)
  {
    _os_init_text_start = ABSOLUTE(.);
    *(.os.init.literal .os.init.text)
    _os_init_text_end = ABSOLUTE(.);
    _memmap_seg_SRAM_02_end = ALIGN(0x8);
  } >SRAM_02_seg :SRAM_02_phdr

  .sram.rodata : ALIGN(4)
  {
    _sram_rodata_start = ABSOLUTE(.);
    *(.sram.rodata)
    _sram_rodata_end = ABSOLUTE(.);
  } >sram0_seg :sram0_phdr

  .rodata : ALIGN(4)
  {
    _rodata_start = ABSOLUTE(.);
    *(.rodata)
    *(.rodata.*)
    *(.gnu.linkonce.r.*)
    *(.rodata1)
    __XT_EXCEPTION_TABLE__ = ABSOLUTE(.);
    KEEP (*(.xt_except_table))
    KEEP (*(.gcc_except_table))
    *(.gnu.linkonce.e.*)
    *(.gnu.version_r)
    KEEP (*(.eh_frame))
    /*  C++ constructor and destructor tables, properly ordered:  */
    KEEP (*crtbegin.o(.ctors))
    KEEP (*(EXCLUDE_FILE (*crtend.o) .ctors))
    KEEP (*(SORT(.ctors.*)))
    KEEP (*(.ctors))
    KEEP (*crtbegin.o(.dtors))
    KEEP (*(EXCLUDE_FILE (*crtend.o) .dtors))
    KEEP (*(SORT(.dtors.*)))
    KEEP (*(.dtors))
    /*  C++ exception handlers table:  */
    __XT_EXCEPTION_DESCS__ = ABSOLUTE(.);
    *(.xt_except_desc)
    *(.gnu.linkonce.h.*)
    __XT_EXCEPTION_DESCS_END__ = ABSOLUTE(.);
    *(.xt_except_desc_end)
    *(.dynamic)
    *(.gnu.version_d)
    . = ALIGN(4);		/* this table MUST be 4-byte aligned */
    _bss_table_start = ABSOLUTE(.);
    LONG(_dram0_3_bss_start)
    LONG(_dram0_3_bss_end)
    LONG(_dram0_2_bss_start)
    LONG(_dram0_2_bss_end)
    LONG(_dram0_bss_start)
    LONG(_dram0_bss_end)
    LONG(_dram1_bss_start)
    LONG(_dram1_bss_end)
    LONG(_bss_start)
    LONG(_bss_end)
    _bss_table_end = ABSOLUTE(.);
    _rodata_end = ABSOLUTE(.);
    _end = ALIGN(0x8);
    PROVIDE(end = ALIGN(0x8));
    _memmap_seg_sram0_end = ALIGN(0x8);
  } >sram0_seg :sram0_phdr
  _heap_sentry = 0x43e08000;
  .debug  0 :  { *(.debug) }
  .line  0 :  { *(.line) }
  .debug_srcinfo  0 :  { *(.debug_srcinfo) }
  .debug_sfnames  0 :  { *(.debug_sfnames) }
  .debug_aranges  0 :  { *(.debug_aranges) }
  .debug_pubnames  0 :  { *(.debug_pubnames) }
  .debug_info  0 :  { *(.debug_info) }
  .debug_abbrev  0 :  { *(.debug_abbrev) }
  .debug_line  0 :  { *(.debug_line) }
  .debug_frame  0 :  { *(.debug_frame) }
  .debug_str  0 :  { *(.debug_str) }
  .debug_loc  0 :  { *(.debug_loc) }
  .debug_macinfo  0 :  { *(.debug_macinfo) }
  .debug_weaknames  0 :  { *(.debug_weaknames) }
  .debug_funcnames  0 :  { *(.debug_funcnames) }
  .debug_typenames  0 :  { *(.debug_typenames) }
  .debug_varnames  0 :  { *(.debug_varnames) }
  .xt.insn 0 :
  {
    KEEP (*(.xt.insn))
    KEEP (*(.gnu.linkonce.x.*))
  }
  .xt.prop 0 :
  {
    KEEP (*(.xt.prop))
    KEEP (*(.xt.prop.*))
    KEEP (*(.gnu.linkonce.prop.*))
  }
  .xt.lit 0 :
  {
    KEEP (*(.xt.lit))
    KEEP (*(.xt.lit.*))
    KEEP (*(.gnu.linkonce.p.*))
  }
  .debug.xt.callgraph 0 :
  {
    KEEP (*(.debug.xt.callgraph .debug.xt.callgraph.* .gnu.linkonce.xt.callgraph.*))
  }
}

